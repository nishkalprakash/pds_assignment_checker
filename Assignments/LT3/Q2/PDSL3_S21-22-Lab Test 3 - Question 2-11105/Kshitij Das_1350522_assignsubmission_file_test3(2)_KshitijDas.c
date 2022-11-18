/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>
  #include<stdlib.h>

  #define max 100

  typedef struct{
      int terms;
      int cf[terms];
      int ex[terms];
  }poly;

  char exp1[max];
  char exp2[max];
  poly n1,n2;

  int num(char s[max]);
  int cof(char s[max]);

  int main(){
      //taking inputs
      printf("Enter first expression: ");
      scanf("%s",exp1);
      printf("\nEnter second expression: ");
      scanf("%s",exp2);

      //extracting info
      n1.terms = num(exp1);
      n2.terms = num(exp2);
  }

  int num(char s[max]){
      //no. of terms = no. of x in expression + 1
      int i = 0;
      int x = 0;
      while(s[i]!='\0'){
          if(s[i]=='x'){
              x++;
          }
          i++;
      }
      return x + 1;
  }

  int cof(char s[max]){
      int i = 0;int j = 0;int k=0;
      char c[50]; int x

      do{
          do{
              if((s[i]<= 57 && s[i] >= 48)||s[i] == '-'){
                  c[j] = s[i];
                  j++;
              }
          }while(s[i]!='x')

          c[j] == '\0';
          x = atoi(c);

          

          while((s[i] != '+')||(s[i] != '+')){
              i++;
          }

      }while(s[i] != '\0')

  }