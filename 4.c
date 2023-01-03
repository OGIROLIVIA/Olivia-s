#include <stdio.h>
int max(int a[],int n)
{
    int i,temp;
    for(i=0;i<n-1;i++)
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    return a[n-1];
}
int main()
{
    int m,n,i,j=0,time=0;
    scanf("%d %d",&m,&n);
    int arr[n],b[m];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(m>n)
        printf("%d",max(arr,n));
    else 
    {
        for(i=0;i<m;i++)
        {
            b[i]=arr[j];
            j++;
        }
        for(;;)
        {
            for(i=0;i<m;i++)
            {
                b[i]--;
                if(j==n)
                    continue;
                if(b[i]==0)
                {
                    b[i]=arr[j];
                    j++;
                }
            }
            time++;
            if(j==n)
                break;
        }
        time=time+max(b,m);
        printf("%d",time);
    }
    return 0;
}
