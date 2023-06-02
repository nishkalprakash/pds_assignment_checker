/* name : Pawan yadav
   Roll no: 22NA10030
   Question no : 1*/

#include<stdio.h>
#include<math.h>
struct vector_store{
int dim[100];
}v1,v2;
int i_o_check(int n){
int sum=0;
float m1,m2,m,g,s;
for(int i=0;i<n;i++){
    sum+=(v1.dim[i])*(v2.dim[i]);
}
for(int i=0;i<n;i++){
        m1+=pow((v1.dim[i]),2);}
for(int i=0;i<n;i++){
        m2+=pow((v2.dim[i]),2);}
if(sum<0) sum*=-1;
m1=sqrt(m1);
m2=sqrt(m2);
 m=(int)((m1*m2)+0.1);
printf("%d %f %f %f\n",sum,m,m1,m2);
if((sum/m)==0) return 0;
if((sum/m)==1) return 1;
if((sum/m)!=0&&(sum/m)!=1) return -1;

}
void check(int n){
if(n==0) printf("Vectors are orthogonal");
if(n==1) printf(" Identical Vectors ");
if(n==-1) printf("The Vectors are neither similar nor identical");
}


int main(){
int n1,m,n;
scanf("%d",&n1);
for(int i=0;i<n1;i++){
   scanf("%d",&v1.dim[i]);
}//printf("\n");
//scanf("%d",&m);
for(int i=0;i<n1;i++){
scanf("%d",&v2.dim[i]);
}
check(i_o_check(n1));
return 0;
}
