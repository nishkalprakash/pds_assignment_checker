/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 1
*/
#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,x3,y3,a,b,c,t;
printf("We are going to find the type of triangle in this program\n");
printf("Enter the coordinates (x1,y1),(x2,y2) and (x3,y3) in the mentioned order\n");
scanf("%f%f",&x1,&y1);
scanf("%f%f",&x2,&y2);
scanf("%f%f",&x3,&y3);
a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
if (a>b){
    t=a;
    a=b;
    b=t;
}
if (b>c){
    t=c;
    c=b;
    b=t;
}
if (a>b){
    t=a;
    a=b;
    b=t;
}

if (a+b>c){
    printf("The triangle is valid\n");
    }else{
    printf("The triangle is invalid\n");
    }


        if ((c - sqrt(pow(a,2)+pow(b,2)))*(c - sqrt(pow(a,2)+pow(b,2)))<0.001 ){
            printf("It is a right angled triangle\n");
        }else if (c> sqrt(pow(a,2)+pow(b,2))){
            printf("It is an obtuse angled triangle\n");
        }else if (c<sqrt(pow(a,2)+pow(b,2)))
            printf("It is an acute angled triangle\n");
return 0;





}
