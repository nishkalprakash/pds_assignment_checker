#include <stdio.h>
struct student {
char RollNo[50];
int marks[3];
float total;
} s[5];
int min_loc (int x[ ], int k, int size)
{
int j, pos;
pos = k;
for (j=k+1; j<size; j++)
if (x[j] < x[pos])
pos = j;
return pos;
}
int sel_sort (int x[], int size) {
int k, m, temp;
for (k = 0; k < size-1; k++) {
m = min_loc (x, k, size);
/* Swap x[k], x[m]*/
temp = x[k];
x[k] = x[m];
x[m] = temp;
}
}
int main() {
int i,n,x[10],y[10],l,k=0;
scanf("%d",&n);
for (i = 1; i <= n; ++i) {
scanf("%s", s[i].RollNo);
for (int j=0;j<3;++j){
scanf("%d", &s[i].marks[j]);}
}
for (i = 1; i <= n; ++i) {
        s[i].total=0;
for (int j=0;j<3;++j){
s[i].total+=s[i].marks[j];}
}
for(i=0;i<n;++i){
    x[i]=s[i+1].total;
    y[i]=x[i];
}
sel_sort (x,n);

for(i=0;i<n;++i){
    for(int j=0;j<n;j++){
        if(x[i]==y[j]) l=y[j];
    }printf("RollNo:");
   puts(s[l].RollNo);
   printf("\n");
   printf("marks:");
   for (int k=0;k<3;++k){

    printf("%d ",s[l].marks);
   } printf("\n");
    printf("total");
   printf("%d ",x[i]);
    printf("\n");
}


return 0;
}
