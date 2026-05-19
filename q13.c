#include<stdio.h>
int main()
{
    char str[100];
    int i=0,j,length=0;
    char temp;

    printf("ENTER YOUR STRING:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
{
    length++;
}
j=length-1;
for(i=0;i<length/2;i++)
{
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    j--;
}
printf("REVERSED STRING %s:",str);
return 0;
}