#include <stdio.h>

int main ()
{	
int a,i, largest=0, second_largest=0,d;
	 int smallest = 100000000; 
	int second_smallest = 0;
	printf("enter random number  \n");
	
        scanf("%d",&a);
if (a>=0&&a<=9){ 
	printf("largest: %d \n",a);

	printf("second largest :not yet entered\n");
	printf("smallest %d \n",a);

	printf("second smallest :not yet entered\n");}

else
{	
	while(a){
	d=a%10;
	a=a/10;
	
	if( largest<d){
	second_largest= largest;
 largest=d;}
	else if( second_largest< d&& d!=largest)
	{
second_largest =d;
}
	if(smallest> d){
      second_smallest=smallest;
	smallest=d;

}
	else if(second_smallest<d&& d!=smallest){
        second_smallest =d;
}
}
	printf("largest %d \n",largest);

	printf("second largest %d \n", second_largest);
	printf("smallest %d \n",smallest);

	printf("second smallest %d \n", second_smallest);

 return 0;
}











  	return 0;
}
