#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i,count,l;


printf("enter something for compression\n");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{
count=1;
while(i<l-1 &&str[i]==str[i+1]){
   count++;
   i++;}
printf("%c%d",str[i],count);
  }
}
