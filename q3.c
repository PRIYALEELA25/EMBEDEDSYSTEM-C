#include<stdio.h>
int main()
{
    int a, fact=1;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("FACTORIAL OF %d IS %d",a,fact);

return 0;
}