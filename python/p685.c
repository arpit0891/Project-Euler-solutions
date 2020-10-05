#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int f(long long int n,long long int m);
long long int S(long long int k);
long long int sum(long long int n);
long long int S(long long int k)
{
    long long int a,i,b,l=0;
    for(i=1;i<=k;i++)
    {
        a=pow(i,3);
        b=pow(i,4);
        l=l+f(a,b);
    }
    return l;
}
long long int sum(long long int n)
{
    long long int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
long long  int f(long long int n,long long int m)
{
    long long int i,j=0;
    for(i=0;;i++)
    {
        if(sum(i)==n)
        {
            j++;
            if(j==m)
            {
                break;
            }
        }
    }
    return i;
}
int main()
{
    long long int k,l;
    printf("Enter the value of k:");
    scanf("%lld",&k);
    printf("%lld",S(k));
    return 0;
}
