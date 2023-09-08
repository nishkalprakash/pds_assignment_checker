#include <stdio.h>

int main ()
{
	int a,i,sum=0 ,largest=0, second_largest=0,d;  
	printf("enter random number  \n");
        scanf("%d",&a);
	
       while(a){
	d=a%10;
	sum+=d;
	a=a/10;
	if( largest<d){
	second_largest=largest;
 largest=d;}

	 else if( second_largest< d&& d!=largest)
	{
second_largest =d;
}
        }
	printf("sum is %d \n",sum);
	printf("largest %d \n",largest);
	printf(" second largest %d \n", second_largest);
        return 0;

}
