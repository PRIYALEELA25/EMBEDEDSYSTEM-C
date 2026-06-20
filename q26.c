#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int arr[n],b[n];
    printf("ENTER THE ARRAY ELEMENTS:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            b[j]=arr[i];
            j++;
        }

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            b[j]=arr[i];
            j++;
        }

    }
    printf("Rearranged array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}