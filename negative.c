#include <stdio.h>

int main()
{
   int i;
   printf("enter the number");
   scanf("%d",&i);
   if (i>0)
   {
       printf("possitive");
       
   }
   else if (i==0)
   {
       printf("zero");
       
   }
   else
   {
       printf("negative");
   }
}
