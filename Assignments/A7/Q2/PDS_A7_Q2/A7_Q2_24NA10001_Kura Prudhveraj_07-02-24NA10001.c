#include<stdio.h>




int gcd(int a,int b ){
 if (b<a){
  int temp = a;
  a=b;
  b=temp;
  }
  while((b%a==0)){
  temp=a;
   a=b%a;
   b=temp;
   }
   return a;
   }


void pairselect(a[5]){
     
   for(int k=0;k<4;k++){
    for(int t=k+1;t<=4;t++){
     int p;
     p=gcd(a[k],a[t]);
     if(p==1){
     printf("%d and %d are coprimes\n",a[k],a[t]);
     }
       
     }
}
}


 int main (){
  int a[5];
  for(int k=0;k<5;k++){
  scanf("%d",&a[k]);
  }
  void pairselect(a);
    
    return 0;
    }
  
  
  
  
  
  
  
  
  
