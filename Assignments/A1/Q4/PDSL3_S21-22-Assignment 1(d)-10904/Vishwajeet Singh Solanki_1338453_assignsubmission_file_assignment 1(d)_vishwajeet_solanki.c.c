/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:1(d)
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d,e,f,g,h,i;
     printf("Enter coordinates of first vertex:\n");
    scanf("%f%f",&a,&b);
    printf("Enter coordinates of second vertex:\n");
    scanf("%f%f",&c,&d);
    printf("Enter coordinates of third vertex:\n");
    scanf("%f%f",&e,&f);
    g=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    h=sqrt((a-e)*(a-e)+(b-f)*(b-f));
    i=sqrt((c-e)*(c-e)+(d-f)*(d-f));
    if(g+h<i||g+i<h||h+i<g){
        printf("The triangle is invalid\n");
    }
     else printf("The triangle is valid\n");
     while((g+h>i&&g+i>h&&h+i>g)){
     if(((g*g)+(h*h)>(i*i))&&((g*g)<(h*h)+(i*i))&&((g*g)+(i*i)>(h*h)) ){
        printf("The triangle is acute angled\n");
    }
    else printf("The triangle is obtuse angled\n");
     }
}
