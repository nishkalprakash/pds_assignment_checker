#include<stdio.h>
int main(){
   char Haystack[100],Needle[100];
   int n,m;// size of haystack and needle
   int a=0;
   printf("\n"); 
   
   for (int i=0;i<=n,++i){
     scanf("%c",Haystack[i]);}
     
   for (int i=0;i<=m,++i){
     scanf("%c",Needle[i]);}
     
   for(int i=0;i<n;++i){
       
       for(int j=i;j<i+m;++j){
         if (Haystack[j]==Needle[j-i]) continue;
         else break;}
       a=a+1  }  
  return 0;       
   }


