#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  if (argc == 2) {
    system("clear");
    std::cout << "Compilando com debug..." << std::endl;
    system("cd ~/Documents/projetos-python/pomodoro; clang++ --debug ./*.cpp "
           "./*.c -I "
           "./includes -o ./bin/pomodoro ");
    std::cout << "Compilado!" << std::endl;
    std::cout << "Rodando..." << std::endl;
    std::cout << "Digite enter para continuar..." << std::endl;
    std::cin.get();
    system("~/Documents/projetos-python/pomodoro/bin/pomodoro");

    return 0;
  }

  system("clear");
  std::cout << "Compilando..." << std::endl;
  system("cd ~/Documents/projetos-python/pomodoro; g++ ./*.cpp ./*.c -I "
         "./includes -o ./bin/pomodoro -lncurses");
  std::cout << "Compilado!" << std::endl;
  std::cout << "Rodando..." << std::endl;
  std::cout << "Digite enter para continuar..." << std::endl;
  std::cin.get();
  system("~/Documents/projetos-python/pomodoro/bin/pomodoro");

  return 0;
}
