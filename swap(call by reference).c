//swapping two numbers using function
#include <stdio.h>
int a,b;
int main()
{
    printf("enter any two number\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping a=%d and b=%d\n",a,b);
    return 0;
}
int swap(int*x,int*y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("inside the function a=%d and b=%d\n",*x,*y);
}
