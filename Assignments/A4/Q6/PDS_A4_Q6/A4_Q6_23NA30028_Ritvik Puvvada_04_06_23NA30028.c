//Name: Ritvik Puvvada//
//Roll No: 23NA30028//

#include<stdio.h>
int main()
{
  int i,x,s=0,min=36,a;
  for(i=0,i<1000,i++) x=rand()%1000+5000)
  while(x>0){
    a=x%10;
    x=x/10;
    s=s+a;
    printf("%d%d",x,s);
    if (s<min)min=s;
  }
printf("The number having smallest number of digits is %d",min);
return 0;
}
    
    
  
