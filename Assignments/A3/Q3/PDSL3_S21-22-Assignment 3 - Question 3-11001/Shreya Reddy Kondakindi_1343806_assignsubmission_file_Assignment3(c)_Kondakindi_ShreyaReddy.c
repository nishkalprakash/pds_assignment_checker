/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating system:Windows*/
#include<stdio.h>
#include<math.h>
float intersection(int arr1[],int arr2[]);
int main(void){
    int l1[3],l2[3],l3[3],arr[100],i;
    float result;
    printf("enter the coefficients (a,b,c) for three lines\n");
    printf("line 11:");
    for(i=0;i<3;i++){
            scanf("%d",&l1[i]);
    }
     printf("line 12:");
    for(i=0;i<3;i++){
            scanf("%d",&l2[i]);
    }
     printf("line 13:");
    for(i=0;i<3;i++){
            scanf("%d",&l3[i]);
    }

    result=intersection(l1,l2);
    printf("point of intersection of line1 and line2:%d %d\n",result);
    result=intersection(l2,l3);
    printf("point of intersection of line2 and line3:%d %d\n",result);
    result=intersection(l3,l1);
    printf("point of intersection of line3 and line1:%d %d",result);





}
float intersection(int arr1[],int arr2[]){
    float x1=(arr1[1]*arr2[2]-arr2[1]*arr1[2])/(arr1[0]*arr2[1]-arr2[0]*arr1[1]);
    float x2=(arr1[2]*arr2[0]-arr2[2]*arr1[0])/(arr1[0]*arr2[1]-arr2[0]*arr1[1]);
    return x1,x2;
}
