/*name- Mohul Dutta
22EC30035
section 2
question 2*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
int n;
int *a;
}vector;
int main(){
int n1;
scanf("%d",&n1);
vector a,b;
a.n=n1;
a.a=(int *)malloc(sizeof(int)*n1);
for(int i=0;i<n1;i++){
    scanf("%d",&a.a[i]);
}
int n2;
scanf("%d",&n2);
b.n=n2;
b.a=(int *)malloc(sizeof(int)*n2);
for(int i=0;i<n1;i++){
    scanf("%d",&b.a[i]);
}
int p=0;
int f=1;
if(n1==n2){
    for(int i=0;i<n1;i++){
        if(a.a[i]*b.a[i]==0){
            if(a.a[i]!=b.a[i]){
                f=0;
                break;
            }
        }
        else{
            if(i<n1-1){
                if((1.0*a.a[i])/b.a[i]!=(1.0*a.a[i+1])/b.a[i+1])
                {
                    f=0;
                    break;
                }
            }
        }

    }
    for(int i=0;i<n1;i++)
        p=a.a[i]*b.a[i];
    if(f==1)
    printf("Identical Vectors");
    else if(p==0)
        printf("Vectors are Orthogonal");
    else
        printf("The vectors are neither similar nor orthrogonal ");
}
else
    printf("Size of the vectors are not same");
}
