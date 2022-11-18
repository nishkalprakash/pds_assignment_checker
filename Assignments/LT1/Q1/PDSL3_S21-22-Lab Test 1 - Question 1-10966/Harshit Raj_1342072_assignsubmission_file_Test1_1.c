/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
int main() {
float m, house, life, medical, y;
printf("enter your monthly income: \n");
scanf("%f", &m);

printf("enter worth of house loan if taken any: \n");
scanf("%f", &house);

printf("enter worth of life insurance if taken any: \n");
scanf("%f", &life);

printf("enter worth of medical insurance if taken any: \n");
scanf("%f", &medical);

y=12*m;

if(y<=1000000){
    if(y<=250000){
        printf("total tax=0");}
    else if(y>=250001 && y<=500000){
        printf("total tax=%f", (5*y)/100);}
    else if(y>=500001 && y<=750000){
        printf("total tax=%f", 12500+(y-500000)/10);}
    else if(y>=750001 && y<=1000000){
        printf("total tax=%f", 37500+(15/100)*(y-750000));}
    else if(y>=1000001 && y<=1250000){
        printf("total tax=%f", 75000+(20/100)*(y-1000000));}
    else if(y>=1250001 && y<=1500000){
        printf("total tax=%f", 125000+(25/100)*(y-1250000));}
    else if(y>=1500000){
        printf("total tax=%f", 187500+(30/100)*(y-1500000));}
}

else if(y>1000000){
    if(house<=250000 && life<=150000 && medical<=50000)
        y=y-(house+life+medical);
    if(house<=250000 && life<=150000)
            y=y-(house+life);
    if(medical<=50000 && life<=150000)
            y=y-(medical+life);
    if(house<=250000 && medical<=50000)
            y=y-(house+medical);
    if(house<=250000)
        y=y-house;
    if(life<=150000)
        y=y-life;
    if(medical<=50000)
        y=y-medical;

           if(y<=250000){
        printf("total tax=0");}
    else if(y>=250001 && y<=500000){
        printf("total tax=%f", (5*y)/100);}
    else if(y>=500001 && y<=750000){
        printf("total tax=%f", 12500+(y-500000)/10);}
    else if(y>=750001 && y<=1000000){
        printf("total tax=%f", 37500+(15/100)*(y-750000));}
    else if(y>=1000001 && y<=1250000){
        printf("total tax=%f", 75000+(20/100)*(y-1000000));}
    else if(y>=1250001 && y<=1500000){
        printf("total tax=%f", 125000+(25/100)*(y-1250000));}
    else if(y>1500000){
        printf("total tax=%f", 187500+(30/100)*(y-1500000));}


}












return 0;
}

