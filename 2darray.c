#include<stdio.h>
int main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int (*ptr)[3]=arr;
	printf("the resultant array is :\n ");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		
			printf(" %d ",(*(*ptr+j))+arr[i][j]);
		}
		printf("\n");
		ptr++;
	}
}
