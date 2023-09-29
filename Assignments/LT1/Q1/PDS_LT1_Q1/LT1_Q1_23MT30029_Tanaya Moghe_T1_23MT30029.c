//Roll No:<23MT30029>
//Name:<Tanaya Moghe>
//Set:<Normal>

#include <stdio.h>
int main()
{
	int i,k,n,t,a,c,d,g,b=0,num=0,j=0, s=1, e=0, f=10;
	printf("Enter a positive integer less than 9999\n");
	scanf("%d", &i);
	n=i;
	if(i<9999)
	{
		while (i>0)
		{
			j=i%10;
			k=j+1;
			if(k<10){
			 	t=k*s;	
				}
			else {
				t=k*s;
				s*=10;
				}
			num=num +t;
			s*=10;	
			i=i/10;
		}
		printf("input= %d , output = %d, ", n, num);

		a=num;
		c=num*100;
		while(a>0){
				b=b+ a%10;
				a=a/10;
			}
		d=c+b;
		printf(" with checksum = %d,", d);
		while (d>0){
				g=d%10;
				e= e+ g*f;
				f*=100;
				d=d/10;
			}
		printf(" double encoded = %d\n", e);
	}
	else printf("invalid input\n");
	return 0;
}





