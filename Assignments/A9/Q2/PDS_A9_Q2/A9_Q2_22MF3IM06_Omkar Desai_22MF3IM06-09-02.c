/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3IM06
q. no-01
description- operations on complex number  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>



typedef struct{

int *element;

int dim;


}vector;



vector readvector(vector v1){



    printf("ENter the element of v1 vector\n");

    for(int i=0;i<v1.dim;i++){


    scanf("%d",&v1.element[i]);

    }


    return v1;





}


int identity(vector v1,vector v2){
int i;




 for(i=0;i<v1.dim-1;i++){

         if(v2.element[i]!=0){
        if((v1.element[i]/v2.element[i])!=(v1.element[i+1]/v2.element[i+1])){

            break;

        }
    }

    if(v2.element[i]==0){

        if(v1.element[i]!=0){

            return 0;
        }
    }
 }

    if(i==v1.dim-1){


        return 1;
    }
    else {
        return 0;
    }

}




int main(){

    vector v1,v2;

    int n1,n2;
    int sum=0;
    int c;



    printf("ENter  the dimensions of v1 nad v2 vector\n");
    scanf("%d%d",&n1,&n2);


    v1.dim=n1;
    v2.dim=n2;

    v1.element=(int *)malloc(n1*sizeof(int));
    v2.element=(int *)malloc(n2*sizeof(int));





    v1=readvector(v1);

  /*  for(int i=0;i<v1.dim;i++){


        printf("%d",v1.element[i]);
    } */




    v2=readvector(v2);


    for(int i=0;i<v1.dim;i++){


        sum=sum+v1.element[i]*v2.element[i];
    }


    if(sum==0){

        printf("THE VECTORS ARE ORTHOGONAL");


    }

   c=identity(v1,v2);
   if(c==1){

    printf("THE VECTOR ARE SIMILER\n");
   }



   if(c!=1 && sum!=0){
    printf("THE VECOR ARE NOR ORTHOGONAL NOITHER SIMILAR\n");
   }





















return 0;
}



