//roll no-23NA30009
//athika

#include <stdio.h>

int main(){

  int n;
  int ranNum[50];
  int a,b,c;
   

  printf("enter number of random numbers to be generated :\n");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    ranNum[i]=rand()%40 + 10;
    printf("%d\n",ranNum[i]);
  }

  for(int i=0;i<n;i++){
    printf("your input is %d\n",ranNum[i]);
  }

  /* while (rannum[a]+rannum[b]+rannum[c]==60){
    printf("rannum[%d] rannum[%d] and rannum[%d] are the array indices that add upto 60.\n",a,b,c);
    printf("%d,%d and %d adds upto 60.\n", rannum[a],rannum[b],rannum[c]);
  }*/
    
  for (int i= 0;i<n;i++){
    for (int j=i+1:j<n;j++){
      for (int k=j+1;k<n;k++){
	if(ranNum[i]+ranNum[j]+ranNum[k]==60){
	  printf("array indices that add upto 60 are: ranNum[%d],ranNum[%d] and ranNum[%d]
\n",i,j,k)
	    printf("arrays that add upto 60 are ranNum[i],ranNum[j] and ranNum[k]")

  
  



  return 0;

}
