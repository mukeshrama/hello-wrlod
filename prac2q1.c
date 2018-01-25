/*leap year or not*/
#include<stdio.h>
void main()
{
	int y,d;
	printf("enter the year");
	scanf("%d",&y);
	 if(y%100==0)
	{
		if(y%400==0)
		{
			printf("the year is a leap");
		}
		else
		{
		printf("the year is not a leap year");
		}
	}
	else if (y%4==0)
	{
		printf("the year is a leap year");
	}
	else 	
	{
	printf("the year is not a leap year");
	} 
}
	
	
