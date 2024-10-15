# include<stdio.h>
# include<math.h>
int digit(int n){  // calculating degit n

if(n==0) return 0;
else return(1+digit(n/10));
}
int x;
int pow(10,x); // calculating 10^x
int a=1;
for(i=1;i<=x,i=i+1){a=a*10;
 return 0;
 }
int Ispalindrome(int n,int x){
int a=0;
if(n%10) return 0;
 else{
   return (Ispalindrome(n/10,x-1)+(n%10)*pow(x-1));
   
 
 
 }

int main(){
int n;
scanf("%d",&n);// input the number
int a=digit(n);
int b=Ispalindrome(n,b);
if (b==n) printf("palindrome \n");
else printf("not palindrome \n");




return 0;
}
