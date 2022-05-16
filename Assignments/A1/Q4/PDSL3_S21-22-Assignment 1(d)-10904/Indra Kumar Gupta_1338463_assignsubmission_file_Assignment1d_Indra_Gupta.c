/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 1(d)

#include<stdio.h>
#include<math.h>
int main(){

int a1,a2,b1,b2,c1,c2;
float d1,d2,d3,a,b,c;
printf("Enter the three coordinates: ");
scanf("(%d,%d),(%d,%d),(%d,%d)",&a1,&a2,&b1,&b2,&c1,&c2);
d1= sqrt(((b2-a2)*(b2-a2))+((b1-a1)*(b1-a1)));
d2= sqrt(((c2-b2)*(c2-b2))+((c1-b1)*(c1-b1)));
d3= sqrt(((c2-a2)*(c2-a2))+((c1-a1)*(c1-a1)));
if(((d1+d2)>d3)&&((d3+d2)>d1)&&((d1+d3)>d2)){
    printf("This is a valid triangle\n");
    if((d1>d2)&&(d1>d3)){
        c = d1;
        a=d2;
        b=d3;
    }else if((d2>d1)&&(d2>d3)){
    c = d2;
    a=d1;
        b=d3;
    }else{
        c = d3;
        a=d2;
        b=d1;
    }
    if((c*c)==((b*b)+(a*a))){
        printf("This is a right-angled triangle");
    }else if((c*c)<((b*b)+(a*a))){
    printf("This is a acute-angled triangle");
    }else if((c*c)>((b*b)+(a*a))){
    printf("This is a obtuse-angled triangle");
    }

}else{

printf("This is an invalid triangle");
}
return 0;
}
