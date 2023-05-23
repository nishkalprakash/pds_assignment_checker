#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char *x[100],*y[100],*z[100];
int n,m;
scanf("%d",&n);
for(int i=0;i<n+5;i++){
    scanf("%s",&x);
}
printf("## After reading X ## \n");
for(int i=0;i<n;i++){
    printf("%s \n",*x[i]);
}
scanf("%d",&m);
for(int i=0;i<m;i++){
    scanf("%s",&y);
}
printf("## After reading Y## \n");
for(int i=0;i<m;i++){
    printf("%s\n",*y[i]);
}
strcpy(*x[100],*z[100]);
strcpy(*y[100],*z[100]);
for(int i=0;i<n;i++){
    printf("%s\n",*z[100]);
}
return 0;
}
