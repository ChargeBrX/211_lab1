#include <stdio.h>
int main()
{
    unsigned n,m;
    int i;
    long t;
    char sl,ans='E';

    scanf("%u %u %l",&n,&m,&t);
    fflush(stdin);
    scanf("%c",&sl);
    while(1)
    {
        if(sl == 'R')
        {
            for(i=1; i<=n; i++)
            {
                if(t == 0)
                {
                    ans = 'R';
                    break;
                }
                t = t - 1;
            }
            for(i=1; i<=m; i++)
            {
                if(t == 0)
                {
                    ans = 'L';
                    break;
                }
                t = t - 1;
            }
        }
        else if(sl == 'L')
        {
            for(i=1; i<=m; i++)
            {
                if(t == 0)
                {
                    ans = 'L';
                    break;
                }
                t = t -1;
            }
            for(i=1; i<=n; i++)
            {
                if(t == 0)
                {
                    ans = 'R';
                    break;
                }
                t = t -1;
            }
        }
        if(t <=0)
        {
            break;
        }
    }

    printf("%c",ans);

    return 0;

}
