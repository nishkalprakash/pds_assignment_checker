//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>
#include <stdio.h>

int main(){
  int N, i, j, temp, a, term, X, sum, prox;
  printf("Input:");
  scanf("%d", &N);
  //a)
  printf("\nencoded:");

  sum=0;
  prox=N;
  while(N>0){
    i=0;
    X=1;
    temp=N;
    while(N>10){
      term=N/10;
      N=N/10;
      i++;}
    a=N+1;
    printf("%d", a);
    N=temp;
    while(i>0){
      X=X*10;
      i--;
	}
    if(N>=10){
      N=N-term*X;
    }
    else{N=0;}
    
  }
  //b)
  printf("\nwith check sum:");
  sum=0;
  N=prox;
  while(N>0){
    i=0;
    X=1;
    temp=N;
    while(N>10){
      term=N/10;
      N=N/10;
      i++;}
    a=N+1;
    printf("%d", a);
    N=temp;
    while(i>0){
      X=X*10;
      i--;
	}
    if(N>=10){
      N=N-term*X;
    }
    else{N=0;}
    
    sum=sum+a;
  }
  if(sum<10){
  printf("0%d", sum);
  }
  else{
    printf("%d", sum);
  }
  //c)

  printf("\ndouble encoded:");

  N=prox;
  sum=0;
  
   while(N>0){
    i=0;
    X=1;
    temp=N;
    while(N>10){
      term=N/10;
      N=N/10;
      i++;}
    a=N+1;
    printf("%d0", a);
    N=temp;
    while(i>0){
      X=X*10;
      i--;
	}
    if(N>=10){
      N=N-term*X;
    }
    else{N=0;}
    
    sum=sum+a;
  }
   if(sum<10){
   printf("00%d0", sum);
   }
   else
     {printf("%d0%d0", sum/10, sum-sum/10);
     }

  
  return 0;

}
    

  
