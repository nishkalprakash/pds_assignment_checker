#include<stdio.h>
#include<math.h>
#define N 100;

int main(){
int k[100],n,i;
scanf("%d",&n);
printf("ENTER THE INTEGERS :\n");

for(i=0;i<n;i++){
    scanf("%d",&k[i]);
}
for(i=0;i<n;i++){
    if(k[i]<0){
        printf("%d",k[i]);
        printf(" ");
    }
}
for(i=0;i<n;i++){
    if(k[i]==0){
        printf("%d",k[i]);
        printf(" ");
    }
}
for(i=0;i<n;i++){
    if(k[i]>0){
        printf("%d",k[i]);
        printf(" ");
    }
}

return 0;




}
