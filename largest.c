#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("enter the number");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("the largest num is n1");
        }
    }
    else
    {
        printf("the largest number is n3");
    }
}
    else if(n2>n3)
    {
    printf("the largest number is n2");
    else
    printf("the largest num is n3");
    }
    
