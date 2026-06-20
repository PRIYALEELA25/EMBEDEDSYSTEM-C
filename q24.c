#include<stdio.h>
int main()
{
    int a[50],b[50],c[100];
    int n1,n2,j,k,i;
    printf("ENTER THE SIZE OF FIRST  ARRAY:");
    scanf("%d",&n1);
    printf("ENTER THE ELEMENTS OF FIRST SORTED ARRAY:");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("ENTER THE SIZE OF SECOND ARRAY: ");
    scanf("%d",&n2);
    printf("ENTER THE ELEMENTS OF SECOND SORTED ARRAY:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    i=j=k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        {
            c[k++]=a[i++];
           
        }
        else{
            c[k++]=b[j++];
           
        }
        
    }
    while(i<n1)
    {
        c[k++]=a[i++];
        
    }
    while(j<n2)
    {
        c[k++]=b[j++];
       
    }
    printf("MERGED SORTED ARRAY:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
       
    }
    printf("\n");
    return 0;
}