#include<stdio.h>

int main()
{
	
	int i,j,n, k;
	printf("how many numbers you want to type? : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("%d번째 숫자: ", i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
		{
		for(j=n-1;j>i;j--)
		{
			if(a[j]>a[j-1])
				{
				k=a[j];
				a[j]=a[j-1];
				a[j-1]=k;
				}
		}
		}
	printf("descending order: ");
	for(i=0;i<n;i++)
	{
		printf("%-3d",a[i]);
	}

	return 0;
}
