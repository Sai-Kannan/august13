#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the 1st string : ");
	gets(str1);
	char *ptr=str1;
	for(int i=0;i<str1[1]!='\0';i++)
	str2[i]=ptr[i];
	puts(str2);
	printf("%d",strlen(ptr));
}
