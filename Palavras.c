#include "./includes/Palavras.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palavraGrande(char *palavra);
void letraGrante(char letra, int pos);

void palavraGrande(char *palavra) {
  int tamanhoPalavra = strlen(palavra);

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < tamanhoPalavra; j++) {
      letraGrante(palavra[j], i);
    }
    printf("\n");
  }
}

void letraGrante(char letra, int pos) {
  int tamanhoLinha = 13;
  char linhas[8][tamanhoLinha];
  switch (letra) {
  case 'a':
    // 1234567891234
    strcpy(linhas[0], "     db      ");
    strcpy(linhas[1], "    d88b     ");
    strcpy(linhas[2], "   d8'`8b    ");
    strcpy(linhas[3], "  d8'  `8b   ");
    strcpy(linhas[4], " d8YaaaaY8b  ");
    strcpy(linhas[5], "d8''''''''8b ");
    strcpy(linhas[6], "d8'      `8b ");
    strcpy(linhas[7], "d8'      `8b ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'b':
    //                 1234567891234
    strcpy(linhas[0], "888888888ba  ");
    strcpy(linhas[1], "88       ,8P ");
    strcpy(linhas[2], "88       ,8P ");
    strcpy(linhas[3], "88aaaaaaa8P' ");
    strcpy(linhas[4], "88'''''''8b, ");
    strcpy(linhas[5], "88       `8b ");
    strcpy(linhas[6], "88       a8P ");
    strcpy(linhas[7], "888888888P   ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'c':
    //                 1234567891234
    strcpy(linhas[0], "  ,ad888ba,  ");
    strcpy(linhas[1], " d8''   `'8b ");
    strcpy(linhas[2], "d8'          ");
    strcpy(linhas[3], "88           ");
    strcpy(linhas[4], "88           ");
    strcpy(linhas[5], "Y8,          ");
    strcpy(linhas[6], " Y8a.  _.a8P ");
    strcpy(linhas[7], "  `'Y888Y''  ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'd':
    //                 1234567891234
    strcpy(linhas[0], "8888888ba,   ");
    strcpy(linhas[1], "88     `'8b  ");
    strcpy(linhas[2], "88       `8b ");
    strcpy(linhas[3], "88        88 ");
    strcpy(linhas[4], "88        88 ");
    strcpy(linhas[5], "88        8P ");
    strcpy(linhas[6], "88     .a8P  ");
    strcpy(linhas[7], "8888888Y''   ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'e':
    //                 1234567891234
    strcpy(linhas[0], "888888888888 ");
    strcpy(linhas[1], "88           ");
    strcpy(linhas[2], "88           ");
    strcpy(linhas[3], "88aaa        ");
    strcpy(linhas[4], "88'''        ");
    strcpy(linhas[5], "88           ");
    strcpy(linhas[6], "88           ");
    strcpy(linhas[7], "888888888888 ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'f':
    //                 1234567891234
    strcpy(linhas[0], "888888888888 ");
    strcpy(linhas[1], "88           ");
    strcpy(linhas[2], "88           ");
    strcpy(linhas[3], "88aaaa       ");
    strcpy(linhas[4], "88''''       ");
    strcpy(linhas[5], "88           ");
    strcpy(linhas[6], "88           ");
    strcpy(linhas[7], "88           ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'g':
    //                 1234567891234
    strcpy(linhas[0], "  ,ad8888ba, ");
    strcpy(linhas[1], " d8''   `18b ");
    strcpy(linhas[2], "d8'          ");
    strcpy(linhas[3], "88           ");
    strcpy(linhas[4], "88    888888 ");
    strcpy(linhas[5], "Y8,       88 ");
    strcpy(linhas[6], " Y8a.   .a88 ");
    strcpy(linhas[7], "  `'Y8888P'  ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'h':
    //                 1234567891234
    strcpy(linhas[0], "88        88 ");
    strcpy(linhas[1], "88        88 ");
    strcpy(linhas[2], "88        88 ");
    strcpy(linhas[3], "88aaaaaaaa88 ");
    strcpy(linhas[4], "88''''''''88 ");
    strcpy(linhas[5], "88        88 ");
    strcpy(linhas[6], "88        88 ");
    strcpy(linhas[7], "88        88 ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'i':
    //                 1234567891234
    strcpy(linhas[0], "      88      ");
    strcpy(linhas[1], "      88      ");
    strcpy(linhas[2], "      88      ");
    strcpy(linhas[3], "      88      ");
    strcpy(linhas[4], "      88      ");
    strcpy(linhas[5], "      88      ");
    strcpy(linhas[6], "      88      ");
    strcpy(linhas[7], "      88      ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'j':
    //                 1234567891234
    strcpy(linhas[0], "           88 ");
    strcpy(linhas[1], "           88 ");
    strcpy(linhas[2], "           88 ");
    strcpy(linhas[3], "           88 ");
    strcpy(linhas[4], "88         88 ");
    strcpy(linhas[5], "88         88 ");
    strcpy(linhas[6], " 88,     ,d88 ");
    strcpy(linhas[7], "  'Y888888P'  ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'k':
    //                 1234567891234
    strcpy(linhas[0], "88      ,aa8P ");
    strcpy(linhas[1], "88   ,888'    ");
    strcpy(linhas[2], "88 ,888'      ");
    strcpy(linhas[3], "88,8'         ");
    strcpy(linhas[4], "88'88,        ");
    strcpy(linhas[5], "88P Y88b      ");
    strcpy(linhas[6], "88    '888,   ");
    strcpy(linhas[7], "88       Y88b ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'l':
    //                 1234567891234
    strcpy(linhas[0], "88            ");
    strcpy(linhas[1], "88            ");
    strcpy(linhas[2], "88            ");
    strcpy(linhas[3], "88            ");
    strcpy(linhas[4], "88            ");
    strcpy(linhas[5], "88            ");
    strcpy(linhas[6], "88            ");
    strcpy(linhas[7], "8888888888888 ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'm':
    //                 1234567891234
    strcpy(linhas[0], "88b       d88 ");
    strcpy(linhas[1], "888b     d888 ");
    strcpy(linhas[2], "88`8b   d8'88 ");
    strcpy(linhas[3], "88 `8b d8' 88 ");
    strcpy(linhas[4], "88  `8d8'  88 ");
    strcpy(linhas[5], "88   `8'   88 ");
    strcpy(linhas[6], "88   `8'   88 ");
    strcpy(linhas[7], "88   `8'   88 ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'n':
    //                 1234567891234
    strcpy(linhas[0], "888b      88 ");
    strcpy(linhas[1], "88 88b    88 ");
    strcpy(linhas[2], "88  `8b   88 ");
    strcpy(linhas[3], "88   `8b  88 ");
    strcpy(linhas[4], "88    `8b 88 ");
    strcpy(linhas[5], "88     `8b88 ");
    strcpy(linhas[6], "88      `888 ");
    strcpy(linhas[7], "88       `88 ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'o':
    //                 1234567891234
    strcpy(linhas[0], "  ,ad888ba,   ");
    strcpy(linhas[1], " d8''   `'8b  ");
    strcpy(linhas[2], "d8'       `8b ");
    strcpy(linhas[3], "88         88 ");
    strcpy(linhas[4], "88         88 ");
    strcpy(linhas[5], "Y8,       ,8P ");
    strcpy(linhas[6], " Y8a.   .a8P  ");
    strcpy(linhas[7], "  `'Y888Y''   ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'p':
    //                 1234567891234
    strcpy(linhas[0], "8888888888ba  ");
    strcpy(linhas[1], "88        '8b ");
    strcpy(linhas[2], "88        ,8P ");
    strcpy(linhas[3], "88aaaaaaa8P'  ");
    strcpy(linhas[4], "88''''''''    ");
    strcpy(linhas[5], "88            ");
    strcpy(linhas[6], "88            ");
    strcpy(linhas[7], "88            ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'q':
    //                 1234567891234
    strcpy(linhas[0], "  ,ad888ba,   ");
    strcpy(linhas[1], " d8''   `'8b  ");
    strcpy(linhas[2], "d8'       `8b ");
    strcpy(linhas[3], "88         88 ");
    strcpy(linhas[4], "88         88 ");
    strcpy(linhas[5], "Y8,   '88,,8P ");
    strcpy(linhas[6], " Y8a.   Y88P  ");
    strcpy(linhas[7], "  `'Y888Y'Y8a ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'r':
    //                 1234567891234
    strcpy(linhas[0], "8888888888ba  ");
    strcpy(linhas[1], "88        '8b ");
    strcpy(linhas[2], "88        ,8P ");
    strcpy(linhas[3], "88aaaaaaa8P'  ");
    strcpy(linhas[4], "88''''''88'   ");
    strcpy(linhas[5], "88      `8b   ");
    strcpy(linhas[6], "88       `8b  ");
    strcpy(linhas[7], "88        `8b ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 's':
    //                 1234567891234
    strcpy(linhas[0], " ad888888ba  ");
    strcpy(linhas[1], "d8'      '8b ");
    strcpy(linhas[2], "Y8,           ");
    strcpy(linhas[3], "`Y8aaaaaa,   ");
    strcpy(linhas[4], "  `''''''8b, ");
    strcpy(linhas[5], "         `8b ");
    strcpy(linhas[6], "Y8a      a8P ");
    strcpy(linhas[7], " 'Y8888888P' ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 't':
    // 1234567891234567
    strcpy(linhas[0], "8888888888888 ");
    strcpy(linhas[1], "      88      ");
    strcpy(linhas[2], "      88      ");
    strcpy(linhas[3], "      88      ");
    strcpy(linhas[4], "      88      ");
    strcpy(linhas[5], "      88      ");
    strcpy(linhas[6], "      88      ");
    strcpy(linhas[7], "      88      ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'u':
    // 1234567891234
    strcpy(linhas[0], "88        88 ");
    strcpy(linhas[1], "88        88 ");
    strcpy(linhas[2], "88        88 ");
    strcpy(linhas[3], "88        88 ");
    strcpy(linhas[4], "88        88 ");
    strcpy(linhas[5], "88        88 ");
    strcpy(linhas[6], "Y8a.    .a8P ");
    strcpy(linhas[7], " `'Y8888Y''  ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'v':
    //                 1234567891234
    strcpy(linhas[0], "8b         d8 ");
    strcpy(linhas[1], "`8b       d8' ");
    strcpy(linhas[2], "`8b       d8' ");
    strcpy(linhas[3], " `8b     d8'  ");
    strcpy(linhas[4], "  `8b   d8'   ");
    strcpy(linhas[5], "   `8b d8'    ");
    strcpy(linhas[6], "    `888'     ");
    strcpy(linhas[7], "     `8'      ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'w':
    //                 1234567891234
    strcpy(linhas[0], "I8    8   8I ");
    strcpy(linhas[1], "`8   db   8' ");
    strcpy(linhas[2], "'8  ,88,  8' ");
    strcpy(linhas[3], " Y  8PY8  8P ");
    strcpy(linhas[4], "`8 d8'`8b 8' ");
    strcpy(linhas[5], "`8 8'  `8 8' ");
    strcpy(linhas[6], "`8 8'  `8 8' ");
    strcpy(linhas[7], " `8'    `8'  ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'x':
    //                 1234567891234
    strcpy(linhas[0], "8b         d8 ");
    strcpy(linhas[1], " Y8,    ,8P   ");
    strcpy(linhas[2], "   `8b d8'    ");
    strcpy(linhas[3], "     Y8P      ");
    strcpy(linhas[4], "     d8b      ");
    strcpy(linhas[5], "   ,8P Y8,    ");
    strcpy(linhas[6], " d8'    `8b   ");
    strcpy(linhas[7], "8P         Y8 ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'y':
    //                 1234567891234
    strcpy(linhas[0], "8b         d8 ");
    strcpy(linhas[1], " Y8,    ,8P   ");
    strcpy(linhas[2], "   Y8, ,8P    ");
    strcpy(linhas[3], "   '8aa8'     ");
    strcpy(linhas[4], "    `88'      ");
    strcpy(linhas[5], "     88       ");
    strcpy(linhas[6], "     88       ");
    strcpy(linhas[7], "     88       ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case 'z':
    //                 1234567891234
    strcpy(linhas[0], "8888888888888 ");
    strcpy(linhas[1], "          ,88 ");
    strcpy(linhas[2], "        ,88'  ");
    strcpy(linhas[3], "      ,88'    ");
    strcpy(linhas[4], "    ,88'      ");
    strcpy(linhas[5], "  ,88'        ");
    strcpy(linhas[6], " 88'          ");
    strcpy(linhas[7], "8888888888888 ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  case '0':
    //                 1234567891234
    strcpy(linhas[0], "   ,a888a,    ");
    strcpy(linhas[1], " ,8P'' `'Y8,  ");
    strcpy(linhas[2], ",8P    /8/Y8, ");
    strcpy(linhas[3], "88    /8/  88 ");
    strcpy(linhas[4], "88   /8/   88 ");
    strcpy(linhas[5], "`8b /8/   d8' ");
    strcpy(linhas[6], " `8ba/ ,ad8'  ");
    strcpy(linhas[7], "   'Y888P'    ");

    for (int i = 0; i < tamanhoLinha; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
    //     case '1':
    // //     88
    // //   ,d88
    // // 888888
    // //     88
    // //     88
    // //     88
    // //     88
    // //     88
    // //     //                 1234567891234
    //     strcpy(linhas[0], "   ,a888a,    ");
    //     strcpy(linhas[1], " ,8P'' `'Y8,  ");
    //     strcpy(linhas[2], ",8P    /8/Y8, ");
    //     strcpy(linhas[3], "88    /8/  88 ");
    //     strcpy(linhas[4], "88   /8/   88 ");
    //     strcpy(linhas[5], "`8b /8/   d8' ");
    //     strcpy(linhas[6], " `8ba/ ,ad8'  ");
    //     strcpy(linhas[7], "   'Y888P'    ");

    //     for (int i = 0; i < tamanhoLinha; i++)
    //     {
    //       printf("%c", linhas[pos][i]);
    //     }
    //     break;
  default:
    //                 1234567
    strcpy(linhas[0], "       ");
    strcpy(linhas[1], "       ");
    strcpy(linhas[2], "       ");
    strcpy(linhas[3], "       ");
    strcpy(linhas[4], "       ");
    strcpy(linhas[5], "       ");
    strcpy(linhas[6], "       ");
    strcpy(linhas[7], "       ");

    for (int i = 0; i < tamanhoLinha - 6; i++) {
      printf("%c", linhas[pos][i]);
    }
    break;
  }
}
