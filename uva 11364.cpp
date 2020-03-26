#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T,place,min,max,store;
    cin>>T;
    while(T--)
    {
        min=99,max=0;
        cin>>place;
        for(int i=0;i<place;i++)
        {
            cin>>store;
            if(store<min)
                min=store;
            if(store>max)
                max=store;
        }
        cout<<((max-min)*2)<<endl;


    }

    return 0;
}
