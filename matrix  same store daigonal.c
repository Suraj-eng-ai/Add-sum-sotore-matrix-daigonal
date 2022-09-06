\\write a program that computs the sum of the elements  that are stored on the daigonal of  a matrix using pointers.
#include<stdio.h>
int main()
{
	int arr[5][5],i,j,sum=0;
	int *ptr;
//	ptr=arr;
	for(i=0;i<2;i++)
	{ printf("\n");
		for(j=0;j<2;j++)
		{
			printf("\n arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		//	scanf("%d",&arr[i][j]);
		sum=sum+(*(arr+i))[j];
		}
	}
	printf("sum =%d",sum);
	arr[0][0]=sum;
	arr[1][1]=sum;
		for(i=0;i<2;i++)
	{ printf("\n");
		for(j=0;j<2;j++)
		{
		//	printf("\n arr[%d][%d]",i,j);
		//	scanf("%d",&arr[i][j]);
		printf("%d\t",arr[i][j]);
		}
	}
	
}
ouput is ---
 arr[0][0]=1

 arr[0][1]=2


 arr[1][0]=3

 arr[1][1]=4
sum =10
10      2
3       10

