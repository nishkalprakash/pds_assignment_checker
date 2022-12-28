/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:5
finding sum of series using recursions */

#include<stdio.h>
#include<stdlib.h>
int print_term(int);
int main(){
   int num1,val,j;
   printf("Enter the number of terms to be printed:");
   scanf("%d",&num1);                                            // It takes the no:of terms to be printed//
  if (num1<0) {printf("Invalid input\n");
           return 0;}
   for (j=0;j<num1;j++){
       val=print_term(j);
   if (j!=num1-1)printf("%d ,",val);
  else printf("%d\n",val);}
 return 0;
}
int print_term(int y){
int p;
 if(y<=2 && y>=0){                                            //base condition of recursion//
    return y;}
 else {
  p=3*print_term(y-1)*print_term(y-2)*-2*print_term(y-2)*print_term(y-3)+1;
   return p;}
}
