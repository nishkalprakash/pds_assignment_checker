#include <stdio.h>
int main(){
int a,b;
int n=0;
printf("Enter two numbers:\n");
scanf("%d%d", &a, &b);
int t1=a, t2=b, c1=0, c2=0;
if(t1<0) t1=-t1;
if(t2<0) t2=-t2;


if(t1>0){
    c1++;
    t1=t1/10;
}
if(t1>0){
    c1++;
    t1=t1/10;
}
if(t1>0){
    c1++;
    t1=t1/10;
}
if(t2>0){
    c2++;
    t2=t2/10;
}
if(t2>0){
    c2++;
    t2=t2/10;
}
if(t2>0){
    c2++;
    t2=t2/10;
}
//printf("c1=%d, c2=%d", c1,c2);

if(c1!=c2){
    printf("Wrong Input\n");
    return 0;
}

int temp=a;
if(a<0)
    a=-a;
n=((a%10)*100)+(((a/10)%10)*10)+(a/100);

if(temp<0) n=-n;

if((a>=-999 && a<= 999) && (b>=-999 && b<=999)){
  if(n==b)
  printf("Perfect pair\n");
  else
  printf("Not a Perfect pair\n");
}
else printf("Wrong Input");

  return 0;

}



