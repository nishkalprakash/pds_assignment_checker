
//roll no.=23GG10041
//name= Samriddhi Ahuja
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x[50],i,j,k,n,sum;
  printf("enter the number of random numbers to be printed=\n");
  scanf("%d",&n);
    printf("x:\n");
  for (i=0;i<=n;i++)
    {x[i]=rand()%41 + 10;
      printf("array %d=%d\n",i, x[i]);}
  for(j=0;j<=n;j++){
    for (k=0;k<=n;k++){
      for (i=0;i<=n;i++){
	sum= x[i]+x[j]+x[k];
	if (sum==60&&i!=j!=k&&i<j&&j<k&&i<k){
	  printf("triplet=%d,%d,%d\n",x[i],x[j],x[k]);}}}}
  return 0;
}
	  
      
      
