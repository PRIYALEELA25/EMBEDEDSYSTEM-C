#include<stdio.h>
int main()
{
    int num=0;
    char str[100];
    printf("ENTER A NUMBER (AS STRING):");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        num=num*10+(str[i]-'0');
        }
        printf("INTEGER VALUE IS =%d",num);
        return 0;
}
