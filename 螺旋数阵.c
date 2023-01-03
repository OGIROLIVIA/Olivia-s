#include <stdio.h>
int main()
{
    int n;
    printf("请确定该螺旋数阵的阶数n:");
    scanf("%d",&n);
    int a[n+1][n+1];
    int i,j,seed=1;
    for(i=1;i<=n/2;i++)
    {
    	for(j=i;j<=n-i;j++)
    	{
    		a[i][j]=seed;
    		seed++;
		}
		for(j=i;j<=n-i;j++)
		{
			a[j][n-i+1]=seed;
			seed++;
		}
		for(j=n-i+1;j>=i+1;j--)
		{
			a[n-i+1][j]=seed;
			seed++;
		}
		for(j=n-i+1;j>=i+1;j--)
		{
			a[j][i]=seed;
			seed++;
		}
	}
	a[(n+1)/2][(n+1)/2]=seed;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
