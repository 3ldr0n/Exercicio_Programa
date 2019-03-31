/*
Edison Aguiar de Souza Neto
Natália Gama de Mattos
Pietro Gonçalves da Silva
*/

#include <stdio.h>
#include <string.h>

// Frequência de cada letra em inglês
double Eng[26] = {
    8.16, 1.49, 2.78, 4.25, 12.7, 2.22, 2.01,
    6.09, 6.96, 0.15, 0.77, 4.02, 2.40, 6.74,
    7.50, 1.92, 0.09, 5.98, 6.32, 9.05, 2.75,
    0.97, 2.36, 0.15, 1.97, 0.07
};

// Frequência de cada letra em alemão
double Ger[26] = {
    6.51, 1.89, 3.06, 5.08, 17.4, 1.66, 3.01, 4.76,
    7.55, 0.27, 1.21, 3.44, 2.53, 9.78, 2.51, 0.79,
    0.02, 7.00, 7.27, 6.15, 4.35, 0.67, 1.89, 0.03,
    0.04, 1.13
};

double Ger[26] = {
  6.51, 1.89, 3.06, 5.08, 17.40, 1.66, 3.01, 4.76, 
  7.55, 0.27, 1.21, 3.44, 2.53, 9.78, 2.51, 0.79, 0.02, 
  7, 7.27, 6.15, 4.35, 0.67, 1.89, 0.03, 0.04, 1.13
};

//Porcentagens de cada letra em português
double PT[26] = {
  14.63, 1.04, 3.88, 4.99, 12.57, 1.02, 1.30, 1.28, 
  6.18, 0.40, 0.02, 2.78, 4.74, 5.05, 10.73, 2.52, 1.2, 
  6.53, 7.81, 4.32, 4.63, 1.67, 0.01, 0.21, 0.01, 0.47
};

void calcular(double str[],double limite)
{
  double ptp = 0, engp = 0, gerp = 0;
  double ptt = 0, engt = 0, gert = 0;

  for(int i=0;i <= 26; i=i+1){
      str[i] = (str[i] * 100)/limite; //Porcentagem de aparição de cada letra na frase de entrada.
  };

  for(int i=0;i <= 26; i=i+1){
    printf("%f\n", str[i]);
  };

  for(int i=0;i <= 26; i=i+1){ //Calcula a proximidade de cada porcentagem, em módulo, para cada letra.
    if(str[i] < PT[i])
      ptp = PT[i] - str[i];
    else
      ptp = str[i] - PT[i];
    if(str[i] < Eng[i])
      engp = Eng[i] - str[i];
    else
      engp = str[i] - Eng[i];
    if(str[i] < Ger[i])
      engp = Eng[i] - str[i];
    else
      gerp = str[i] - Ger[i];
    
    if(ptp < engp && ptp < gert){ //Marca a "pontuação" de cada linguagem.
      ptt +=1;
    } else if (engp > gerp ) {
      engt +=1;
    } else {
      gert +=1;
    }
  }
  printf("%f %f %f", ptt, engt, gert); //Compara as "pontuações" e então faz a decisão final.

  if(ptt>engt && ptt>gert){
    printf("\n\nPORTUGUÊS\n\n");
  } else if(engt>gert) {
    printf("\n\nINGLÊS\n\n");
  } else {
    printf("\n\nALEMÃO\n\n");
  }
};

double * percorrer(char str[], double limite) 
{
  /*
  Lê a array de entrada, letra por letra e retorna um array novo 
  com a quantidade de vezes que cada letra aparece na frase.
  */
  static double aparicao[26];

  for(int i=0;i <= 26; i=i+1){
    aparicao[i] = 0;
  };

  for(int i=0;i <= limite; i=i+1){
    switch(str[i]){
      case 'a':
      case 'A':
        aparicao[0] = aparicao[0]+1;
        break;
      case 'b':
      case 'B':
        aparicao[1] = aparicao[1]+1;
        break;
      case 'c':
      case 'C':
        aparicao[2] = aparicao[2]+1;
        break;
      case 'd':
      case 'D':
        aparicao[3] = aparicao[3]+1;
        break;
      case 'e':
      case 'E':
        aparicao[4] = aparicao[4]+1;
        break;
      case 'f':
      case 'F':
        aparicao[5] = aparicao[5]+1;
        break;
      case 'g':
      case 'G':
        aparicao[6] = aparicao[6]+1;
        break;
      case 'h':
      case 'H':
        aparicao[7] = aparicao[7]+1;
        break;
      case 'i':
      case 'I':
        aparicao[8] = aparicao[8]+1;
        break;
      case 'j':
      case 'J':
        aparicao[9] = aparicao[9]+1;
        break;
      case 'k':
      case 'K':
        aparicao[10] = aparicao[10]+1;
        break;
      case 'l':
      case 'L':
        aparicao[11] = aparicao[11]+1;
        break;
      case 'm':
      case 'M':
        aparicao[12] = aparicao[12]+1;
        break;
      case 'n':
      case 'N':
        aparicao[13] = aparicao[13]+1;
        break;
      case 'o':
      case 'O':
        aparicao[14] = aparicao[14]+1;
        break;
      case 'p':
      case 'P':
        aparicao[15] = aparicao[15]+1;
        break;
      case 'q':
      case 'Q':
        aparicao[16] = aparicao[16]+1;
        break;
      case 'r':
      case 'R':
        aparicao[17] = aparicao[17]+1;
        break;
      case 's':
      case 'S':
        aparicao[18] = aparicao[18]+1;
        break;
      case 't':
      case 'T':
        aparicao[19] = aparicao[19]+1;
        break;
      case 'u':
      case 'U':
        aparicao[20] = aparicao[20]+1;
        break;
      case 'v':
      case 'V':
        aparicao[21] = aparicao[21]+1;
        break;
      case 'w':
      case 'W':
        aparicao[22] = aparicao[22]+1;
        break;
      case 'x':
      case 'X':
        aparicao[23] = aparicao[23]+1;
        break;
      case 'y':
      case 'Y':
        aparicao[24] = aparicao[24]+1;
        break;
      case 'z':
      case 'Z':
        aparicao[25] = aparicao[25]+1;
        break;
      break;
    };
  };

  return aparicao;
}

int main(void) {
  char str[400];
  double tamanho;
  double *ip;
  printf("\nIniciando.. \n\n");
  printf("Digite a frase a qual deseja descobrir a qual lingua pertence!\n(PT-ENG-GER ONLY)\n\n >> ");
  scanf("%[^\n]%*c", str);
  tamanho = strlen(str);
  ip = percorrer(str,tamanho);
  calcular(ip, tamanho);
  printf("\n%s\n", str);
  return 0;
}
