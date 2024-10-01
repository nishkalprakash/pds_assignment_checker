#include <stdio.h>
int gcd(int a,int b)
	{int i;
	if (a>=b){i=b;}
	else {i=a;};
	while(i>=1){
		if(a%i==0){break;}		
		else i--;
		}
	return i;}
void cop();
int main(){
int ab[5],x=0,j=0,k;
	while(x<5){
	scanf("%d",&x)
	x++;
	}
void cop(ab)
{
while (j<5){k=(j+1)
	while (k>j && k<5){
	if(gcd(ab[j],ab[k])==1){
	printf("%d and %d are co primes",ab[j], ab[k]);}
	
	k++;}

	j++;}




}
return 0;
}
