#ifndef __TIPOS_H_
#define __TIPOS_H_

#include <string>

typedef struct {
  std::string minutos;
  std::string segundos;
} Tempo;

typedef struct {
  Tempo producao;
  Tempo pausaPequena;
  Tempo pausaGrande;
} Config;

#endif
