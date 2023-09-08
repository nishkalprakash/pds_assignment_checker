//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>
int main()
{
  int a=0,b=0,c=0,d=0,i;
  while(i!=0){
    d=c;
    c=b;
    b=a;
    printf("\nenter number");
    scanf("%d",&a);
    if (a<0){
       printf("user entered negative no. ; PROGRAM TERMINATED");
       return 0;
    }
    if ((a==7)&&(c==1)&&(d==5)){
      printf("\nPATTERN FOUND!!!");
      i=0;
    }
  }
  return 0;
}
    
    
