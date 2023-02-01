/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:11
problem:1
topic:recursion to link list
*/


#include<stdio.h>
#include<stdlib.h>
float sum(int n){
 if(n==1) return 1;
   else 
return (sum(n-1)+ 1/(float)n);
}



int main()
{
int n;
printf("enter the number of terms\n");
scanf("%d",&n);
 float s=sum(n);
printf("the sum of the series is %f\n",s);
return 0;
}

