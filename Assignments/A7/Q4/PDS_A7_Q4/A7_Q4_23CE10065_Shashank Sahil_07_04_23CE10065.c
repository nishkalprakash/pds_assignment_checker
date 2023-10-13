#include<stdio.h>
#include<stdlib.h>
int p ;
int b ;
int j = 0;
int k = 0;
int a[50];
int i =0 ;

int main(){
    start:
    printf( " Enter the number of randoms numbers to be generated");
    scanf("%d",&b);
    if (b > 50){
        printf("limit exceeded!!!!");
        goto start;
    }
for( i = 0 ; i < b ; i++){
    p = rand()%41 + 10;
    a[i] = p;
}

for(  i = 0 ; i < b ; i++){
   printf("a[%d] = %d   ",i , a[i]);

}
printf("\n");
for( i = 0 ; i < b-2 ; i++ ){
    for (j = i + 1 ; j < b-1 ; j++){
        for ( k = j + 1 ; k < b ; k++ ){
            if ( a[i] + a[j] + a[k] == 60){
                printf("a[%d] + a[%d] + a[%d]= 60\n" , i , j , k);
            }

        }
    }
}



}