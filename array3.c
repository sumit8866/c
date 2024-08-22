#include<stdio.h>
int main()
{
	int stu[5];
	int sub[3];
	int a,b,c,total=0,pr;
	for (int i = 0; i<5; i++)
	{
		printf("enter student no.:%d \t",i);
		scanf("%d",&stu[5]);
		for( int j=0; j< 3;j++)
	{
			printf("enter s1 :");
			scanf("%d",&sub[j]);
			total+=sub[j];	 
	}
	pr=total/3;
			printf("total mark: %d\n",total);
			printf("percentage: %d \n",pr);
			
		if( pr>=80)
		{
			printf(" GRADE A\n");
		}
		else if( pr>=60)
		{
		printf(" GRADE B\n");
		}else if( pr>=40)
		{
			printf(" fail reels ochi jo\n");
		}
			
	}
	
return 0;
	
}


