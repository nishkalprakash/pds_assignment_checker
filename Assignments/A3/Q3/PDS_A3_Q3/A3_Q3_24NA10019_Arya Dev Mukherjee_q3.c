#include<stdio.h>

int main(){
int a,b,c,d,ctr;
ctr=0;

printf("Enter value of a: ");
scanf("%d", &a);

printf("Enter value of b: ");
scanf("%d", &b);

printf("Enter value of c: ");
scanf("%d", &c);

printf("Enter value of d: ");
scanf("%d", &d);

if(a==d){ctr++;}
if(a==b){ctr++;}
if(a==c){ctr++;}
if(b==c){ctr++;}
if(b==d){ctr++;}
if(c==d){ctr++;}

if(ctr==1){
    printf("YES");
    }
    
else{
    printf("NO");
    }
    
return 0;
}        

