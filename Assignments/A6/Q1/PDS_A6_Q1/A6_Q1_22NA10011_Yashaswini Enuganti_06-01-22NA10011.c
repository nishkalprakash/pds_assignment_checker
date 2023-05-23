#include<stdio.h>
# define PI 3.1415926535
int fact(int n)
{
   if(n==1)
   	return 1;
   else
   	return (n*fact(n-1));
}
float pow(float x,int n)
{
	if(n==1)
		return x;
	else
		return(x*pow(x,n-1));
}
double r_sin(double x)
{
	float p,q,r;
	int z;
	q=fact((2)*(z)+1);
	p=pow(x,(2)*(z)+1);
	r=p/q;
	return r;

}
int main()
{
	int i,j,n;
	float x,X,k;
	printf("Enter the value of x:");
	scanf("%f",&x);
    while(x>0&&x<2)
    {
        if (x>0&&x<2)
    	    printf("x=%f",x);
        else
            scanf("%f",x);
    }
    X=x*PI/180;

	printf("Enter the value :");
	scanf("%d",&i);
	j=fact(i);
	printf("factorial of %d is %d",i,j);
	n=i;
	k= (float) pow(X,n);
	printf("x^n value %f",k);


}
