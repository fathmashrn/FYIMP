//GCD of two numbers
#include <stdio.h>
#include <math.h>
int gcd(int x,int y)
{
    //find min of two numbers
    int result;
    result=((x<y)?x:y);
    while(result>0){
        //to check both the numbers are divisible by the result
        if(x%result==0&&y%result==0)
        {
            break;
        }
        result--;
    }
    return result;
}

int main()
{
    int x,y;
    printf("enter any two numbers\n");
    scanf("%d%d",&x,&y);
    printf("GCD of %d and %d are %d",x,y,gcd(x,y));
    
}
