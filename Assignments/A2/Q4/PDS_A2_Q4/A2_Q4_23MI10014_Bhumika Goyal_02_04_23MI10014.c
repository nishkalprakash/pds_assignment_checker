//Bhumika Goyal
//23MI10014

#include<stdio.h>
int main ()
{
  int m,n;
  int sum,diff,product,intquo,intrem,sumofsq,sqofsum,avg,avgofsumofsq;
  
   
  printf("enter m\n");
  scanf("%d",&m);
  
  printf("enter n\n");
  scanf("%d",&n);
   sum=m+n; 
   product=m*n; 
   diff=m-n; 
  intquo=m/n;//integer quotient 
   intrem=m%n;//integer remainder 
   sumofsq= m*m+n*n; 
  //sumofsq stands for sum of squares. 
   sqofsum=(m+n)*(m+n);//sqofsum stands for square of sum 
  avg=(m+n)/2; 
   avgofsumofsq=(m*m+n*n)/2 ;

  printf("sum is %d\n",sum);
  printf("product is %d\n",product);
  printf("diff is %d\n", diff);
  printf("integer quotient is %d\n",intquo);
  printf(" integer remainder is %d\n",intrem);
  printf(" sum of squares is %d\n",sumofsq);
  printf("square of sum is %d\n",sqofsum);
  printf("floating point quotient is %f \n",(float)intquo);
  printf(" average as floating point number is %f\n",(float)avg);
  printf("average of sum of squares as a floating point number is %f\n",(float)avgofsumofsq);
  return 0;
}
  
  
  
  
  
