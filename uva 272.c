

#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0,len;

    char str[10000];
    while(gets(str))
    {

        len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]=='"')
        {
            count++;
            if(count%2==0)
                printf("''");
            else
                printf("``");
        }
        else
            printf("%c",str[i]);
    }

    printf("\n");
    }

    return 0;
}






