/* Name: Ayush chanderia
  Roll no: 22ME10015*/
#include <stdio.h>
int max(int *a,int n){
    if()


}

int main(){
    int n,p,q;
printf("Enter the number of entries to be done");
scanf("%d",&n);
if(n<=0){
    printf("Invalid value of n \n");
    return 0;
}
int numbers[n];

printf("Enter the values of p and q");
scanf("%d %d",&p,&q);
if(p>q){
    printf("p should be less than or equal to q");
    retuen 0;
}
for(int i=0;i<n;i++){
    numbers[i]=rand()%(q-p+1)+p;
}
printf("List = \t");
printf("[");
for(int i=0;i<n;i++){
    printf("%d",numbers[i]);
}
printf("]");



return 0;
}
