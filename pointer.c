//pointer in C programming
#include <stdio.h>
int main()
{
 int a;
 int *ptr;
 ptr=&a;
 printf("enter a value\n");
 scanf("%d",&a);
 printf("value of a is %d\n",a);
 printf("%d is stored at address %u",a,ptr);//%u for unsigned integer value
}
