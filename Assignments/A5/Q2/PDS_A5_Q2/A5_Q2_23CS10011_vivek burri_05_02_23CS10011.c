// roll no 23CS10011
// name vivek
#include<stdio.h>
#include<stdlib.h>
int main (){
  int a[50],i=0,j=0,k=0,p;
  printf("enter numbers u want to be generated");
  scanf("%d",&p);
  for(i=0;i<p;i++){
    a[i]=(rand()%41)+10;
    printf("%d\n",a[i]);
  }
  for  (i=0;i<p;i++){
    for(j=0;j<p,j!=i;j++){
      for(k=0;k<p,k!=i,k!=j;k++){
	if(a[i]+a[j]+a[k]>60)
	  printf("the indices are %d and %d and %d and the numbers are %d and %d and %d\n",i,j,k,a[i],a[j],a[k]);
}}}
return 0;
}
