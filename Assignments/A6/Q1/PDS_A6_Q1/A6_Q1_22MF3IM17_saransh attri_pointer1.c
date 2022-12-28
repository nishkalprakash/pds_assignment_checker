/* Saransh attri
22MF3IM17
SEC 14
POINTERS AND RECURSSIONS*/

#include<stdio.h>

int print_term(int in)     //function to calculate nth value usin recurssion
{

   if(in==0)                //BASE CONDITIONS
   	return 0;
   else if(in==1)
   	return 1;
   else if(in==2)
   	return 2;
   else
   {
   	int ou=3*print_term(in-1)*print_term(in-2)-2*print_term(in-2)*print_term(in-3)+1;
    return(ou);   	
   }

}

int main()
{
	int k,lp;
	printf("write the value of k\n");
	scanf("%d",&k);
	for(lp=0;lp<k;lp++)
	{
		printf("%d,",print_term(lp));
	}

}
