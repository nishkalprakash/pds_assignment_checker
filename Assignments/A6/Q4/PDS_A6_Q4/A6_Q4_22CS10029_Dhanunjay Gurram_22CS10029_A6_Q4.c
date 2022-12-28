/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:6*/
#include <stdio.h>
#include <stdlib.h>
int main(){
   int n1,n2,n,*p1,*p2,i;
   printf("Enter size of A:");
   scanf("%d",&n1);
   p1=(int *)malloc(n1*sizeof(int));
   printf("A = ");
    for (i=0;i<n1;i++){
      printf("%d ",p1[i]);}
   printf("Enter size of B:");
   scanf("%d",&n2);
    printf(", B = ");
    for (i=0;i<n2;i++){
      printf("%d ",p2[i]);}
    printf("Enter your choice:");
    scanf("%d",&n);
    int searchset(int*,int);
    if (n==1) {searchset(p1,n1);}
    else if (n==2) searchset(p2,n2);
    return 0;
}
int searchset(int *p1,int n1)
{
    int num;
    printf("Enter the no to be searched:");
    scanf("%d",&num);
    for (int i=0;i<n1;i++){
        if (p1[i]==num) {printf("%d is present in given set",num); return 0;}}
    printf("%d is not present in the given set",num);
}

