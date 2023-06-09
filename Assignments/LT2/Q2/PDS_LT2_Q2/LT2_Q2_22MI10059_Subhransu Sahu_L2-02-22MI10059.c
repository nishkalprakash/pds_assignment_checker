//SUBHRANSU SAHU
//22MI10059
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//int max(int *a, int n)



int main(){
srand(time(0));
int n, p, q, i, z;
scanf("%d", &n);
int numbers[n];
scanf("%d %d",&p,&q);
if(q>=p){
             printf("List ={");

for(i=0;i<n;i++){
z=rand()%(q-p+1)+p;
numbers[i]=z;
printf("%d,", numbers[i]);


}            printf("}");
}                            //generate random numbers
if(n=0){
    printf("Invalid Value of n");}
    else if(p>q){
        printf("p should be less than or equal to q");}
        else if(q>p){
            printf("List ={");
            for(i=0;i<n;i++){
                 z=rand()%(q-p+1)+p;
                printf("%d",z);
            }

            printf("}");
        }

return 0;}