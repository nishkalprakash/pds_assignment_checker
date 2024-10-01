#include<stdio.h>


int power(int x,int n)
{  int a =1;
  for(int i =1;i<=n;i++){
    a = a*x;
  }
  return a;
}

int fact(int n)
{   int b =1;
   for(int j =1;j<=n;j++){
      b = b*j;
   }
   return b;
}

int main(){
    float sum = 0,x,n,term;
    printf("Enter the value of x = ");
    scanf("%f",&x);
    printf("Enter the value of n = ");
    scanf("%f",&n);
    
    if(n == 1 || x == 0){
    
    sum = 1;
   printf("Sum of %.1f number of terms is %.4f\n",n,sum);
   }
    
   else{ for(int z = 1; z<=n; z++){
     sum = sum + power(x,z)/(float)fact(z);
    
       
    }
    printf("Sum of %.1f number of terms is %.4f\n",n,sum);
    }
    
    return 0;
}
