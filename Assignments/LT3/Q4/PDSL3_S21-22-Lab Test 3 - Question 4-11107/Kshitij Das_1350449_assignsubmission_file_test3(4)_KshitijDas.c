/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>
  #define max 100

  char str[max];
  char stack[max];
  int top = 0;
  int top1 = 0;

  void push();
  void pop();
  int check();

  int main(void){
      //taking input
      int i;
      printf("Enter Experession: ");
      scanf("%s",str);
      i = check();
      if(i == 0){
          printf("\n\nInvalid Expression.");
      }
      else{
          printf("\n\nValid Expression.");
      }
      return 0;
  }

  void push(){
      stack[top] = str[top1];
      top++;
      top1++;
  }
  void pop(){
      top--;
      top1++;
  }

  int check(){
      //will return 1 if valid and 0 if invalid
      while(str[top1] != '\0'){
        if(( str[top1] == '[')|| (str[top1] == '{')||(str[top1] == '(')){
            push();
        }
        else {  
            if(top == 0)  //if expression starts with invalid value
                return 0; 
            if((str[top1] == ')' && stack[top-1] =='(')||(str[top1] == '}' && stack[top-1] =='{')||(str[top1] == ']' && stack[top-1] =='[')){
                    pop(); //checking for matching complement
                }
            else{
                return 0;//if matching complement were not same then false
        }
      }
      return 1;//if passed all the above test then the expression must be valid
  }
  