#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0, j = 0;
  char n;
  scanf("%c", &n);
  printf("RESP:%c", n);
  while (i == 0)
  {
    scanf("%c", &n);
    if (n == ' '){
    }
    else printf("%c", n);
    if (n == '!') i++;
    if (n == '?') i++;
    if (n == '.') i++;
  }
  return 0;
}
