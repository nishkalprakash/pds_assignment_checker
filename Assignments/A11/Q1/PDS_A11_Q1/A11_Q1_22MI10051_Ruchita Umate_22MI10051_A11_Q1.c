

/*
name:ruchita umate
sec:14
rollno:22MI10051
assignment:11
*/









#include<stdio.h>

float sum(int n)
{
float add;
if(n==1){
return 1.0;
}

else{

for(int i=n;i>1;i--)
     {
       add=sum(n-1)+1.0/(n);
      }
}
return add;
}

int main(){
int n;
printf("Enter the n :");
scanf("%d",&n);

float series;
series=sum(n);
printf("sum: %f",series);


return 0;
}
 
