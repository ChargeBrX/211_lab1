#include <stdio.h>
int main()
{
    int n,i,posi,x;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0] ;
    posi = 0;
    for(i=1;i<n;i++)
    {
        if(max>a[i])
        {
            posi = i;
        }
        else
        {
            max = a[i];
            posi = i;
        }
    }

    printf("%d %d",posi+1,max);

    return 0;
}
