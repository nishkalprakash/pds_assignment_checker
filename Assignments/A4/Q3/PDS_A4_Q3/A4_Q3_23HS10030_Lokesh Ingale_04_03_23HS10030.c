//Name:lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
int main()
{
  int N,M=0,N1;
  printf("Enter the number N \n");
  scanf("%d",&N);
  N1=N;
    while (N!=0){
      M=M*10;
      M=M+N%10;
      N=N/10;
    }
  if (N1==M){
    printf("The Number is a palindrome");
 }
  else printf("The Number is not a palindrome");
  return 0 ;
}
	
      
      
