#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void read(int n, int *v){
    int i;
    v=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
    scanf("%d", v[i]);
    return v;}
}

struct vector{
    int n;
    int *m;
    };
struct vector v1,v2;

int main(){
int j=0,k=0,h,sumv1,sumv2,sumv;
int check;

scanf("%d", &v1.n);
read(v1.n,*v1.m);
printf("\n%d %d %d",v1.m[0],v1.m[1],v1.m[2]);

printf("\n");

scanf("%d", &v2.n);
v2.m=(int*)malloc(v2.n*sizeof(int));
read(v2.n,*v2.m);
printf("\n%d %d %d",v2.m[0],v2.m[1],v2.m[2]);
for(h=0;h<v1.n;h++){
    sumv1+=(v1.m[h]*v1.m[h]);
}
printf("%d",sumv1);


for(h=0;h<v2.n;h++){
    sumv2+=(v2.m[h]*v2.m[h]);
}
printf("\n%d",sumv2);


for(h=0;h<v1.n;h++){
    sumv+=v1.m[h]*v1.m[h];
}
printf("\n%d",sumv);

check==(sumv)/(sqrt(sumv1*sumv2));

if(check==1)
    printf("\nIdentical Vectors");
    if(check==0)
        printf("\nVectors are orthogonal");
    if(check!=0 && check!=1)
        printf("\nTHe vector are neither identical or orthogonal");

return 0;}













