#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0) f++;

    }
    if(f==0) printf("%d�O���",n);
    else printf("%d���O���",n);
}
