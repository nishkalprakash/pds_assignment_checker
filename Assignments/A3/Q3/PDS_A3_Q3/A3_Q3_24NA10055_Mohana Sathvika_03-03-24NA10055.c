#include <stdio.h>
int main(){
  int a,b,c,d;
  printf("enter 4 numbers:");
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  if(a==b){
   if(a==c || a==d || b==c || b==d || c==d){
           printf("NO");}
   else{ printf("YES"); } 
   }     
  else if(a==c){
   if(a==b || a==d || b==c || b==d || c==d) {   
           printf("NO");}
   else{ printf("YES"); }    
   }     
           
  else if(a==d){
   if(a==b|| a==c ||  b==c || b==d || c==d) {
           printf("NO"); }
           }
  else if(b==c){
   if(a==b || b==d || c==d || a==c || a==d) {
      printf("no");}
   else{ printf("yes");}
   }
  else if(b==d){
      if(a==b || b==c || c==d || a==c || a==d) {
      printf("no");}
      else{ printf("yes");}
      }
  else if(c==d){
      if(a==b || b==c || b==d || a==c || a==d) {
      printf("no"); }
      else{ printf("yes");}
      } 
  else if( a!=b && b!=c && c!=d && a!=c && a!=d){
     printf("no");}
  return 0;
  }    
  
  
    
            
