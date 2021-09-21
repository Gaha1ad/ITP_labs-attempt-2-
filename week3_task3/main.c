#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,n,t;
    printf("Choose type of figure from 1 to 3 : ");
    scanf("%d\n",&t);
    switch(t)
    {
        case 1:
            {
                scanf("%d", &n);
                for(i=0;i<n;i++)
                {
                    for (j=0;j<n-i-1;j++)
                    printf(" ");
                    for (j=0;j<(i*2+1);j++)
                    printf(".");
                    printf("\n");
                }
                break;
            };
        case 2:
            {
                scanf("%d", &n);
                for(i=0;i<(n+1)/2;i++)
                {
                    for (j=0;j<i+1;j++)
                    printf(".");
                    printf("\n");
                }
                for(i=(n+1)/2;i<n;i++)
                {
                    for (j=i;j<n;j++)
                    printf(".");
                    printf("\n");
                }
                break;
            }
        case 3:
            {
                scanf("%d", &n);
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n/2;j++)
                        printf(".");
                    printf("\n");
                }
            }
    }


    return 0;
}
