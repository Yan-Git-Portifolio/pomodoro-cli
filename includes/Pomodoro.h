#pragma once
#include "Tipos.h"
#include <string>

class Pomodoro {
public:
  std::string usuario;
  bool estado;
  Config config;
  Pomodoro();
  Pomodoro(std::string usuario);
  std::string getUsuario();
  void setUsuario(std::string usuario);
  void setEstado(bool estado);
  bool getEstado();
  Config getConfig();
  void setConfig(Config config);
  // void telaInicial();
  void telaPreset(int cont);
  void telaPomodoro(int tempoAtual, int cont);
  Tempo converteTempo(int tempoSegundos);
  std::string ajustaCasasDecimais(int numero, int casasRequisitadas);
  int contaCasasDecimais(int numero);
};
