#include<stdio.h>
int main()
{
    int i,j,t,n,sum,a,b,c;
    while(scanf("%d",&t)!=EOF)
    {

        for(i=1;i<=t;i++)
        {
            sum=0;
            scanf("%d",&n);
            for(j=1;j<=n;j++)
            {
                scanf("%d%d%d",&a,&b,&c);
                sum=sum+a*c;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
