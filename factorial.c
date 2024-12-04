#include <stdio.h>
int main()
{
    long int n,i;
    long long int fact=1;//long long for large number
    printf("Enter a number\n");
    scanf("%ld",&n);//use %ld for long int
    
    if(n<0)
    printf("no factorial for negative number\n");
    else if(n==0)
    printf("factorial of 0 is 1");
    else
    {
        for(i=1;i<=n;i++)
        fact=i*fact;
        printf("factorial of %ld is %lld",n,fact);
    }
    return 0;
}
