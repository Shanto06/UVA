#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,m;
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {

    scanf("%d",&n);

    a=n*567;
    b=a/9;

    c=b+7492;
    d=c*235;
    e=d/47;
    f=e-498;

    g=f/10;
    h=g%10;
    if(h<0)
    {
        h=-h;
    }
    printf("%d\n",h);
    }


    return 0;
}
