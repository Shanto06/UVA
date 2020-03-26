#include<stdio.h>
int main()
{
    int a,b,c,T,i;
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        printf("Case %d: \n",i);
        if((c<a && a<b) || (b<a && a<c))
            printf("%d\n",a);

        if((a<b && b<c) || (c<b && b<a))
            printf("%d\n",b);

        if((a<c && c<b) || (b<c && c<a))
            printf("%d\n",c);
    }
    return 0;
}
