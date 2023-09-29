//23AE10036
//T.sritan

#include<stdio.h>
int main(){
  int s,n;
  int maxs= s+3;
  int i=1;
  int j=1;
  printf("enter s & n \n");
  scanf("%d %d",&s,&n);

 
  for(int m=1;m<=n;m++){

    while(i<=m){
      printf("%d",j);
      i++;
      j=j+1;
       if(j>maxs){
     j=1;
       }
    }
    i=1;
   
    printf("\n");
  }

  return 0;
}