
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
   int A[3005],D[3005],i,n,m;

   while(scanf("%d",&n)==1)
   {
       m=1;

       for(i=0;i<n;i++)
       {
           scanf("%d",&A[i]);
       }

       for(i=0;i<n-1;i++)
       {
           D[i]=abs(A[i+1]-A[i]);
       }

       sort(D,D+i);

       for(i=1;i<n;i++)
       {
           if(D[i]==D[i-1])
           {
               m=0;
               break;
           }
       }

       if(m==0)
        printf("Not jolly\n");
       else
          printf("jolly\n");

   }
   return 0;

}



