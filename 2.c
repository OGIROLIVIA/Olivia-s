#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int min(int m,int n)   //����Сֵ
{
    if(m<=n)
        return m;
    else
        return n;
}
int main()
{
    srand((unsigned)time(NULL));
    int m,n;
    m=rand()%5+3;
    n=rand()%5+3;    
    int arr[m][n],i,j;
    int b[m*n],k=0,x;   //������b������arr������
    printf("%d  %d\n",m,n);
    printf("ԭ����Ϊ:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=rand()%9+1;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(x=0;x<=min(m,n)/2;x++)  //x����Ȧ����������arr��
    {
        for(j=x;j<n-x;j++)
        {
            b[k]=arr[x][j];
            k++;
        }
        for(i=x+1;i<m-x;i++)
        {
            b[k]=arr[i][j-1];
            k++;
        }
        for(j=n-x-2;j>=x;j--)
        {
            b[k]=arr[i-1][j];
            k++;
        }
        for(i=m-x-2;i>x;i--)
        {
            b[k]=arr[i][j+1];
            k++;
        }
    }
    x=b[m*n-1]; 
    for(k=m*n-1;k>0;k--)
        b[k]=b[k-1];
    b[0]=x;  //������b�е����ݽ����ֻ�
    k=0;
    for(x=0;x<=min(m,n)/2;x++)  //������b�е�������������arr
    {
        for(j=x;j<n-x;j++)
        {
            arr[x][j]=b[k];
            k++;
        }
        for(i=x+1;i<m-x;i++)
        {
            arr[i][j-1]=b[k];
            k++;
        }
        for(j=n-x-2;j>=x;j--)
        {
            arr[i-1][j]=b[k];
            k++;
        }
        for(i=m-x-2;i>x;i--)
        {
            arr[i][j+1]=b[k];
            k++;
        }
    }
    printf("�ƶ������Ϊ:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    for(x=0;x<=min(m,n)/2;x++)
    return 0;
}
