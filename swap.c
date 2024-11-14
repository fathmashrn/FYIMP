//swapping two numbers using function
#include <stdio.h>
int a,b;
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("after swapping a=%d and b=%d\n",x,y);
}
int main()
{
    printf("enter any two number\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d and b=%d\n",a,b);
    swap(a,b);
    
    return 0;
}