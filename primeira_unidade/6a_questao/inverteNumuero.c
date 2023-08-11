#include <stdio.h>

int main()
{
  int num, inverso = 0, resto;
  printf("informe um numero inteiro: ");
  scanf("%d", &num);
  while (num != 0)
  {
    resto = num % 10;
    inverso = inverso * 10 + resto;
    num /= 10;
  }
  printf("numero inverso = %d", inverso);
  
  return 0;
}