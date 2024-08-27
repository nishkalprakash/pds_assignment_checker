#include <stdio.h>

int main(){

int a,b,c,d;
 printf("a: \n b: \n c: \n d: \n");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 
 if(a==b && c!=d && a!=b&&a!=c){
 
 printf("YES");
 }
 if(a==c && b!=d && a!=b &&a!=d){
 
 printf("YES");
 }
 if(a==d && c!=b && a!=b &&a!=c){
 
 printf("YES");
 }
 if(c==b && a!=d && c!=b&&a!=c){
 
 printf("YES");
 }
 if(d==b && a!=c && a!=b&&b!=c){
 
 printf("YES");
 }
 if(c==d&& a!=b && c!=d&&d!=c){
 
 printf("YES");
 }
 
else printf("NO");
getchar();
return 0;

}
