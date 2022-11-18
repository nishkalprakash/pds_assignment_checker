/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>

  void arrange(int *x,int *y,int *z);

  int main(){
      int a,b,c;
      printf("Enter 3 integers:");
      scanf("%d%d%d",&a,&b,&c);
      printf("\nBefore function call...\n\n");
      printf("\n\nThe address of a,b,c is:\n");
      printf("&a = %p\n&b = %p\n&c = %p",&a,&b,&c);
      printf("\n\nThe values of a,b,c is:\n");
      printf("a = %d\nb = %d\nc = %d",a,b,c);
      arrange(&a,&b,&c);
      printf("\n\n\nAfter function call...\n\n");
      printf("\nThe address of a,b,c is:\n");
      printf("&a = %p\n&b = %p\n&c = %p",&a,&b,&c);
      printf("\n\nThe values of a,b,c is:\n");
      printf("a = %d\nb = %d\nc = %d",a,b,c);
      return 0;
  }

  void arrange(int *x,int *y,int *z){
      //will assign small mid large values and sort
      int s,m,l;
      //sorting
      if(*x < *y && *x < *z){
          s = *x;
          if(*y < *z){
              m = *y; l = *z;
          }
          else {
              m = *z; l = *y;
          }
      }else if(*y < *x && *y < *z){
          s = *y;
          if(*x < *z){
              m = *x;
              l = *z;
          }
          else{
              m = *z;
              l = *x;
          }
      }else {
          s = *z;
          if(*x < *y){
              m = *x;
              l = *y;
          }
          else{
              m = *y;
              l = *x;
          }
      }
      //assinging sorted values
      *x = s;
      *y = m;
      *z = l;
      return;
  }