#include <stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char str[100],rev_str[100],temp;
	printf("enter a string:");
	scanf("%s",str);
	strcpy(rev_str,str);
	l=strlen(str);
	for(i=0; i<l/2; i++)
	{
		temp=rev_str[i];
		rev_str[i]=rev_str[l-1-i];
		rev_str[l-1-i]=temp;
	}
	printf("reversed string is %s",rev_str);
}
