/* NAME-GAURAV MEENA
ROLL NO-22CE10025
DESCRIPTION-COPRIME
*/
#include<stdio.h>

void Coprime(int a,int b);

int main(){
int A[5];
//void Coprime();

for(int i=0;i<5;i++){

printf("Enter the numbers\n");
scanf("%d",& A[i]);
}


for(int i=0;i<4;i++){
 for(int j=i+1;j<5;j++){
     Coprime(i,j);
}
}
return 0;}





void Coprime(int a,int b){
int c;

c=b - a;






if(c=1){
printf("%d and %d are co prime\n",&c);
}

else{
printf("NO coprime found\n");
}



}











