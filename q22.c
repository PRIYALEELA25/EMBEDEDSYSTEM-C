#include<stdio.h>
int main()
{
int n;
printf("ENTER THE SIZE OF ARRAY:");
scanf("%d",&n);
int i,arr[n];
printf("ENTER THE ARRAY ELEMENTS:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int largest=arr[0];
int secondlargest=arr[1];
     int smallest=arr[0];
int secondsmallest=arr[1];
for(i=1;i<n;i++)
{
if(arr[i]>largest)
{
    secondlargest=largest;
    largest=arr[i];
}
else if(arr[i]>secondlargest&&arr[i]!=largest)
{
    secondlargest=arr[i];
}
if(arr[i]<smallest)
{
    secondsmallest=smallest;
    smallest=arr[i];
}
else if(arr[i]<secondsmallest&&arr[i]!=smallest)
{
    secondsmallest=arr[i];

}
}
printf("SECOND LARGEST IS %d \n",secondlargest);
printf("SECOND SMALLEST IS %d \n",secondsmallest);
return 0;

}