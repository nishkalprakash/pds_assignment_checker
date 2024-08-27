
//calculates largest and second largest
//creator:md waqib sk
//roll:24NA10039
#include<stdio.h>
#include <stdbool.h>

int main(){
int n;
int largest=-1;
int s_largest=1;
while(true){
printf("Enter number:\n");
scanf("%d",&n);
if(n<0){

break;
}
else{
if(n>=largest){

s_largest=largest;
largest=n;

}
printf("Largest number: %d \n",largest);

if(s_largest==-1){
printf("Second largest number: Value not yet entered \n");
}
else{

printf("Second largest number: %d \n",s_largest);

}


}

}




}
