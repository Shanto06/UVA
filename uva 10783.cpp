#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T,num1,num2,i,sum,n=1;
    cin>>T;
    while(T--)
    {
        int sum=0;
        cin>>num1>>num2;
        for(i=num1;i<=num2;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        cout<<"Case "<<n<<":"<<" "<<sum<<endl;
        n++;
    }


    return 0;
}
