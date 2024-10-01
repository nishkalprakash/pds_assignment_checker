#include <stdio.h>
int fact(int n)
{ int i=1,j=1;
 if(n>0) {
		while (j<n+1)
		{
			i=i*j;
			j++;
		}
	return i;}
	else if(n=0) {return 1;}
}
int power(int m, int l)
{
	int k=0,p=1;
	while(k<l){
		p=p*m;
		k++;}
return p;
}


int main(){
int x,y=1,n;
float a=0,b;
	printf("the value of x is:");
	scanf("%d",&x);
	printf("the value of n:");
	scanf("%d",&n);
	while(y<n){
		float z=((float)power(x,y)/(float)fact(y));
		a=a+z;
		y++;
		}
	printf("the output is %f",a+1);

return 0;
}
