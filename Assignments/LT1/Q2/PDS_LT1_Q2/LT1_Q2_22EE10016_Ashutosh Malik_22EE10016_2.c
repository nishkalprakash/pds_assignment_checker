#include<stdio.h>
#include<math.h>
int main(){
int j, d, c, n, a, i, b = 0;
printf("Write the number of digits you want in the integer");
scanf("%d", &n);
printf("Enter the integer:");
scanf("%d", &a);
if (a%2 != 0){
for (i = 1; i <= n; i++){
    printf("%d , ", a);
    a = a/10;

}
int k;
if (a%2 == 0){
for(j = 1; j <= n; j++){
    k = a / pow(10, j);
    printf("%d, ", k);
    a = a/10;


    }


}

}
}

