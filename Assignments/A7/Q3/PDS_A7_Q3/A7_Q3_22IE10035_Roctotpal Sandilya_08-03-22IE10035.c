#include<stdio.h>
#include<string.h>
/*
   sec-2
   Assignment no.- 7
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 2
*/

int main(){
int n,m;
char ch;
scanf("%d", &n);
char **x = (char**)malloc(n*sizeof(char*));
for(int i=0; i<n; i++){
    x[i] = (char*)calloc(100, sizeof(char));
}
for(int i=0; i<n; i++){
    int l=0
    do{
        ch=getchar();
        x[i][l]=ch;
        l++;
    }while(ch!='\n');
    x[i][l+1]='\0';
}
scanf("%d", &m);
char **y = (char**)malloc(m*sizeof(char*));
for(int i=0; i<m; i++){
    y[i] = (char*)calloc(100, sizeof(char));
}
for(int i=0; i<m; i++){
    int l=0
    do{
        ch=getchar();
        y[i][l]=ch;
        l++;
    }while(ch!='\n');
    y[i][l+1]='\0';
}
printf("After Reading X\nPrinting %d names", n);
for(int i=0; i<n; i++){
    printf("%d %s", i, x[i]);
}
printf("After Reading Y\nPrinting %d names", m);
for(int i=0; i<m; i++){
    printf("%d %s", i, y[i]);
}
char **z= (char**)malloc((m+n)*sizeof(char*));
for(int i=0; i<n+m; i++){
    z[i] = (char*)calloc(100, sizeof(char));
}
for(int i=0; i<n; i++) strcpy(z[i],x[i]);
for(int i=0; i<m; i++) strcpy(z[i+n],y[i]);


return 0;
}
