#include<stdio.h>


int power(int x,int n){   

int i=1,p,z;

for(i=1;i<=n;i++){
p = p*x;
}

z = p;


return z;

}


int fact(int n){

int f,i,y;

for(f=1;f<=n;f++){
f=f*i;
}

return f;

}


int main(){

int x,n,j;
float sum=1;
int p;



printf("Enter x and n:");
scanf("%d",&x);

scanf("%d",&n);



for(j=1;j<=n;j++){
sum = sum + power(x,j)/fact(j);
}



printf("\n Sum=%f",sum);



return 0;


}
