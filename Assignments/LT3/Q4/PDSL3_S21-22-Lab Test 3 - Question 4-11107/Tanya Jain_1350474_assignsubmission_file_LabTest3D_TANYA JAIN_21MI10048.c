/*
Tanya jain 
21MI10048
PDS LAB TEST 3
Question : 4
*/

#include <stdio.h>
#include <string.h>
char st[20];//
int top=-1;// defining variable top and assigning value of -1
void psh(char);
char pop();
int main()
{
char a[20],t;//declaring string aof sufficiecnt length
int i,f=1;
printf("Enter the String\n");//Asking user to Enter input
scanf("%s",a);//scanning and storing it in string a
for(i=0;i<strlen(a);i++)// using for loop, and using string length function to operate over all elements of string
{
if(a[i]=='('||a[i]=='{'||a[i]=='[')// checking for opening brackets
psh(a[i]);// putting the element in psh function
if(a[i]==')'||a[i]=='}'||a[i]==']')// checking for closing brackets

{
if(top==-1)
f=0;
else
{t=pop();
if(a[i]==')'&&(t=='['||t=='{'))//checking for closing bracket and upcoming opening bracket
f=0;//assigning value f to zero, means parenthesis matched till now
if(a[i]=='}'&&(t=='('||t=='['))//checking for closing bracket and upcoming opening bracket
f=0;//assigning value f to zero, means parenthesis matched till now
if(a[i]==']'&&(t=='{'||t=='('))//checking for closing bracket and upcoming opening bracket
f=0;//assigning value f to zero, means parenthesis matched till now
}
}
}
if(top>=0)
f=0;
if(f==0)
printf("Unmatched parenthesis\n");// giving output on basis of value of f
else// if f=0 parenthesis is complete
printf("Matched parenthesis\n");//if f=!0 parenthesis is complete
return 0;
}
void psh(char a)//function psh
{
st[++top]=a;// increase value of top and assigning it to a
}
char pop()//function pop
{
return st[top--];// decrease value of top and return it
}