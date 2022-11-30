/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 5
DESCRIPTION: to find an approximate root of cubic polynomial
*/
#include<stdio.h>
#include<math.h>
int main()
{

// the cubic polynomial is p(x)
double g,d,e,f;
double a,b,c,pa,pb,pc;// declaring the double values
printf("enter value of coefficient of x^0\n");
scanf("%lf",&g);
printf("enter value of coefficient of x^1\n");
scanf("%lf",&d);
printf("enter value of coefficient of x^2\n");
scanf("%lf",&e);
printf("enter value of coefficient of x^3\n");
scanf("%lf",&f);
printf("enter the value  of a and b repectively\n"); //giving inputs
scanf("%lf %lf",&a,&b);


pa=(g+d*a+e*a*a+f*a*a*a);
pb=(g+d*b+e*b*b+f*b*b*b);
if((b>a)&&(pa*pb)<0){
c=b+((a-b)*pb)/(pb-pa);
pc=(g+d*c+e*c*c+f*c*c*c); // using if else

do{   // using loop
if(pa*pc>0){   
c=a;
}
else{
c=b;
}
}while((pc<0.001)||(pc>-0.001));
printf("the root of the polynomial is %lf\n",c); //printing the root
}
else {
printf("give b>a");

}
return 0;

}



