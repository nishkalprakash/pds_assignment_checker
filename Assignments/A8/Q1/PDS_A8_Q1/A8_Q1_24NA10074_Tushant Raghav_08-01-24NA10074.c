#include<stdio.h>
#include<math.h>
int digits(int n,int count){
	if(n==0) return count;
	count++;
	digits(n/10,count);
}
int IsPalindrome(int n){
int count=0;
int nod=digits(n,count);
	if(nod<=1){printf("Palindrome");}
	else{

	int fd = n/(int)pow(10,nod-1);
	int ld = n%10;
	if(fd==ld) {
		int i=n%(int)pow(10,nod-1);
		int j=i/10;
		IsPalindrome(j);
		
	}
	}
	
	
		
}
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int nod = digits(n,count);
	IsPalindrome(n);

	return 0;
}
