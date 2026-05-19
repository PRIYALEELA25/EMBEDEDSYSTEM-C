#include<stdio.h>
int main()
    {
        char str[100];
        int i=0,j,length=0;
        int ispalindrome=1;
        printf("ENTER A STRING:");
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            length++;
        }
        j=length-1;
        for(i=0;i<length/2;i++){
            if(str[i]!=str[j])
            {
                ispalindrome=0;
                break;
            }
            j--;
        }
        if(ispalindrome==1)
        {
            printf("PALINDROME:");
    
        }
        else{
            printf("NOT PALINDROME:");
        }
return 0;
    }


