//Roll no: 23ME30058
//Name: Shravani Khot

#include<stdio.h>
#include<stdlib.h>

int main() {
  int i,j,n;
  printf("Enter an integer less than 9999 \n");
  scanf("%d",&n);
  if (n<9999)
	 {
	   j=n;
	     int a1=j%10 ;
	     j=j/10;
	     int a2=j%10;
	     j=j/10;
	     int a3=j%10;
	     j=j/10;
	     int a4=j%10;
	     
  printf("Encoded digit %d%d%d%d " , a4+1,a3+1,a2+1,a1+1);

  int p = a4+a3+a2+a1+4 ;
  int q = p%100 ;

  if (q<10){
    printf ("Encoded integer with check sum is %d%d%d%d%d%d \n" ,a4+1,a3+1,a2+1,a1+1,0,q);
  printf("Double encoded integer is %d%d%d%d%d%d%d%d%d%d%d%d \n",a4+1,0,a3+1,0,a2+1,0,a1+1,0,0,0,q,0);
	 }
  else
    printf ("Encoded integer with checksum is %d%d%d%d%d \n",a4+1,a3+1,a2+1,a1+1,q);
  int r = q%10 ;
  int w = q/10 ;
    printf("Double encoded integer is %d%d%d%d%d%d%d%d%d%d%d%d \n",a4+1,0,a3+1,0,a2+1,0,a1+1,0,w,0,r,0);
	 }
  

  else { printf ("Give a number less than 9999");}

  return 0 ;
  
	   
	       
	 }
