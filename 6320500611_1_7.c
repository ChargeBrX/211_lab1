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
    else
    {
        if(x>12)
        {
            x = x-12;
        }
        printf("%d:%d p.m.",x,y);
    }
}
