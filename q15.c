#include<stdio.h>

int main()
{
    char str[200];
    int i = 0, j = 0;

    printf("ENTER YOUR STRING: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            i++;   
        }
        else
        {
            str[j] = str[i];
            i++;
            j++;
        }
    }

    str[j] = '\0';

    printf("MODIFIED STRING IS: %s", str);

    return 0;
}