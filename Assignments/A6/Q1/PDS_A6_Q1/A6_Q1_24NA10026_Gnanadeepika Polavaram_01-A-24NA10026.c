#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

#define N 7
#define A 7
#define B 7

int main(){
float Filter[N],y,m,h,l;
int Bin_A[A],Bin_B[B],x,k,count=0,i,j;
srand(27);



for(i=0;i<N;i++){
 
 x = rand()%100+1;
 
 
 
 for(k=1;k<=x;k++){

m=pow(-1,k+1)*k*k/(k+k+1);

}

y=m+cos(x/2);

Filter[i]=y;


}

printf("Filter: \n");


for(i=0;i<N;i++){

printf("%f\n",Filter[i]); 

}



for(j=0;j<N;j++){

x = rand()%100+1;
 

for(k=1;k<=x;k++){

m=pow(-1,k+1)*k*k/(k+k+1);

}

y=m+cos(x/2);

if(y>Filter[j]){

Bin_A[j]=x;

}

if(y<Filter[j]){

Bin_B[j]=x;

}

}







printf(" \n Bin_A: \n");

for(j=0;j<N;j++){
printf("%d\n",Bin_A[j]);
}

printf(" \n Bin_B: \n");


for(j=0;j<N;j++){
printf("%d\n",Bin_B[j]);
}














getchar();
return 0;














}
