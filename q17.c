#include <stdio.h>
int a,pos,n;
int main()
{
    
    printf("ENTER AN INTEGER:");
    scanf("%d",&a);
    printf("STARTING BIT POSITION:");
    scanf("%d",&pos);
    printf("NO OF BITS TO BE MODIFIED:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    a^=(1<<(pos+i));    
    }
    printf("%d",a);
    return 0;
}