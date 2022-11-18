/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
void validnumberprinter(int n,int c,int d){
      /*check for 5 digit number*/
      if ((n>9999)&&(n<100000)){
      if ((n%(c+d))!=0)/*checks for divisibilty with c+d*/{
          printf("%d\n",n);
      }
      return;
      }
      /*recursively call function to build up number*/
      /*adding digit c*/
      validnumberprinter(n*10+c,c,d);
      /*adding digit d*/
      validnumberprinter(n*10+d,c,d);
}
int main(){
int c,d;
/*enter c and d*/
printf("Enter c\n");
scanf("%d",&c);
printf("Enter d\n");
scanf("%d",&d);
printf("The required numbers are\n");
validnumberprinter(0,c,d);
}
