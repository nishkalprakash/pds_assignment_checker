/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
OS: Windows 10
Package: CODEBLOCKS
Assignment Class: 3
Assignment: 1c
*/
#include<stdio.h>
#include<math.h>

int main(){
    int m,dayno,k,n;
    float n1,f;
    printf("Enter the number of machines: ");
    scanf("%d",&m);
    printf("\nEnter the day number (1-7): ");
    scanf("%d",&dayno);
    switch(dayno){
        case 1:{
            n1=m;
            n=(int)n1;
            printf("\nNumber of manufactured cars= %d",n);
            break;

        }
        case 2:{
            n1=(m+(0.5*m)+(0.25*m));
            if(n1-(int)n1>=0.5){
                n=ceil(n1);
            }
            else if(n1-(int)n1<0.5){
                n=floor(n1);
            }
            printf("\nNumber of manufactured cars= %d",n);
            break;

        }
        case 3:{
                printf("\nEnter no. of machines under inspection: ");
                scanf("%d", &k);
                n1=((m-k)+((m-k)/2.0)+((m-k)/4.0));
                if(n1-(int)n1>=0.5){
                    n=ceil(n1);
            }
                else if(n1-(int)n1<0.5){
                    n=floor(n1);
            }
            printf("\nNumber of manufactured cars= %d",n);
            break;
        }
        case 4:{
                printf("\nEnter boosting fraction: ");
                scanf("%f",&f);
                n1=(m+(m*f));
                if(n1-(int)n1>=0.5){
                    n=ceil(n1);
            }
                else if(n1-(int)n1<0.5){
                    n=floor(n1);
            }
            printf("\nNumber of manufactured cars= %d",n);
            break;

        }
        case 5:{
                 printf("\nEnter boosting fraction: ");
                scanf("%f",&f);
                n1=(m+(m*f));
                if(n1-(int)n1>=0.5){
                    n=ceil(n1);
            }
                else if(n1-(int)n1<0.5){
                    n=floor(n1);
            }
            printf("\nNumber of manufactured cars= %d",n);
            break;


        }
        case 6:{
                printf("\nEnter no. of machines under inspection: ");
                scanf("%d", &k);
                n1=((m-k)+((m-k)/2.0)+((m-k)/4.0));
                if(n1-(int)n1>=0.5){
                    n=ceil(n1);
            }
                else if(n1-(int)n1<0.5){
                    n=floor(n1);
            }
            printf("\nNumber of manufactured cars= %d",n);
            break;

        }
        case 7:{
                 printf("\nEnter boosting fraction: ");
                scanf("%f",&f);
                n1=(m+(m*f));
                if(n1-(int)n1>=0.5){
                    n=ceil(n1);
            }
                else if(n1-(int)n1<0.5){
                    n=floor(n1);
            }
            printf("\nNumber of manufactured cars= %d",n);
            break;


        }
    }

 return 0;
}

