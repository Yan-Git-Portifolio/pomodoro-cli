#include "./includes/Pomodoro.h"
#include "includes/Tipos.h"
#include <cstdlib>
#include <curses.h>
#include <cwchar>
#include <iostream>
#include <memory>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <thread>

void wait();

int main(int argc, char *argv[]) {

  system("canberra-gtk-play -f ./utils/songs/win11.ogg");
  // initsrc();/

  Pomodoro *p = new Pomodoro();

  // Refatoração futura
  // if (argc == 2) {
  //  p = new Pomodoro(argv[1]);
  //} else {
  //  p = new Pomodoro();
  //}

  // p->telaInicial();
  Config configAtual = p->getConfig();
  int tempoAtual = std::stoi(configAtual.producao.minutos) * 60;
  int descancoPequenoAtual = std::stoi(configAtual.pausaPequena.minutos) * 60;
  int descancoGrandeAtual = std::stoi(configAtual.pausaGrande.minutos) * 60;
  int cont = 0;
  while (true) {
    if (cont == 0 || cont == 2) {
      system("/usr/bin/xmessage -print Producao");
      while (tempoAtual > -1) {
        p->telaPomodoro(tempoAtual, cont);
        tempoAtual--;
        wait();
      }
      system("canberra-gtk-play -f ./utils/songs/win31.ogg");
      cont++;
      tempoAtual = std::stoi(configAtual.producao.minutos) * 60;
    } else if (cont == 1) {
      system("/usr/bin/xmessage -print Pausa pequena");
      while (descancoPequenoAtual > -1) {
        p->telaPomodoro(descancoPequenoAtual, cont);
        descancoPequenoAtual--;
        wait();
      }
      system("canberra-gtk-play -f ./utils/songs/win31.ogg");
      cont++;
      descancoPequenoAtual = std::stoi(configAtual.pausaPequena.minutos) * 60;
    } else if (cont == 3) {
      system("/usr/bin/xmessage -print Pausa grande");
      while (descancoGrandeAtual > -1) {
        p->telaPomodoro(descancoGrandeAtual, cont);
        descancoGrandeAtual--;
        wait();
      }
      system("canberra-gtk-play -f ./utils/songs/win31.ogg");
      cont = 0;
      descancoGrandeAtual = std::stoi(configAtual.pausaGrande.minutos) * 60;
    }
  }
  return 0;
}

void wait() {
  std::this_thread::sleep_for(std::chrono::seconds(1));

  // system("sleep 1");
  //  return
}
