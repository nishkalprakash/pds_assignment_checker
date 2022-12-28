/*A6
CODE BY: ABHIRUP KUMAR DAS, 22ME30004*/

#include<stdio.h>
int print_term(int n);

int main(){

printf("How many terms you want?\n");
int k;
scanf("%d",&k);
if(k<0){
printf("Invalid Input\n");
}
else{
int i=1;
while(i<k){
printf("%d\n",print_term(i));
i++;
}
}

return 0;
}


int print_term(int n){
if(n==0){
return 0;
}
else if(n==1){
return 1;
}
else if(n==2){
return 2;
}
else{
int a=3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;

return a;
}
}


