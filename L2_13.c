#include <stdio.h>
#include <string.h>
int main()
{
  int i = 0;
  char n;
  if (n != '!' && n != '?' && n != '.')
  {
    while (i == 0)
    {
      scanf("%c", &n);
      printf("%c", toupper(n));
      if (n == '!' || n == '?' || n == '.') i++;
    }
  }
  return 0;
}
