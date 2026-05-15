#include<stdio.h>
unsigned char new_reg(unsigned char reg)
{
    reg|=(1<<2);//set bit 2
    reg&=~(1<<5);//clear bit 5
    reg^=(1<<0);//toggle bit 0
    return reg;
}
int main()
{
    unsigned char reg=0b00100001;
    unsigned char result=new_reg(reg);
    printf("Modified register value is=0x%X \n",result);
return 0;
}