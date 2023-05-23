
/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-01
description-   */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){


int n;
int *a;
int count=0;

printf("How many numbers do you want\n");
scanf("%d",&n);

a=(int*)malloc(n*(sizeof(int)));
srand(time(0));
for(int i=0;i<n;i++){

    a[i]=2+ rand()%1000;
}
for(int i=0;i<n;i++){

    printf("%d\n",a[i]);
}

/*printf("ENtre the numbrer\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}*/ /*  i have included this to verify following code us ringht or wrong*/

for(int i=0;i<n;i++){
 int sum=0;
    for(int j=1;j<a[i];j++){

        if(a[i]%j==0){
            sum=sum+j;
        }
    }
  /*  printf("%d",sum);*/
    if(sum==a[i]){
        printf("THE NUMBER %d is perfect number\n",a[i]);
    }
    else{
        count++;
    }








}
if(count==n){

    printf("There is no perfect number\n");
}

return 0;
}
