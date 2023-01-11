#include<stdio.h>
 int main()
 {
  char s1[50],s2[50];
  scanf("%s",s1);
  scanf("%s",s2);
  int n1=0,n2=0;
  for (int i=0;s1[i]!='\0';i++){
   n1++;
  }
  for (int i=0;s2[i]!='\0';i++){
   n2++;
  }
   int count=0,n=0;
   for(int i=0;i<n2-n1+1;i++){
      for(int j=i,k=0;j<n1+i,k<n1;k++,j++){
        if(s1[k]==s2[j]){
        count++;
        }
       }
        if(count==n1){
       n++;
      }
   }   
     
 printf("%d",n);
 return 0;
 }
