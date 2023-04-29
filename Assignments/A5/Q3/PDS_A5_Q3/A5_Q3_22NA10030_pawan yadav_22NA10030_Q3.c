#include<stdio.h>
void swap(int p,int q){
    int temp;
  temp=p;
  p=q;
  q=temp;
   swap( p,q);
   return ;
  }
 void main(){
     int a[10],n,b,f,i;
     scanf("%d%d",&f,&b);
     //swap( f,b);
    //printf("%d,%d",f,b);
  printf("Enter the limit (<10)");
  scanf("%d",&n);
  printf ("Enter the %d number:\n",n);
  for(i=1;i<n;i++){
   if(i<n-1) scanf(" %d",&a[i]);
   if(i==n-1) scanf(" %d",&a[0]);}
   printf("The array after right cyclic shift:");
 for(i=0;i<n;i++)printf("%d ",a[i]);

  }

