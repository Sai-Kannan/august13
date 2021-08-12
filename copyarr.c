#include<stdio.h>
void fun(int arr[],int n)
{
	int i=0,brr[100];
	for(i=0;i<n;i++)
		brr[i]=arr[i];
	printf("copied elemnts are :");
	for(i=0;i<n;i++)
	printf(" %d",brr[i]);	
}
int main()
{
	int arr[100],i,n;
	printf("no.of elements to be given in an array : ");
	scanf("%d",&n);
	printf("enter elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int *ptr=arr;
	fun(ptr,n);
}
