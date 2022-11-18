/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include<stdio.h>


void largestsum(int a[],int n);


int main(){
 int n,a[20];
 printf("Enter n");
 scanf("%d",&n);
 printf("Enter the nos");
 if (n<=20 && n>0)/*list elements within index*/
    for(int i=0;i<n;i++) //filling the array
        scanf("%d",&a[i]);
 else
    printf("n should be within 1 and 20");

 //for(int i=0;i<n;i++) printf("%d",a[i]); checking the list
 largestsum(a,n);
 return 0;
}

void largestsum(int a[],int n){
 int i,j,sum=0,lsum=0;//sum and largest sum are declared
 for(i=0;i<n;i++){
        sum+=a[i];
        if (sum>lsum) lsum=sum;//sum exceeds largest sum
        if (sum<0)sum=0;//filtering condition
    }
 printf("max is %d\n corresponding sub array\n",lsum);
 //finding sub array corresponding to lmax
 for(int k=0;k<n;k++){
    sum=0;
    for(int m=k;m<n;m++){
        sum+=a[m];
        if (sum==lsum){
            for(int n=k;n<=m;n++){
                printf("%d\t",a[n]);
            }printf("\nor\n");
        }
    }
 }
}
