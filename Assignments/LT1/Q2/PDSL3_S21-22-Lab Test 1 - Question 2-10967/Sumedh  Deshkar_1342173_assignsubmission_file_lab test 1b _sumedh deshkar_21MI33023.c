/*
name-sumedh deshkar
roll no.-21MI33023
Section-3
*/


#include<stdio.h>

int main(){

int maxiters;
double epsilon,x[50],fx[50],fdx[50],sum1[50],error[50];
for(int i=0;i<50;i++){
  fx[i]=0;

    }
for(int i=0;i<50;i++){

    fdx[i]=0;
}
for(int i=0;i<50;i++){

    error[i]=0;
}
for(int i=0;i<50;i++){
    x[i]=0;
}
for(int i=0;i<50;i++){

sum1[i];
}

printf("iterations:\n");
scanf("%d",&maxiters);
printf("enter x0 and epsilon:\n");
scanf("%lf%lf",x[0],&epsilon);
printf("iterattion x0 x1   Error");
for(int i=0;i<maxiters|| error[i]<epsilon;i++){
    for(int j=0;j<3;j++){
        sum1[i]=sum1[i]*x[i];

    }
    fx[i]= sum1[i]-25;
    fdx[i] =3*x[i]*x[1];
    x[i+1]=x[i]-(fx[i]/fdx[i]);
    if(x[i]-x[i+1]<0){
       error[i]= x[i+1]-x[i];


    }else{
    error[i]= x[i]-x[i+1];

    }

    printf("\n %d   %0.3f   %0.3f %0.3f", i+1,x[i],x[i+1],error[i]);
    if(error[i]<epsilon){
       printf("\n\nthe square root is %f",x[i]);
    break;
    }
}
   return 0;




}








