/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>
  void mix(int a,int b,int n,int x);
  int main(){
      int c,d;
      printf("Enter two digit:");
      scanf("%d %d",&c,&d);
      mix(c,d,5,c);
      mix(c,d,5,d);
      return 0;
  }

  void mix(int a,int b,int n,int x){
      if(n == 1){
          if(x % (a+b) != 0){
              printf("\n%d",x);
          }
      }
      else{
          for(int i=0;i<2;i++){
              if(i == 0){
                   mix(a,b,n-1,10*x + a);
              }
              else{
                   mix(a,b,n-1,10*x + b);
              }
          }
      }
      return;
      }
  