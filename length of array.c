//to find the max and min length of the array
#include <stdio.h>
int main()
{
    int a[100];
    int max,min,i,n;
    printf("enter the length of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element %d\n",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
        printf("%d\t",a[i]);
    }
    printf("max value:%d\n",max);
    printf("min value:%d\n",min);
}
