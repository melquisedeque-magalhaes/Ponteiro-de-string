#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float number1 = 0;
  char name[500];
  char **namePointer[500];
  float *pointer1;

  pointer1 = &number1;
  namePointer = &name;

  printf("Digite um valor: ");
  scanf("%f", pointer1);

  printf("O valor da variavel é %.2f  \n", number1);

  *pointer1 = 10.0; 
  
  printf("O valor da variavel é %.2f  \n", number1);

  getchar();

  printf("==========================================\n");

  printf("Digite seu nome: ");
  fflush(stdin);
  fgets(name, 500, stdin);
  

  printf("Seu nome é: %s", name);
  
  
  return 0;
}