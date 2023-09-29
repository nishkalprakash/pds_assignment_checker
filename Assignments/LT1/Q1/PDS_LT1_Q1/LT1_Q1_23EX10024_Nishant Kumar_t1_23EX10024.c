//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
int main(){
  int n,new;
  printf("Enter a positive integer less than 9999\n");
  scanf("%d",&n);
  int m=n;
  int a = n%10;
  n=n/10;
  int b = n%10;
  n=n/10;
  int c=n%10;
  n=n/10;
  int d=n%10;
  if(d>0){
     new = (d+1)*1000 + (c+1)*100 + (b+1)*10 +(a+1);
  }
  else if(c>0){
     new = (c+1)*100 + (b+1)*10 +(a+1);
  }
  else if(b>0){
     new = (b+1)*10 +(a+1);
  }
  else {
    new = a+1;
  }
  printf("The encoded integer is %d\n", new);
  int temp = new;
  int e = new%10;
  new = new/10;
  int f = new %10;
  new = new/10;
  int g = new%10;
  new = new/10;
  int h = new %10;
  new = new/10;
  int sum_encoded = e+f+g+h;
  int checksum = 100*temp +sum_encoded;
  printf("Checksum is %d\n", checksum);

  return 0;
}
  
