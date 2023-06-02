/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 9
Question: 2
Description: Vectors*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
int n;
int* p;
}vector;
vector read(vector a){
scanf("%d",&a.n);
a.p=(int*)malloc(a.n*sizeof(int));
int i;
for(i=0;i<a.n;i++){
    scanf("%d",&a.p[i]);
}
return a;
}
int dot(vector a,vector b,int n){
int c=0;
int i;
for(i=0;i<n;i++){
    c+=a.p[i]*b.p[i];
}
return c;
}
int check_similar(vector a,vector b,int n){
float q;
q=(float)a.p[0]/b.p[0];
int flag=0;
int i;
for(i=1;i<n;i++){
    if((a.p[i]==0&&b.p[i]==0)||(float)a.p[i]/b.p[i]==q){
        continue;
    }
    else{
        flag++;                 //if flag is 0 means vectors are similar
        break;
    }
}
return flag;
}
int main(){
vector a,b;

a=read(a);
b=read(b);
if(a.n!=b.n){
    printf("Oops! Vectors are of different dimensions\n");
    return 0;
}
if(dot(a,b,a.n)==0){
    printf("Vectors are orthogonal\n");
    return 0;
    }
if(check_similar(a,b,a.n)==0){
     printf("Identical Vectors\n");
    return 0;
}
printf("Vectors are neither similar nor orthogonal.\n");
return 0;
}
