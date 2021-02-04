#include <stdio.h>
int main()
{
    float time;

    scanf("%f",&time);

    float change;
    int x,y;
    change = time*100;
    x = (int)time;
    y = ((int)change)%100;

    if(time>=0&&time<=11.59)
    {
        printf("%d:%d a.m.",x,y);
    }
    else if(time>=12.00&&time<=23.59)
    {
        if(x>12)
        {
            x = x-12;
        }
        printf("%d:",x);
        if(y<10)
        {
            printf("0%d p.m.",y);
        }
        else
        {
            printf("%d p.m.",y);
        }
    }
}
