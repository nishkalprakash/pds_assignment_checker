#include <stdio.h>
int main()

{

   int N;
    printf("plese enter the positive integer N\n");
    
    scanf("%d",&N);
  

   int i;
   int series[N];
   
   
    
    if((N!=0)&&(N>0)){
    
     for(i=2;i<=N;i++)
   
     {
     series[0]=1;
     series[1]=-1;
     
     series[i]= -(series[i-1]-series[i-2]);
     }
    
  
    
    for (i=0;i<=N;i++)
    { printf("%d\n",series[i]);}
   
    }
    
    else {
    
    printf("N is invalid");
    }
    return 0;
    }
  
