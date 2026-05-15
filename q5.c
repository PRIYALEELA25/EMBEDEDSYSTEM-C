#include <stdio.h>

int perfect(int n)
{
    int sum=0;
 for(int i=1;i<n;i++)
 {
     if(n%i==0)
     {
         sum+=i;
     }
 }
 if(sum==n){
     return 1;
 }
 else{
     return 0;
 }
}
int main()
{
    int n,result;
    printf("enter a number:");
    scanf("%d",&n);
    result=perfect(n);
if(result==1){
 printf("%d is perfect",n);
 }
 else {
     printf("%d is not a perfect number",n);
 }
}