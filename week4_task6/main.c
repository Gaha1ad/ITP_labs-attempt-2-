#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    char password[3],key[3];
    /*scanf("password =%s",password);
    for(i=32;i<127;i++)
        for(j=32;j<127;j++)
            for(k=32;k<127;k++)
                {
                    if(password[0]-i==NULL && password[1]-j==NULL && password[2]-k==NULL)
                    {
                        printf("asd\n");
                        i=127;
                        j=127;
                        k=127;
                    };
                    n++;
                }

    printf("%s",key);
    */
    for(i=32;i<127;i++) {
            printf("%c",i);
            if ("a"-i==NULL) printf("\n");
    }
    return 0;
}
