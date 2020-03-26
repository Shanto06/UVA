#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>prime;
ll list1[10000007];
int listsize;
#define MAX 10000

void sieve(ll n)
{
    bool isprime[MAX];
    for(int i=0;i<n;i++)
    {
        isprime[i]=true;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(isprime[i])
        {
            prime.push_back(i);
        }
    }
}

void primefactor(ll n1)
{
    int listsize=0;

    for(int i=0;prime[i]*prime[i]<=n1;i++)
    {
        if(n1%prime[i]==0)
        {
            list1[listsize]=prime[i];
            listsize++;
            while(n1%prime[i]==0)
            {
                n1/=prime[i];
            }
        }
    }
    if(n1>1)
    {
        list1[listsize]=n1;
        listsize++;
    }
    if(listsize>1)
    {
        cout<<list1[listsize-1]<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}

int main()
{
    ll x;
    sieve(10000007);
    printf("Enter the number: ");
    while(scanf("%lld",&x) && x!=0)
    {
        if(x<0)
            x*=(-1);
        primefactor(x);
    }
}
