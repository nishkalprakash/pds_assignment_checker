/*test 1 set B
SARANSH ATTRI
22MF3IM17
SEC 14*/

#include<stdio.h>
#include<math.h>

int arms(int nm)
{
	int number=nm;
	int lop=nm;
	int arm=0;
	int loopct=0;
	int lsdig;

	while(number!=0)
{
	number=number/10;
    loopct++;
  }
//printf("for num=%d, lpct=%d",nm,loopct);

	while(lop!=0)
{
	lsdig=lop%10;
	lop=lop/10;
    arm=arm+pow(lsdig,loopct);
}
//printf("num in arm=%d\n",nm);
//printf("its arm=%d \n",arm);
if(arm==nm)
	return(1);
else
	return(0);
}



int main()
{
	int num,a;
printf("enter the number\n");
scanf("%d",&num);

if(num<1)
printf("invalid input");

//printf("in main for 153 .....%d",arms(153));

for(a=1;a<=num;a++)
{
	if (arms(a)>=1)
	{
        printf("%d\n",a);
	}
	else
		continue;
}

}
