#include <stdio.h>

double soma(double x, double y){
  return x+y;
}

double sub(double x, double y){
  return x-y;
}

double mul(double x, double y){
  return x*y;
}

double div(double x, double y){
  if(y!=0)
    return x/y;
  else
    return -1;
}

int main(){
  int x,y,chose;
  double result;

  printf("Digite o primeiro numero: ");
  scanf("%d", &x);

  printf("Digite o segundo numero: ");
  scanf("%d", &y);

  while (chose != 0) {
      printf("\t\t===Menu===\n\tEscolha uma operação:\n=>1-Soma\n=>2-Subtração\n=>3-Multiplicação\n=>4-Divisão\n=>0-Sair\nEscolha: ");
      scanf("%d", &chose);

      switch (chose) {
        case 1 :
          result = soma(x,y);
          printf("\nO resultado eh: %lf", result);
          break;
        case 2 :
          result = sub(x,y);
          printf("\nO resultado eh: %lf", result);
          break;
        case 3 :
          result = mul(x,y);
          printf("\nO resultado eh: %lf", result);
          break;
        case 4 :
          result = div(x,y);
          printf("\nO resultado eh: %lf", result);
          break;
        default:
          break;
      }
  }

  return 0;
}
