/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:7*/
#include <stdio.h>
#include <stdlib.h>
void anagram(char *,int,char *,int);
void anagram(char *a,int m,char *b,int n){
   char t;
   int l=0;
   int k=0;
   if (m==n) {
     for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (a[i]==b[j]) {l++;}}}
     if (l==m) printf("Anagram");
     else printf("NOT Anagram");}
  else printf("NOT Anagram");}

int main()
{
   char *c1,*c2,d;
   int i=1,j=1;
   c1=(char *)malloc(i*sizeof(char));
   scanf("%c",&c1[i-1]);
   while (1){
     ++i;
     c1=realloc(c1,i*sizeof(char));
     scanf("%c",&c1[i-1]);
     if (c1[i-1]=='\n') break;}
   c2=(char *)malloc(j*sizeof(char));
   scanf("%c",&c2[j-1]);
   while (1){
     j++;
     c2=realloc(c2,j*sizeof(char));
     scanf("%c",&c2[j-1]);
     if (c2[j-1]=='\n') break;}
   anagram(c1,i,c2,j);
   printf("\n ");
   return 0;}
    
