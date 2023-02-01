/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:11
problem:2
topic:recursion to link list
*/


#include<stdio.h>
#include<stdlib.h>

int fibbonacii(int k){
if (k<=0) return 0;
if(k==1) return 1;
  
return fibbonacii(k-1)+fibbonacii(k-2);

}

int main()
{
   int n;
printf("enter the value of n  \n");
scanf("%d",&n);


int flag=0;
for(int i=0;i<100;i++){
  if(n==fibbonacii(i)){
     printf("yes %d belongs to fibonacci series\n",n);
    flag=1;
  }
if(i>n){
break;
}
}


if(flag!=1){  printf("NO : %d does NOT belong to fibonacci series\n",n);}
return 0;
}
