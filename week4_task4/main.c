#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=1,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++) printf(" ");
        for(j=0;j<i+1;j++,k++) printf("%d",k);
        printf("\n");
    }
    return 0;
}
