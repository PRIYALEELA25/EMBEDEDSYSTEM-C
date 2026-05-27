#include<stdio.h>
int main()
{
    int a,pos,n,result;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    printf("STARTING POSITION:");
    scanf("%d",&pos);
    printf("NUMBER OF BITS TO BE RETRIEVED:");
    scanf("%d",&n);
    result=(a>>pos)&((1<<n)-1);
    printf("RESULT=%d",result);
    return 0;
}