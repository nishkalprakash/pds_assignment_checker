//prints a given series
//creator:md waqib sk
//roll:24NA10039
#include<stdio.h>
#include<math.h>
#include <stdlib.h>


int main(){
int n;
printf("Enter a positive integer:\n");
scanf("%d",&n);
int a=1;
int b=-1;
if(n<=0){
printf("N is invalid");

}
else if(n==1){
printf("%d",a);
}
else if(n==2){
printf("%d,",a);
printf("%d,",b);
}


else{
printf("%d,",a);
printf("%d,",b);
for(int i=2;i<n;i++){

int k=abs(a)+abs(b);

a=abs(b);
b=abs(k);


if(i%2==0){
printf("%d,",k);

}
else{

printf("%d,",-k);
}

}


}
}
