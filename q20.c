#include<stdio.h>
int main()
{
    int a,b,pos,n,result1,result2,mask;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    printf("ENTER A NUMBER:");
    scanf("%d",&b); 
    printf("STARTING POSITION:");
    scanf("%d",&pos);
    printf("NUMBER OF BITS TO BE RETRIEVED:");
    scanf("%d",&n);
    result1=(a>>pos)&((1<<n)-1);
    result2=(b>>pos)&((1<<n)-1);

    // Create mask
    mask = ((1 << n) - 1) << pos;

    // Clear bits at position
    a = a & (~mask);
    b = b & (~mask);

    // Insert swapped bits
    a = a | (result2 << pos);
    b = b | (result1 << pos);

    printf("AFTER SWAP:\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);

    return 0;
   
}