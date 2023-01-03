#include <stdio.h>
#include <math.h>
int prime(int x)   
{
    int i,flag=1;
    for(i=2;i<=sqrt(x);i=i+1)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int odd(int x)
{
	if(x%2==0)
	return 0;
	else
	return 1;
}
int main()
{
    int n,i,j,c;
    printf("请输入一个正整数n( 3 < n < 10^9 ):");   
    scanf("%d",&n);
    printf("%d = ",n);
    if(n==4)
    	printf("2 + 2");
	else
	{
		if(odd(n)==1)
		{
			printf("2 ");
			i=n-2;
		}
		else
		{
			printf("3 ");
			i=n-3;
		}
		if(prime(i)==1)
			printf("+ %d",i);
		else
		{
			while(prime(i)==0)
			{
				if(odd(i)==1)
				{
					printf("+ 2 ");
					i=i-2;
				}
				else
				{
					printf("+ 3 ");
					i=i-3;
				}
			}
			printf("+ %d",i);
		}
	}
    return 0;    
}
