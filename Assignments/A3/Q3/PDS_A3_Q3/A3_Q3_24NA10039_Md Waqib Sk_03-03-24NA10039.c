//solving problem 3
//creator:md waqib sk
//roll:24NA10039

#include<stdio.h>
int main(){

int a,b,c,d;
printf("enter first number:\n");
	scanf("%d",&a);
	printf("enter second number:\n");  //TAKES THE NUMBERS
	scanf("%d",&b);
	printf("enter third number:\n");
	scanf("%d",&c);
	printf("enter fourth number:\n");
	scanf("%d",&d);

int count=0;
//CHECKS THE CONDITIONS
if(a==b){
count++;
}
 if(b==c){
count++;
}
 if(c==d){
count++;
}
 if(a==c){
count++;
}
 if(a==d){
count++;
}
 if(b==d){
count++;
}





if(count==1){
printf("YES");
}
else{
printf("NO");
}

}
