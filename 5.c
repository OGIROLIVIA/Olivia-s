#include <stdio.h>
#include <math.h>
int main()
{
    char arr[7];
    int m,n,i;
    for(i=0;i<7;i++)
        scanf("%c",&arr[i]);
    m=arr[5];
    n=arr[6];
    for(i=4;i>=0;i--)
        arr[i+2]=arr[i];
    arr[0]=m;
    arr[1]=n;
    for(i=0;i<7;i++)
    {
        if(arr[i]>=48&&arr[i]<=57)
            arr[i]=arr[i]-48;
        if(arr[i]>=65&&arr[i]<=70)
            arr[i]=arr[i]-55;
        if(arr[i]>=97&&arr[i]<=102)
            arr[i]=arr[i]-87;
        arr[i]=arr[i]-5;
        if(arr[i]<0)
            arr[i]=16+arr[i];
    }
    m=0;
    for(i=0;i<7;i++)
        m=m+arr[i]*pow(16,6-i);
    n=m%10000;
    printf("%dÄê%dÔÂ%dÈÕ",m/10000,n/100,n%100);
    return 0;
}