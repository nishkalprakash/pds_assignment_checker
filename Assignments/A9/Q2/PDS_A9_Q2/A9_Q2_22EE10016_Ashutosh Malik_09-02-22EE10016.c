#include<stdio.h>
#include<math.h>
typedef struct vector{
    float a[10000];
}v;





int main(){
    v v1;
    v v2;
int n,m;
scanf("%d",&n);
int i;
for (i = 0; i < n; i++){
        scanf("%f",&v1.a[i]);

}
scanf("%d",&m);
for (i = 0; i < m; i++){
        scanf("%f", &v2.a[i]);

}
int j;
float b = 0;
float c = 0;
float d = 0;
for (i = 0; i < n; i++){

        b += v1.a[i]*v2.a[i];
        c += (v1.a[i])*(v1.a[i]);
        d += (v2.a[i])*(v2.a[i]);

if (b == 0){
    printf("They are orthogonal vectors");
}
if((b/(sqrt(c)*sqrt(d))) == 1 || (b/(sqrt(c)*sqrt(d))) == -1){
    printf("They are identical vectors");
}
}
return 0;
}








