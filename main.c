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

  return 0;
}
