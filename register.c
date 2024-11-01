#include<stdio.h>
int main()
{	
  int n;
	printf("enter the number of student\n");
	scanf("%d",&n);
	struct std
	{
		char name[20],add[20];
		int m1,m2,m3,total;
		float percentage;
	};
	struct std student[n];
	int i;
	for (i=0; i<n; i++) {
		printf("name:");
		scanf("%s",student[i].name);
		printf("address:");
		scanf("%s",student[i].add);
		printf("mark is upto 50\n");
		printf("enter mark 1:");
		scanf("%d",&student[i].m1);
		printf("enter mark 2:");
		scanf("%d",&student[i].m2);
		printf("enter mark 3:");
		scanf("%d",&student[i].m3);
		student[i].total=student[i].m1+student[i].m2+student[i].m3;
		student[i].percentage=((float)student[i].total/150)*100;
	}
    	printf("----------------------\n");
	    for(i=0;i<n;i++){//loop to print details of each student
		printf("name:%s\n",student[i].name);
		printf("address:%s\n",student[i].add);
		printf("mark 1:%d\n",student[i].m1);
		printf("mark 2:%d\n",student[i].m2);
		printf("mark 3:%d\n",student[i].m3);
		printf("total:%d\n",student[i].total);
		printf("percentage:%.2f\n",student[i].percentage);//for 2 decimal point
        printf("----------------------\n");
	}
}
