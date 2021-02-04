#include <stdio.h>
int main()
{
    long n,m,t,i,j;
    char sl,ans;

    scanf("%ld %ld %ld",&n,&m,&t);
    scanf(" %c",&sl);


    if(sl == 'L')
    {
        for(;t>0;)
        {
            t = t -n;
            if(t<=0)
            {
                ans = 'L';
                break;
            }
            t = t -m;
            if(t<=0)
            {
                ans = 'R';
                break;
            }

        }
    }
    else if (sl == 'R')
    {
        for(;t>0;)
        {
            t = t -m;
            if(t<=0)
            {
                ans = 'R';
                break;
            }
            t = t -n;
            if(t<=0)
            {
                ans = 'L';
                break;
            }
        }

    }
    printf("%c",ans);

    return 0;

}
