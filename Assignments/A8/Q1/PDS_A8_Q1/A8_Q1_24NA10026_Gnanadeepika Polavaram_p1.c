#include <stdio.h>
#include <math.h>

int digits(int n){
int k,r;

k = n/10;

if(k==0) return 1;


else{
digits(k);
}

r = 1+digits(k);
return r;




}

void palindrome(int n){
int r,k,d,l;
k=n/10;

if(k==0) {printf("Palindrome");
}

else{

r = n%10;
d=digits(n);
l=((int)n)/(pow(10,d-1));

if(r!=l){
printf("Not palindrome");
}
else{palindrome(k);}
return ;

}


}



int main(){
int n,num;

scanf("%d",&n);

num = digits(n);
printf("number of digits:%d\n",num);
palindrome(n);
return 0;



}
