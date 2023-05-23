#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int per(int n){         //built a function to save time
int i, s;
for(i=1;i<n;i++)
{
if(n%i==0)
s+=i;}
if(s==n)
return 1;
else return 0;}

int main(){
 srand(time(0));
int *a, p=2, q=1000, n, r, ctr=0;                     //initialised p and q and r as instructed in the question
scanf("%d", &n);
a = (int *)malloc(n * sizeof(int));
printf("%d-number array:", n);
for(r=0;r<n;r++){
    a[r] = p + rand()%q;
    printf("%d,", a[r]);
}

for(r=0;r<n;r++){                                 //used ctr variable to count the number of perfect numbers
    if(per(a[r])==1){
        printf("%d",a[r]);
    ctr++;}}
    if(ctr==0)
        printf("No perfect numbers");
    if(ctr==1)
        printf("is a prefect number");
        if(ctr>1)
        printf("are perfect numbers");

return 0;}



