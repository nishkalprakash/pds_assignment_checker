#include <stdio.h>
int main()
{
int i,n,a,max=0;
int max2=0;
printf("Enter number of digits to be entered");
scanf("%d",&n);
if (n==1)
{
	printf("Enter the number \n");
	scanf("%d",&a);
	printf("Largest number:%d \n",a);
	printf("second largest:Value not entered yet \n");
}
else
{
	for(i=0;i<n;i++)
		{
		printf("Enter the number \n");
		scanf("%d",&a);
		if (a<0)
			{
			printf("invalid input ..terminating program");
			break;
			}
		else if (a>max)
			{
			max=a;
			}
		}
	printf("Largest number:%d \n",a);
	
			/*for(i=0;i<n;i++)
			{
				if (max2<=a<max)
				{
				max2=a;
				printf("%d",max2);
				}*/
		
}
		
		//printf("second largest =%d",max2);

return 0;
}


