/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002

set :A                           */
#include<stdio.h>
int main()
{
int N;   // declaring the input
printf("enter the number\n");   
scanf("%d",&N);  // reading the input

if(N>=2 && N<=10){      // using if else
printf("the pattern is\n");
for(int i=1;i<=N;i++){
for(int j=(i*(i+1)/2 +1);j<((i+1)*(i+2)/2);j++){   // using nested for loops
printf("%d ",j-i);
}
printf("\n");    
}
}
return 0;
}
