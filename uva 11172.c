#include<stdio.h>
int main()
{
    int n,i,num1,num2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&num1,&num2);
        if(num1>num2)
            printf(">\n");
        if(num1<num2)
            printf("<\n");
        if(num1==num2)
            printf("=\n");
    }
    return 0;
}
