#include <stdio.h>
void main(){
int len;
printf("Enter value of len\n");
 scanf("%d",&len);  // TAKING SIZE OF ARRAY 
 int a[len];
 printf("enter elements of array\n");
 
 for(int i=0;i<len;i++){
 scanf("%d",&a[i]);
 }
 int m;
 printf("Enter value of m \n");
 scanf("%d",&m);
 a[len++]=m;  // STORING VALUE OF M ,HENCE INCREMENTING LEN BY 1
 for(int i=0;i<len-2;i++){  // bubble sort
 for(int j=0;j<len-1-i;j++){
   if(a[j]>a[j+1]){
   int temp = a[j];
   a[j]=a[j+1]; // SWAPPING FUNCTION
   a[j+1]=temp; 
   }
   }
   }
   printf("output Array\n");
   for(int i=0;i<len;i++){   // PRINTING FINAL SORTED ARRAY
   printf("%d ",a[i]);
   }
   }
   
