/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-1
description- Print the integers with significant digits based on whether the integer is evev or odd */

#include<stdio.h>
#include<math.h>

int main()
{
    int n,a1,a2,a3,u,t,h,d,p,ten,f,v,w,x,y;
    printf("Enter the integer\n");
    scanf("%d",&n);
    a1=n;
    a2=n;
    a3=n;

    if(n<0){
        p=(-1)*n;
        d=0;

         while(p>0){

        p=p/10;
        d++;

    }
   // printf("%d",d);
    }

    if(n>0){
            d=0;
        while(n>0){


        n=n/10;
        d++;
        }
      //  printf(("%d"),d);
    }



    if(a1%2==0){
            if(a1<0){
                a1=a1*(-1);
            }
            while(a1>0){
        u=a1/1;
        printf("%d,",u);

        d--;
        ten=pow(10,d);

         a1=a1%ten;



        }
    }




        if(a2%2==1){
            if(a2<0){
                a2=a2*(-1);
            }
         f=d-1;
            while(f>=0){

        ten=pow(10,f);
       // printf("%d",ten);
        u=a2/ten;
        printf("%d,",u);
        f--;

        //a2=a2%ten;

        }
        }





    return 0;
}
