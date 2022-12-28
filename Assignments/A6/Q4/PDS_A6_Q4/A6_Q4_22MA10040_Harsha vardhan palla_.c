#include<stdio.h>
#include<stdlib.h>
int n1,n2,n,*p1,*p2;
printf("Enter n value");
scanf("%d",&n1);
p1=(int *)malloc(m1*sizeof(int));
scanf("%d",&n2);
p2=(int *)malloc(n2*sizeof(int));
   printf("\n Enter values: ");
   for(i=0;i<n2;i++){
   scanf("%d",&num);
   p2[i]=num;}
 printf("A= ");
 for(i=0;i<m1;i++){
  printf("%d",p1[i]);}
  printf("\nB= ");
  for(i=0;i<n2;i++){
  printf("%d",p2[i]);}
  printf("\n");