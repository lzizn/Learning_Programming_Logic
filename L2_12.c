#include <stdio.h>

int main()
{
  int i = 0;
  char n;
  scanf("%c", &n);
  printf("RESP:");
  printf("%c", n);
  if (n != '!' && n != '?' && n != '.')
  {
    while (i == 0)
    {
      scanf("%c", &n);
      if (n == ' ') n = '_';
      if (n == '!' || n == '?' || n == '.') i++;
      printf("%c", n);
    }
  }
  return 0;
}
