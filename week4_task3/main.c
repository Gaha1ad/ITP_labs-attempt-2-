#include <stdio.h>
#include <string.h>

int main()
{

    int i,j,z=0,c1=-1;
    char str[100],c[20];
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        z=0;
        for(j=0;j<=c1;j++)
            if(c[j]==str[i])
            {
                z=1;
            }
        if ((z==0)&&(str[i]!=' '))
        {
            c1++;
            c[c1]=str[i];
        }
    }
    for(i=0;i<strlen(c);i++) printf("%c ",c[i]);
    return 0;
}
