//roll_no._23GG10021
//name_kajal_kumari
#include<stdio.h>
int main(){
  int s,n;
  printf(" enter the scale factor:%d",s);
  scanf("%d",&s);
  printf(" enter the number of lines:%d",n);
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      for(int k=1;k<=s+3; k++){
	printf(" %d",k);}
    }
  }return 0;
}
