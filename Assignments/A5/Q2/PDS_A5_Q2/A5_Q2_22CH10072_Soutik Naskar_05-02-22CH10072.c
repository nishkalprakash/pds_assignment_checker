#include<stdio.h>
#include<math.h>

int primecheck(int i);
int main(){
	int n,i,p,q;
	scanf("%d",&n);
if(n%2==0||n!=2){
	q=1;
	p=n-q;

	printf("%d %d",&p,&q);
	

} else 
printf("-1");



}
int primecheck(int i){
	if(i%2!=0||i==2)
		return i;
else 
	return -1;
