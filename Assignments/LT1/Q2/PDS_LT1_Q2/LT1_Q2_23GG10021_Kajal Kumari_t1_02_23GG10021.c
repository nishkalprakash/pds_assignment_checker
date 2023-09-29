//roll_no._23GG10021
//name_kajal_kumari
#include<stdio.h>
int main(){
  int a1[10],a2[10];
   int a3[10],int a4[10];
    int a5[20],a6[20],a7[40];
		   printf(" the elements of a1[10] are:");
		   for(int i=0;i<10;i++){
		     scanf("%d",(rand()%11)+20);
		     printf(" a1[i]:%d",i);
		   }
		   printf(" the elements of a2[10] are:");
		   for(int j=0; j<10;j++){
		     scanf("%d", (rand()%31)+30);
		     printf(" a2[j]:%d",j);}
		   printf(" the elements of a3[10] are:");
		   for(int k=0;k<10;k++){
		     scanf("%d",(rand()%61)+30);
		     printf("a3[k]:%d",k);}
		   printf(" the elements of a4[10] are:");
		   for(int l=0;l<10;l++){
		     scanf("%d",(rand()%91)+30);
		     printf("a3[l]:%d",l);}
		   
		   printf(" the elements of a5[20] are:");
		   for(int n=0;n<20,n++){
		     if(n%2==0){
		       printf("%d",a1[i]);}
		       else
			 printf("%d",a2[j]);
		     printf(" a5[n]:%d",n);}
		   
		   printf(" the elements of a6[20] are:");
		   int temp;
		   temp=a1[i];
		   a1[i]=a1[i+1];
		   a1[i+1]=temp;
		   printf(" the swapped a1[i] is : %d",i);
		 
	      
		   for(int m=0;m<20;m++){
		     if(m%2==0){
		       printf(" a6[m]=%d",m,a1[i]);}
		       else
			 printf("%d", a2[j]);
		     printf(" a6[m]: %d",m);}
		   printf(" the elements of a7[10] are:")
		     int temp1;
		   temp1=a5[n];
		   a5[n]=a5[n+1];
		   a5[n+1]=temp1;
		   int temp2;
		   temp2=a6[m];
		   a6[m]=a6[m+1];
		   a6[m+1]=temp2;
		   for(int p=0;p<40;p++){
		     if(p%2==0){
		       printf("a7[p]=%d",p,a5[n]);
		     }
		     else
		       printf(" a7[p]=%d",p,a6[m]);
		     printf(" a7[p]=%d",p);
		     
		   return 0;
}
		       
		   
		   
