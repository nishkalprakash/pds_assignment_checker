#include<stdio.h>
#include<math.h>
/*NAME - NAIN ADITYA
ROLL 22AG10029 | sec 2
LAB -9 QUESTION 2*/
typedef struct vector{
  float *a
}vector;
int isorthagonal(vector a1,vector a2,int n){
    float sum=0;
    for (int i =0;i<n;i++){
        sum+=a1.a[i]*a2.a[i];
        }if (sum==0) return 1;
        else return 0;}
int isidentical(vector a1,vector a2,int n){
    float mul=a1.a[0]/a2.a[0];
    for (int i =1;i<n;i++){
        float mul1=mul;
        mul=a1.a[i]/a2.a[i];
        if (mul!=mul1)return 0;
        }
    return 1;}
int main(){
    int n1,n2;
    scanf("%d",&n1);
    vector a1;
    a1.a=(float*)malloc(n1*sizeof(float));
    for (int i =0;i<n1;i++){
        scanf("%f",&a1.a[i]);
    }
    scanf("%d",&n2);
    vector a2;
    a2.a=(float*)malloc(n2*sizeof(float));
    for (int i =0;i<n2;i++){
        scanf("%f",&a2.a[i]);
    }
    if (n1!=n2)printf("please input vectors with same number of components ");
    else{
        if (isorthagonal(a1,a2,n1)==1)printf("vectors are orthogonal");
        else if (isidentical(a1,a2,n1)==1)printf("Identical vectors");
        else printf("vectors are neither similar nor orthogonal");}
   return 0;
}
