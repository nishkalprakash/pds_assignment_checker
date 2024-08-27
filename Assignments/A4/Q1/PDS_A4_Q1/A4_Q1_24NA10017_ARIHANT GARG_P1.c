/*Name:Arihant Garg
  Roll No:24NA10017
  Lab:4            
  Title:Program that displays first N term of the given series*/

#include <stdio.h>
#include <math.h>

int main(){
int terms,i=1,sum=0,ans,a=1,b=0;

printf("Enter the number of Terms");
scanf("%d",&terms);

if(terms<=0){                          //check for invalid values of N//

printf("%d is invalid",terms);

}
else

while(i<=terms){


sum=(a+b);
a=b;
b=sum;
ans=(-1)*sum*(pow(-1,i));

printf("%d\t",ans);                   //printing the answer

i+=1;


}




return 0;
}
