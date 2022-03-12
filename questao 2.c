#include <stdio.h>

int conversao(int horas, int minutos, int segundos);

int main() {
  int hr, min, seg;
  
  printf("Aqui vc irá converter a hora que quer converter\n");
  printf("_______________________________________________\n");
  
  printf("Digite a hora:");
  scanf("%d", &hr);
  
  printf("Digite os minutos:");
  scanf("%d", &min);
  
  printf("Digite os segundos:");
  scanf("%d", &seg);
  
  conversao(hr, min, seg);
  
  return 0;
}
int conversao(int hr, int min, int seg) {
  int c;
  
  c = (hr * 60 * 60) + (min * 60) + (seg);
  
  printf("O valor da conversao da hora digitada foi: %d segundos.", c);
}