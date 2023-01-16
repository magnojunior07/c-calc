#include <stdio.h>

int main() {
  float n_1;
  float n_2;
  float result;
  char operator;

  printf("Digte o n_1: \n");
  scanf("%f", &n_1); 
  
  printf("Digte o operador: \n");
  scanf(" %c", &operator);

  if(operator != 42 && operator != 43 && operator != 45 && operator != 47) {  
    printf("Operador inválido!\n");
    return 1;
  }

    printf("Digte o n_2: \n");
    scanf("%f", &n_2);

    switch(operator) {
      case '+' :
        result = n_1 + n_2;
        printf("O resultado da soma é: %f\n", result);
      break;
      case '-' :
        result = n_1 - n_2;
        printf("O resultado da subtração é: %f\n", result);
      break;
      case '*' :
        result = n_1 * n_2;
        printf("O resultado da multiplicação é: %f\n", result);
      break;
      case '/' :
        result = n_1 / n_2;
        printf("O resultado da divisão é: %f\n", result);
      break;
      default :
          printf("Operador inválido!\n");
      return 1;
    }

    return 0;
}