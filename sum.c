#include <stdio.h>
int main()
{
	int nmb1,nmb2,nmb3,sum,multiplication,option;
	printf("enter three numbers\n");
	scanf("%d%d%d",&nmb1,&nmb2,&nmb3);
	printf("enter 1 for addition\n or 2 for multiplication");
	scanf("%d",&option);
	switch (option)
	{
	case 1:
		if(1)
			sum=nmb1+nmb2+nmb3;
		printf("sum=%d",sum);
		break;
	case 2:
		if(2)
			multiplication=nmb1*nmb2*nmb3;
		printf("multiplication=%d",multiplication);
		break;
	default:
		printf("error");
	}

}
