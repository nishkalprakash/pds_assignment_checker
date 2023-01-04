/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:7*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int *a,i=1,m,k,count=0;
char d;
a=(int *)malloc(i*sizeof(int));
scanf("%d",&a[i-1]);
while (1){
   i++;
   a=realloc(a,i*sizeof(int));
   scanf("%d",&a[i-1]);
   d=getchar();
   if (d=='\n') break;}
for (int j=0;j<i;j++){
   k=0;
   for (int l=j+1;l<i;l++){
      if (a[j]>a[l]) {k=-1; count++; break;}}
   if (k==-1) continue;
   else {
      for (int l=0;l<j;l++){
        if (a[j]<a[l]) {count++; break;}}}}
printf("Out of order: %d\n",count);
return 0;
}
