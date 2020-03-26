#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n+1];

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {

        if(A[i]==42)
        {
           break;
        }
         printf("%d\n",A[i]);
    }

    return 0;
}
