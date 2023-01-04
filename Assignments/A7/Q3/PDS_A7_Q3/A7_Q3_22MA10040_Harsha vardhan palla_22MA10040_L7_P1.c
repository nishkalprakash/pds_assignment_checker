/*section 14
 Name:P.sri Harsha Vardhan 
 Roll no:22MA10040
 Assignment no:1 
desc: to check the given strings are anagram or not*/
#include<stdio.h>
#include<stdlib.h>
void anagram(char *,int,char *,int);
void anagram(char *a,int m,char *b,int n){
char t;
char l=0;
int k=0;
if(m==n){
  for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
     if(a[i]==b[j]){l++;}}}
 if(l==m) printf("Anagaram");
 else printf(" Not Anagram");}
else printf("Not Anagram");}

int main()
{
char *c1,*c2,d;
int i=1,j=1;
c1=(char *)malloc(i*sizeof(char));
scanf("%c",&c1[i-1]);
while(1){
i++;
c1=realloc(c1,i*sizeof(char));
scanf("%c",&c1[i-1]);
d=getchar();
if(d=='\n') break;}
c2=(char *)malloc(j*sizeof(char));
scanf("%c",&c2[j-1]);
while(1){
j++;
c2=realloc(c2,j*sizeof(char));
scanf("%c",&c2[j-1]);
d=getchar();
if(d=='\n') break;}
anagram(c1,i,c2,j);
printf("\n");
return 0;
}













