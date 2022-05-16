#include<stdio.h>
#include<math.h>
int main()
{
int i=1;
float z,k,s;
printf("enter value of z- ");
scanf("%f",&z);
printf("enter value of k- ");
scanf("%f",&k);

while(i<=k){
if(z>=0){
    z=z-sqrt(z);
    if(z<0){ z=-z;}
    i++;}
else if(z==z-sqrt(z)){
    s=sqrt(z);
    s = s - (1/k);
    z = z - pow(s,2);
    if(z<0){ z=-z;}
    i++;}
else if(z<0){
    z=-z;
    z=z-sqrt(z);
    if(z<0){ z=-z;}
    i++;}
printf("(%f,%d)\n",z,i);
}
}
