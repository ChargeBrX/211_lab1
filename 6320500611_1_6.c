#include <stdio.h>
int main()
{
    unsigned long n,m,t,n2,m2,i,t2,j;
    char sl,ans;

    scanf("%lu %lu %lu",&n2,&m2,&t2);
    n = n2;
    m = m2;
    t = t2;
    scanf(" %c",&sl);


    if(sl == 'L')
    {
        for(;t>0;)
        {
            for(i=1;i<=n;i++)
            {
                if(t == 0)
                {
                    ans = 'L';
                    break;
                }
                t--;

            }
            if(t == 0)
            {
                break;
            }
            for(j=1;j<=m;j++)
            {
                if(t == 0)
                {
                    ans = 'R';
                    break;
                }
                t--;


            }
        }
    }
    else if (sl == 'R')
    {
        for(;t>0;)
        {
            for(i=1;i<=m;i++)
            {

                if(t == 0)
                {
                    ans = 'R';
                    break;
                }
                t--;

            }
            if(t == 0)
            {
                break;
            }
            for(j=1;j<=n;j++)
            {
                if(t == 0)
                {
                    ans = 'L';
                    break;
                }
                t--;

            }
        }

    }
    printf("%c",ans);

    return 0;

}
