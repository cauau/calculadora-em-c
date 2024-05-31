#include <stdio.h>

int main () {
  float numero1, numero2, resultado;
  char sinal;
  printf("Digite o primeiro numero:");
  scanf("%f", &numero1);

  printf("Digite o sinal:");
  scanf(" %c", &sinal);

  printf("Digite o segundo numero:");
  scanf("%f", &numero2);

  if (sinal == '+'){
    resultado = numero1 + numero2;
    printf ("%f + %f = %f\n", numero1,numero2,numero1+numero2);
  }
  else if (sinal == '-') {
    resultado = numero1 - numero2;
    printf ( "O resultado da subtração é: %.2f\n", resultado);
  }
  else if (sinal == '*') {
    resultado = numero1 * numero2;
    printf ("O resultado da multiplicação é: %.2f\n", resultado);

  }
  else if (sinal == '/') {
    resultado = numero1 / numero2;
    printf ( "O resultado da divisão é: %.2f\n", resultado);
  }
  else {
    printf ("Sinal inválido");
  }

  return 0;
}
