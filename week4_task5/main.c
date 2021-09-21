#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
    int k=1,i;
    for(i=1;i<n+1;i++) k=k*i;
    return k;
}

int main()
{
    int ln,rn,i,k,s,n;
    scanf("%d %d",&ln,&rn);
    for(i=ln;i<rn+1;i++)
    {
        k=i;
        s=0;
        while(k!=0)
        {
            s=s+factorial(k%10);
            k=k/10;
        }
        if(i==s)printf("%d, ",i);
    }
    return 0;
}
