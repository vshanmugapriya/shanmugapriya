*******************************************************************************/
#include <stdio.h>

int main()
{
  char a;
  printf("enter your variable");
  scanf("%c",&a);
  if (a>='a' && a<='z' || a>='A' && a<='Z')
  {
  printf(" alphabet");
      
  }
  else 
  {
      printf("not alphabet");
  }
}
