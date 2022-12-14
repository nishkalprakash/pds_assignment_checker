/*test 1 set B
/*test 1 set B
SARANSH ATTRI
22MF3IM17
SEC 14*/

#include<stdio.h>

int main()
{
	int num[101];    //array defined
	
	int max=0;
	int max2=0;
	int arr=0;
	int lpct=0;
	while(num[arr]>0)
	{
    printf("enter the number\n");
    scanf("%d",&num[arr+1]);

    if(num[arr+1]>max)
    max=num[arr+1];

    arr=lpct++;   //for increment

       int a=0;

while(a<=arr+1)   //to find second largest number
{
	if ((num[a]>max2) && (num[a]<max))
		max2=num[a];
	a++;
}

printf("largest number=%d\n",max);
if(lpct>1)
printf("second largest number=%d\n",max2);
else
printf("second largest number: value not yet entered");

}

}
