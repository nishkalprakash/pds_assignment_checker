/* name shashank sah
roll no 22mi33021
section 2
assignment no 8 */


#include<stdio.h>
#include<math.h>
struct complex{
float real;
float img;

}n1,n2,n3,result;

int main(){

 printf("enter first complex\n");
 printf("enter real part\n");
 scanf("%f",&n1.real);
 printf("enter imaginary part");
 scanf("%f",&n1.img);
 printf("first complex number is %f+i%f\n",n1.real,n1.img);

 printf("enter second complex\n");
 printf("enter real part\n");
 scanf("%f",&n2.real);

 printf("enter imaginary part\n");
 scanf("%f",&n2.img);
 printf("second complex number is %f+i%f\n",n2.real,n2.img);

 printf("enter third complex\n");
 printf("enter real part\n");
 scanf("%f",&n3.real);
 printf("enter imaginary part\n");
 scanf("%f",&n3.img);
 printf("third complex number is %f+i%f\n",n3.real,n3.img);

result.real=n1.real+n2.real ;
result.img=n1.img +n2.img;

printf("addition of two complex number is %d + i%f\n",result.real,result.img);


result.real=n1.real-n2.real;
result.img=n1.img-n2.img;
printf("substraction of three complex number is %d + i%f\n",result.real,result.img);

result.real=n1.real*n2.real;
result.img=n1.img*n2.img;
printf("muliplication of three complex number is %f + i%f\n",result.real,result.img);

result.real=(n1.real)/(n2.real);
result.img=(n1.img)/(n2.img);
printf("divison of two complex number is %f + i%f\n",result.real,result.img);

result.real=abs(n1.real);
result.img=abs(n1.real);
printf("modulus of first complex number is %f + i%f\n",result.real,result.img);


result.real=abs(n2.real);
result.img=abs(n2.real);
printf("modulus of second complex number is %f + i%f\n",result.real,result.img);

result.real=abs(n3.real);
result.img=abs(n3.real);
printf("modulus of third complex number is %f + i%f\n",result.real,result.img);



result.real = ((n1.real -n2.real)/(n1.real + n2.real) * n3.real) + 4.39;
result.img = ((n1.img - n2.img)/(n1.img + n2.img) * n3.real);
printf("the value of the expression %f + i%f\n",result.real,result.img);










return 0;


}


