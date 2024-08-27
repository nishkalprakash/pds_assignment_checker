//Program to output Largest and second Largest number
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
int main()
{
	int a,max=0,max2,i,n=1,run=1;
	printf("Enter numbers: ");
	scanf("%d", &a);
	
	while(run==1)			//loop to run the code until a negative number is entered
	{
		if(a>=0)		//checking if a is neg
		{
				if(n<2)		//cheking if only 1 number is enetred
				{
					max=a;
					printf("Largest no: %d\n", max);
					printf("Second Largest no: Value not yet Entered");
					scanf("%d", &a);
					n++;
				}else		//if more than 1 number is entered
				{
					if(max<a)		//checkin if entered number is greater than max
					{
						max2=max;
						max=a;
						printf("Largest no: %d\n", max);
						printf("Second Largest no: %d\n", max2);	
						scanf("%d", &a);
						n++;
					}else
					{
						if(max2<a)	//if not then check if entered no is greater than max2
						{
							max2=a;
							printf("Largest no: %d\n", max);
							printf("Second Largest no: %d\n", max2);	
							scanf("%d", &a);
							n++;
						}else{		//if not then print previous numbers
							printf("Largest no: %d\n", max);
							printf("Second Largest no: %d\n", max2);
							scanf("%d", &a);
							n++;
						}
					}
				}
		}else
		{
			run=0;
			break;
		}
	}
	return 0;
}
