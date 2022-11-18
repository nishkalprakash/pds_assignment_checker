/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>

int comb(int a[],int temp[],int i,int l,int beg,int end){ //i is index here
 if (i==l){
        for(int j=0;j<l;j++) printf("%d",a[temp[j]]);
        return 0;
 for(int k=beg;k<=end;k++){
    temp[i]=k;
    comb(a,temp,i++,l,k,end);

 }return 0;
}
}
int main(){
 int array[10],l,r=3; //considering 3 elements at a time
 printf("Enter no of elements(<10)\n");
 scanf("%d",&l);
 printf("Enter the nos\n");
 for(int i=0;i<l;i++){
    scanf("%d",&array[i]);
 }
 int temp[4]; //temporary array with one extra spacee
 comb(array,temp,0,l,0,l-1);//start from 1st trial,beginning value=0,end value=l-1
 return 0;
}
