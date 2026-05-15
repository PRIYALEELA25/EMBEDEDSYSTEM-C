#include<stdio.h>
int a=0,b=1,c,n;
int main()
{
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=1;i<=n-2;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    return 0;
}
