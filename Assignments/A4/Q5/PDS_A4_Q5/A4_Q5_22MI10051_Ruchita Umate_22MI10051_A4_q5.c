#include<stdioi.h>
#include<math.h>
int main(){
int p,q,r,s,x;
double a,b;

printf("coefficient must be in range [-5,5]");

prinf("enter coefficient of x^0:");
scanf("%d",&p);
printf("enter coefficient of x^1:");
scanf("%d",&q);
prinf("enter coefficient of x^2:");
scanf("%d",&r);
prinf("enter coefficient of x^3:");
scanf("%d",&s);
printf("Enter value of a and b:");
scanf("%lf %lf",&a ,&b);

px=pow(x,3)*p+pow(x,2)*q+pow(x,1)*r+s;
pa=pow(a,3)*p+pow(a,2)*q+pow(a,1)*r+s;
pb=pow(b,3)*p+pow(b,2)*q+pow(b,1)*r+s;

m=(pb-pa)/(b-a);
c=pa- (pb/m);
pc=pow(c,3)*p+pow(c,2)*q+pow(c,1)*r+s;

if (pc<0.001){
printf("roots of the polynomial :%d",c);
}
else if ((pa>0)||(pa<0 && pc<0)){
pa=pc;
}
else{
pb=pc;
}
}



