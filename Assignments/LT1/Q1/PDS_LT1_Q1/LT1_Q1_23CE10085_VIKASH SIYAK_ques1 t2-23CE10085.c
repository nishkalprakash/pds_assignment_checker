//rollno<23CE10085>
//NAME<VIKASH SIYAK>
#include<stdio.h>
int n,j,i;

int main(){
  printf("enter an integer");
  scanf("%d",&n);
  for(i=1;i<n;i++){
    printf("%d",i);
    for(j=n;j>=i;j--){
      printf("%d",j);
    }
  }
  return 0;
}
   
  
