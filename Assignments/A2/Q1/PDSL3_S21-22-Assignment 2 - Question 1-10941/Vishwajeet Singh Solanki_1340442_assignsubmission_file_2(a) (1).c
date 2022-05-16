/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:2(a)
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a[100],z;
    int i,k;
    printf("Enter the value of z,k:");
    scanf("%f %d",&z,&k);
    a[0]=z;
    for(i=1;i<24;i++){
                a[i]=a[i-1]-sqrt(a[i-1]);
            if(a[i]<0){
                a[i]=-a[i];
            }
          /* if(a[i]=a[i-1]){
                a[i]=a[i-1]-(sqrt((a[i-1]-(1/k))*(a[i-1]-(1/k))));
            }*/
            printf("%.5f,%d\n",a[i],i);
            }
  return 0;  }



