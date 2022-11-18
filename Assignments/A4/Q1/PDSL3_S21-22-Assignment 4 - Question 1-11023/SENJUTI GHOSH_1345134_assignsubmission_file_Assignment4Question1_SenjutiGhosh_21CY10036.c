/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
/*temp is the array which stores the temporary l member arrays,a and l are defined in the question,start and stop are the first and last indices of the array a*/
/*the combination function uses recursion to find all combinations of l elements when repetition is allowed*/
void combination(int temp[],int a[],int index,int l,int start,int stop){
                int i;
                /*base condition:when l is index then elements of temp array are printed*/
                 if (index==l){
                     for (i=0;i<l;i++){
                         printf("%d",a[temp[i]]);
                     }
                     printf("\n");
                     return;

                 }
                 /*recursive call used otherwise*/
                 for (i=0;i<=stop;i++){
                      temp[index]=i;
                      combination(temp,a,index+1,l,i,stop);
                 }
                 return;
}
/*this function calls the previous recursive function to print the required combinations*/
void maincombination( int a[],int n,int l){
     int temp[l+1];
     combination(temp,a,0,l,0,n-1);
}
/*Here the main function begins.Array a is entered with user input size of n.L is also received*/
int main(){
int a[100];
int k,n,l;
printf("Enter size of array");
scanf("%d",&n);
for (k=0;k<n;k++){
     scanf("%d",&a[k]);
}
printf("Enter l");
scanf("%d",&l);
maincombination(a,n,l);
return 0;
}
