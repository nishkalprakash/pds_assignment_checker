#include<stdio.h>

int main(){
   int n , k= 1;
   printf("Enter the height : ");
   scanf("%d",&n) ;
   for (int i = 1; i<=n ; i++){
        
        for(int j = n-i ; j>= 0 ; j--){
           printf(" ");
        }
        while(k <= 2*i) {
            printf("%d",k);
            k++ ;
        };
        printf("\n");
   }
}
