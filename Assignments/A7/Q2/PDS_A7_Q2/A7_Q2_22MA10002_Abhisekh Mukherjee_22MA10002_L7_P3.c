/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
topic:searching and sorting 
problem:p3
*/

#include<stdio.h>

int main()
{
int n,i,j,a,k=0;
int count,c,d=0;
printf("enter the number of integers\n");
scanf("%d",&n);
int A[100],B[100];
printf("enter the  elements\n");
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}
printf("enter the index\n");
 scanf("%d",&a);
for(i=0;i<n;i++){
 count=1;
  for( j=i+1;j<n;j++){
      if(A[i]==A[j]) count++;
   }
if(count==1){
  B[k]=A[i];
  k++;
}
}
for(i=0;i<k;i++){
   c=0;
   for(j=0;j<n;j++){
    if(B[i]==A[j]) c++;
}
if(a==c){
printf("%d appears %d times\n",B[i],c);
d++;
} 
}
if(d==0){ printf("no number appears %d times\n",a);
}

return 0;
}


