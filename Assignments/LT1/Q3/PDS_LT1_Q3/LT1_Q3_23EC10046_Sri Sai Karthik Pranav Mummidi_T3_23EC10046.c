//roll no= 23EC10046
//name= mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int s,n,k=1;
  printf("enter scale factor:");
  scanf("%d",&s);
  printf("enter number of lines:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      if(k>(3+s))
	k=1;
      printf("%d",k);
      k++;}
    printf("\n");
  }
  return 0;
}
      
  
