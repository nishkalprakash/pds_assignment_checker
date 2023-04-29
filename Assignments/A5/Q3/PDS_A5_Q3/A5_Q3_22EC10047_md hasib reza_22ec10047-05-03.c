#include<stdio.h>
void swap(int*a,int*b){
int arrange;
arrange=a;
a=b;
b=arrange;
printf("(%d,%d)",a,b);
}




int main(){
int p,q;
printf("ENTER THE INTEGERS :");
scanf("%d%d",&p,&q);
swap(p,q);
return 0;
}