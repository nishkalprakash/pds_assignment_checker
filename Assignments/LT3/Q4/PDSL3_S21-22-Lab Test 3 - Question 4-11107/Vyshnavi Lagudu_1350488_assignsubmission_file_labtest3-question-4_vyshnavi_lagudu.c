/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments: taken stack array of size 30, max size of string is 50 and an integer -1 is taken as reference
*/
#include<stdio.h>
#include<string.h>
int top=-1;
char stack[30];
void push(char sym)
{
	stack[++top]=sym;
}
void pop()
{
	if(top==-1){
		        printf("stack is empty");
	           }
	else{
		top--;
	   }
}
int checkpair(char val1,char val2)
{
	return ((val1=='('&&val2==')')||(val1=='{'&&val2=='}')||(val1=='['&&val2==']'));
}
int checkbalance(char expr[],int len)
{
	int i=0;
	for(i=0;i<len;i++){
		if(expr[i]=='('||expr[i]=='{'||expr[i]=='['){
			                                        push(expr[i]);
		                                            }
		else{
			if(top==-1){
				       return 0;
                    }
			else if(checkpair(stack[top],expr[i])){
				                                 pop();
				                                 continue;
			        }
			return 0;
		    }
	}
	return 1;
}
int main()
{
	char exp[50];
	printf("enter the string:");
	scanf("%s",exp);
	printf("\n");
	int len=strlen(exp);
	checkbalance(exp,len)?printf("matched parenthisis"):printf("unmatched parenthisis");
	return 0;
}
