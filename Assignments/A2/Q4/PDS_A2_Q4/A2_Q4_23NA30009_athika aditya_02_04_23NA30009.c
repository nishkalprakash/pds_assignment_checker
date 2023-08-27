//Roll number 23NA30009
#include<stdio.h>
#include<math.h>

int main(){
  int m;
  int n;
  printf("give two integers you want to work with:\n");
  scanf("%d %d", &m, &n);
  
  printf("sum:%d\n", m+n);
  printf("difference %d\n",m-n);
  printf("prouct %d\n" ,m*n);
  printf("integer quotient %d\n",m/n);
  printf("integer remainder %d\n",m%n);
  printf("floating point quotient %f\n",(float) m/n);
  printf("sum of squares:%f\n",(float)pow(m,2)+ pow(n,2));
  printf("average %f\n",(float)(m+n)/2);
  printf("average of the sum of the squares:%f\n",(float)(pow(m,2)+pow(n,2))/2);
	 
  return 0;
}
	  
