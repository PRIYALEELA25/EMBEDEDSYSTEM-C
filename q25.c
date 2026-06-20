#include<stdio.h>
int main()
{
    int n,i,j,target;
    int pair_found=0;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ARRAY ELEMENTS:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
printf("ENTER TARGET SUM:");
scanf("%d",&target);
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==target)
        {
            printf("%d %d\n",arr[i],arr[j]);
            pair_found=1;
        }
    }
}
if(pair_found==0)
{
    printf("NO PAIR FOUND");
}
return 0;
}