#include <stdio.h>
int main()
{
    int n,i,posi,x,max;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0] ;
    posi = 0;
    for(i=1;i<n;i++)
    {
        if(max<=a[i])
        {
            x = posi;
            if(max == a[i])
            {
                posi = x;
            }
            else
            {
                posi = i;
            }
            max = a[i];
        }
    }

    printf("%d %d",posi+1,max);

    return 0;
}
