#include <stdio.h>
int a;
int main()
{
    
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    if(a<=1)
    {
        printf("%d is not prime a number",a);
        return 0;
    }
    
    for(int i=2;i*i<=a;i++){
        if(a%i==0)
        {
          printf("%d is not prime a number",a); 
          return 0;
        }
       
    }
printf("%d ia prime a number",a);
    return 0;
    
}