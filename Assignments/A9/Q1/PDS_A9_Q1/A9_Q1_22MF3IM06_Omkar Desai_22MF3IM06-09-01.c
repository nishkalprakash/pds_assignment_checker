/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3IM06
q. no-01
description- operations on complex number  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>










int main(){

int n;
int a[80];
int i;




printf("Enter the integer\n");
scanf("%d",&n);






a[0]=0;
a[1]=1;
for(int i=2;i<80;i++){


    a[i]=a[i-1]+a[i-2];
}



if(n>0){
for( i=0;i<80;i++){



    if(a[i]==n){


        printf("%d is a fibonacchi number\n",n);
        break;
    }


    if(a[i]>n){



        break;
    }
}

if((a[i]-n)>=(n-a[i-1])){


    printf("NEAREST FIBONACCHI NUMBER IS %d \n",a[i-1]);
}
if((a[i]-n)<(n-a[i-1])){


    printf("NEAREST FIBONACCHI NUMBER IS %d \n",a[i]);
}

}


if(n<0){

    printf("ENter positive number \n");
}






return 0;
}
