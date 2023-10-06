#include<stdio.h>
#include<stdlib.h>
int main(){
int arr[100];
 int size;
 int i;int n;
 printf("Enter the required size");
scanf("%d";&size);
for(i=0,i<=n,i++){
if (i==1)
printf("Fill");
 else if (i==2)
  printf("Exchange");
 else  if(i==3)
   printf("Rotate right");
 else if (i==4)
   printf("Rotate left");
 else if (i==5)
   printf("segregate");
 else if (i==6)
   printf("search");
 else if(i==7)
   printf("fold");
 else if(i==8)
   printf("Analyse");
 else
   printf("Exit");
 }
 return 0;
}
