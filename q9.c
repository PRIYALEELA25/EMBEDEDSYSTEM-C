#include <stdio.h>

double add(double a, double b)
{
    return a+b;
}
double subtract(double a, double b)
{
    
    return a-b;
}
double divide(double a, double b)
{
    if(b==0){
        printf("ERROR");
        return 0;
    }
    return a/b;
    
}
double multiply(double a, double b)
{
    return a*b;
}

double selector(double a,double b,char op){
    if(op=='+'){
        return add(a,b);
    }
    else if(op=='-'){
        return subtract(a,b);
    }
    else if(op=='/')
    {
        return divide(a,b);
    }
    else if(op=='*')
    {
        return multiply(a,b);
    }
    else{
        printf("UNKNOWN OPERATOR");
        return 0;
    }
}
int main()
{
    double a,b,RESULT;
    char op;
    printf("ENTER 2 NUMBERS:");
    scanf("%lf%lf",&a,&b);
    printf("select your operation:+,-,/,* \n");
    scanf(" %c",&op);
    RESULT = selector(a,b,op);
    printf("output=%lf \n",RESULT);
    return 0;
}