//to check the number is prime or not
#include <stdio.h>
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    
    if(prime(num)){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }

}
int prime(int num)
{
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}
