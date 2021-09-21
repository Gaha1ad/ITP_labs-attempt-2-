#include <stdio.h>
#include <string.h>

int main()
{

    int l=1,i,j,t[20],z=0,c1=-1;
    char str[100],c[20];
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        z=0;
        for(j=0;j<=c1;j++)
            if(c[j]==str[i])
            {
                z=1;
                t[j]++;
            }
        if ((z==0)&&(str[i]!=' '))
        {
            c1++;
            t[c1]=0;
            c[c1]=str[i];
            t[c1]++;
        }
    }
    while(l!=0)
    {
        l=0;
        for(i=0;i<=c1;i++)
        {
            if(t[i]>l) l= t[i];
        }
        for(i=0;i<=c1;i++)
        if((t[i]==l)&&(l!=0))
            {
                printf("%c",c[i]);
                for(j=0;j<t[i];j++)
                printf(".");
                printf("\n");
            }
        for(i=0;i<=c1;i++)
            if(t[i]==l)t[i]=0;
    }
    return 0;
}
