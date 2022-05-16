/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include<stdio.h>

int liner_search(int l[],int key,int n){
 int found=-1;
 for(int i=0;i<n;i++) if (l[i] == key) {found=1;return i;}
 if (found == -1) return -1;
}
int bin_search(int l[],int key,int n){
 int lo=0,mid=n/2,hi=n,temp,found=0;
 if (key == l[mid]){
    found=1;
    return mid;}
   else{
    while (key < l[mid]){
     hi=mid-1;
     lo=0;
     mid=(lo+hi)/2;
     if (key == l[mid]){
    found=1;
    return mid;}
    if (hi < lo) return -1;
    }
     while (key > l[mid]){
     hi=n;
     lo=mid+1;
     mid=(lo+hi)/2;
     if (key == l[mid]){
    found=1;
    return mid;}
    if (hi < lo) return -1;
    }
   }
 }



int main(){
 int i,j,k,l[20],n,x,opt;
 printf("enter no of elements");
 scanf("%d",&n);
 printf("\nenter the elements in increasing order");

 for(i=0;i<n;i++) scanf("%d",&l[i]);
 //for( k=0;k<n;k++) printf("%d",l[k]);
 //for(j=1;j<=n;j++) {if (l[j] <= l[j-1]) {printf("Incorrect order. terminating!!");return 0;}}
 printf("Enter key");
 scanf("%d",&x);
 while (1){
 printf("Enter 1 for linear search,2 for binary search");
 scanf("%d",&opt);
 if (opt ==1) {printf("doing linear search");printf("\nElement %d has been found at index %d",x,liner_search(l,x,n)); break;}
  else {if(opt==2) {printf("\ndoing binary search");printf("\nElement %d has been found at index %d",x,bin_search(l,x,n)); break; }
          else {printf("enter only 1 or 2"); }}}
}
