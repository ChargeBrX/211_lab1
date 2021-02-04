#include <stdio.h>
int main()
{
    unsigned long long n;

    scanf("%llu",&n);
    printf("%d %d",n%3,n%11);
}
