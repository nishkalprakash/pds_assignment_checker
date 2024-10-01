//aashrith vellampalli
//24NA10007

#include<stdio.h>
int power(int x,int n)// defining power function
{
 int a=1;
 for(int i=0;i<n;i++) 
 {
  a=a*x;
 }
 return a;
}

int fact(int n) //defining factorial function
{
 int a=1;
 for(int i=1;i<=n;i++)
 {
  a=a*i;
 }
 return a;
}

int main()
{
 float term;
 int n,x,c,d;
 float sum=1;
 printf("enter value of x and number of terms\n");
 scanf("%d%d",&x,&n);// input from user
 
 for(int i=1;i<n;i++)
{ 
  c=power(x,i);
  d=fact(i);
  term=(float)(c)/d;// typecasting to float
  sum=sum+term;

}
 printf("%f",sum);
 printf("\n");
 return(0);
}


