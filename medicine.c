#include <reg51.h>

sbit BUTTON = P1^0;
sbit LED = P2^0;
sbit BUZZER = P2^1;

void delay()
{
    unsigned int i,j;
    for(i=0;i<500;i++)
        for(j=0;j<1275;j++);
}

void main()
{
    LED = 0;
    BUZZER = 0;

    while(1)
    {
        delay();

        LED = 1;
        BUZZER = 1;

        while(BUTTON==1);

        LED = 0;
        BUZZER = 0;
    }
}