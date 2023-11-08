#include "./includes/Pomodoro.h"
#include "./includes/Palavras.h"
#include "./includes/Tipos.h"
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <string>

Pomodoro::Pomodoro() {
  this->usuario = "";
  this->estado = true;
  this->config = {this->converteTempo(2100), this->converteTempo(300),
                  this->converteTempo(900)};
}

// Refatoração futura
//
// Pomodoro::Pomodoro(std::string usuario) {
//  this->usuario = usuario;
//  this->estado = true;
//  this->config = {{"00", "00"}, {"00", "00"}, {"00", "00"}};
//}

std::string Pomodoro::getUsuario() { return this->usuario; }

void Pomodoro::setUsuario(std::string usuario) { this->usuario = usuario; }

void Pomodoro::setEstado(bool estado) { this->estado = estado; }

bool Pomodoro::getEstado() { return this->estado; }

Config Pomodoro::getConfig() { return this->config; }

void Pomodoro::setConfig(Config config) { this->config = config; }

// Código a ser analizado
/*
void Pomodoro::telaInicial() {
  int tudoCorreto = 0;
  std::string usuario;
  int tempo;
  if (this->usuario == "" && this->tempo == 0) {
    while (tudoCorreto == 0) {
      system("clear");
      palavraGrande((char *)"pomodoro");
      std::cout << "Qual é o seu nome? -> ";
      std::cin >> usuario;
      std::cout << "Quantos minutos? -> ";
      std::cin >> tempo;

      std::cout << "Usuário: " << usuario << " / Minutos: " << tempo
                << std::endl

                << "Está tudo correto? Sim[1] Não[0] -> ";
      std::cin >> tudoCorreto;
    }
    this->setUsuario(usuario);
    this->setTempo(tempo * 60);
  } else if (this->tempo == 0) {
    while (tudoCorreto == 0) {
      system("clear");
      palavraGrande((char *)"pomodoro");
      std::cout << "Olá " << this->usuario;
      std::cout << "Quantos minutos? -> ";
      std::cin >> tempo;

      std::cout << "Minutos: " << tempo << std::endl
                << "Está tudo correto? Sim[1] Não[0] -> ";
      std::cin >> tudoCorreto;
    }
    this->setTempo(tempo * 60);
  } else {
    while (tudoCorreto == 0) {
      system("clear");
      palavraGrande((char *)"pomodoro");
      std::cout << "Olá " << this->usuario;
      std::cout << "Minutos: " << this->tempo << std::endl
                << "Está tudo correto? Sim[1] Não[0] -> ";
      std::cin >> tudoCorreto;
    }
  }
}
*/
void Pomodoro::telaPreset(int cont) {
  if (cont == 0 || cont == 2) {
    std::cout << std::endl << ".---------------------." << std::endl;
    std::cout << "| > Produção: " << this->config.producao.minutos << ":"
              << this->config.producao.segundos << "   |" << std::endl;
    std::cout << "|   Pausa Pq: " << this->config.pausaPequena.minutos << ":"
              << this->config.pausaPequena.segundos << "   |" << std::endl;
    std::cout << "|   Pausa Gr: " << this->config.pausaGrande.minutos << ":"
              << this->config.pausaGrande.segundos << "   |" << std::endl;
    std::cout << "\\_____________________/" << std::endl;
  } else if (cont == 1) {

    std::cout << std::endl << ".---------------------." << std::endl;
    std::cout << "|   Produção: " << this->config.producao.minutos << ":"
              << this->config.producao.segundos << "   |" << std::endl;
    std::cout << "| > Pausa Pq: " << this->config.pausaPequena.minutos << ":"
              << this->config.pausaPequena.segundos << "   |" << std::endl;
    std::cout << "|   Pausa Gr: " << this->config.pausaGrande.minutos << ":"
              << this->config.pausaGrande.segundos << "   |" << std::endl;
    std::cout << "\\_____________________/" << std::endl;
  } else {
    std::cout << std::endl << ".---------------------." << std::endl;
    std::cout << "|   Produção: " << this->config.producao.minutos << ":"
              << this->config.producao.segundos << "   |" << std::endl;
    std::cout << "|   Pausa Pq: " << this->config.pausaPequena.minutos << ":"
              << this->config.pausaPequena.segundos << "   |" << std::endl;
    std::cout << "| > Pausa Gr: " << this->config.pausaGrande.minutos << ":"
              << this->config.pausaGrande.segundos << "   |" << std::endl;
    std::cout << "\\_____________________/" << std::endl;
  }
}

void Pomodoro::telaPomodoro(int segundosAtual, int cont) {
  system("clear");
  Tempo atual = this->converteTempo(segundosAtual);
  palavraGrande((char *)"pomodoro");
  this->telaPreset(cont);
  std::cout << std::endl << "###################";
  std::cout << std::endl << "#                 #";
  std::cout << std::endl
            << "#      " << atual.minutos << ":" << atual.segundos << "      #";
  std::cout << std::endl << "#                 #";
  std::cout << std::endl << "#     RODANDO     #";
  std::cout << std::endl << "#                 #";
  std::cout << std::endl << "###################" << std::endl;
}

// pausado
// rodando

Tempo Pomodoro::converteTempo(int tempoSegundos) {
  Tempo tempoConvertido = {"00", "00"};
  int tempoTotal = tempoSegundos;
  int minutos = 0;

  while (tempoTotal > 59) {
    minutos += 1;
    tempoTotal -= 60;
  }

  if (minutos == 0) {
    tempoConvertido.segundos = this->ajustaCasasDecimais(tempoTotal, 2);
    return tempoConvertido;
  }

  tempoConvertido.minutos = this->ajustaCasasDecimais(minutos, 2);
  tempoConvertido.segundos = this->ajustaCasasDecimais(tempoTotal, 2);
  return tempoConvertido;
}

std::string Pomodoro::ajustaCasasDecimais(int numero, int casasRequisitadas) {
  int casasDoNumero = this->contaCasasDecimais(numero);
  if (casasRequisitadas < casasDoNumero) {
    std::cout << std::endl
              << "Casas requisitadas menores que o numero." << std::endl;
    return "erro";
  }

  if (casasRequisitadas == casasDoNumero) {
    return std::to_string(numero);
  }

  std::string numeroAjustado = "";
  while (casasRequisitadas != casasDoNumero) {
    numeroAjustado += "0";
    casasRequisitadas--;
  }
  numeroAjustado += std::to_string(numero);
  return numeroAjustado;
}

int Pomodoro::contaCasasDecimais(int numero) {
  if (numero == 0) {
    return 1;
  }

  int numAbs = std::abs(numero);
  int numCasas = static_cast<int>(std::log10(numAbs)) + 1;
  return numCasas;
}
