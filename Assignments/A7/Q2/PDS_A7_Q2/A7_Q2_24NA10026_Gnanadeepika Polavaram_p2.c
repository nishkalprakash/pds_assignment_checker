#include <stdio.h>

void gcd(int a,int b){

int temp,gcd,per1,per2;

per1 = a;
per2 = b;

while(b%a!=0){

temp = b%a;
b = a;
a = temp;

}

gcd = a;

if(gcd==1) {

printf("%d and %d are coprime\n",per1,per2);



}
}


int gcdf(int a,int b){
int temp,gcd;
while(b%a!=0){

temp = b%a;
b = a;
a = temp;

}

gcd = a;


return gcd;

}



int main(){
int a[10],i,j;

for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
for(j=0;j<i;j++)
gcd(a[j],a[i]);
}


if((gcdf(a[0],a[1]))&&(gcdf(a[0],a[2]))&&(gcdf(a[0],a[3]))&&(gcdf(a[0],a[4]))&&(gcdf(a[1],a[2]))&&(gcdf(a[1],a[3]))&&(gcdf(a[1],a[4]))&&(gcdf(a[2],a[3]))&&(gcdf(a[2],a[4]))&&(gcdf(a[3],a[5]))!=1){


printf("No coprime found\n");}
}


