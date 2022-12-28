#include<stdio.h>

#include<math.h>

int main() {

int rows,x,i,j,k;
printf("enter the number of rows");
scanf("%d" ,&rows);
x= floor(rows/2)+1;

for(i=1;i<=rows;i++){
        for(j=1;j<=abs(x-i);j++){

                printf("");
        }
        for(k=1;k<=rows-2*abs(x-i);k++){
                printf("%d", k);
        }
        printf("/n");
}
return 0;
}
