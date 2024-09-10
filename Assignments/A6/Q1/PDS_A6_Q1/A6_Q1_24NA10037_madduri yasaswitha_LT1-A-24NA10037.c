//code creator:M.Yasaswitha
//roll no:24NA10037
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int N,A,B,x,i,k;
double cos(double x);
int Filter[N];
int Bin[A];
int bin[B];
float y;
//random number generator with a fixed seed (42) to check the test cases
srand (42);
int randomNumber = rand() %100 +1;
printf("random Number:%d\n",randomNumber);
y= cos(x/2)+ ((-1)^(k+1) *(k^2) /(2*k+1));
for(i=0;i<=N;i++){
printf("y=%d/n",Filter[i]);
i++;
}
for(x=0;x<=100;x++){
if(y>Filter[i]){
printf("y=%d\n",Bin[A]);
}
else if(y<Filter[i])
printf("y=%d\n",bin[B]);
}
return 0;
}
