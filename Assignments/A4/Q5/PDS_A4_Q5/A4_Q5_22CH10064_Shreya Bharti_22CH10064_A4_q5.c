#include <stdio.h>

int main(){

int p,q,r,s,x;			//declaration of variables
float px,pa,pb,pc,m,c;
double a,b;

printf("Entered coefficients must be in the range of [-5,5].\n");

printf("Enter coefficients of x^0: ");
scanf("%d",&p);
printf("Enter coefficients of x^1: ");
scanf("%d",&q);
printf("Enter coefficients of x^2: ");
scanf("%d",&r);
printf("Enter coefficients of x^3: ");
scanf("%d",&s);


while(1){
printf("Enter value of a and b: ");
scanf("%lf %lf",&a,&b);


if((a*a*a*s+a*a*r+a*q+p)*(b*b*b*s+b*b*r+b*q+p)<0 && a<b){
	break;
}

}


while(1){

pa= a*a*a*s+a*a*r+a*q+p ;
pb= b*b*b*s+b*b*r+b*q+p ;

m=(pb-pa)/(b-a);
c= pa - (pb/m);
pc= c*c*c*p+c*c*q+c*r+s ;


if (pc<0.001 && pc>-0.001){
	printf("Root of the polynomial: %f",c);
}

else if((pa*pc>0)){
	a=c;

}
else {
	b=c;

}
}

return 0;
}




