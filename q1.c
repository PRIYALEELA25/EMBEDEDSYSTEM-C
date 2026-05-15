#include<stdio.h>
int main()
{
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("THE NUMBER %d IS EVEN",a);

    }
    else{
        printf("THE NUMBER %d IS ODD",a);
    }
    return 0;
}