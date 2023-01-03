#include <stdio.h>
int devide(int x)
{
    if(((x+1)/2)%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n,c=0,i;
    char a[1000];
    printf("ÇëÊäÈëÕûÊýn(n>1):");
    scanf("%d",&n);
    while(n>1)
    {
        if(n%2==0)
        {
            n=n/2;
            a[c]=94;
        }
        else
        {
            if(devide(n)==0||n==3)
            {
                n=n-1;
                a[c]=45;
            }
            else
            {
                n=n+1;
                a[c]=43;
            }
        }
        c=c+1;
    }
    printf("%d\n",c);
    for(i=0;i<c;i++)
        printf("%c",a[i]);
    return 0;
}
