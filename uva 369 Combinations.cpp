#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;



long long nCr( long long n, long long r)
{
    long long sum=1;
    if(n-r<r)
        r=n-r;
    for(int i=1;i<=r;i++,n--)
    {
        sum*=n;
        sum/=i;
    }
    return sum;
}

int main()
{
     long long n,r;

    while(scanf("%lld%lld",&n,&r)==2)
    {

        if(n==0 && r==0)
            break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,nCr(n,r));

    }
    return 0;

}
