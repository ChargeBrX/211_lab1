#include <stdio.h>
int main()
{
    unsigned long long n;

    scanf("%llu",&n);
    printf("%lld %lld",n%3,n%11);

    return 0;
}
