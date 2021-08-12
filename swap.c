#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int i,j;
	printf("enter any two numbers for i and j : ");
	scanf("%d%d",&i,&j);
    swap(&i,&j);
    printf("swapped values of i and j are : %d %d",i,j);
}
