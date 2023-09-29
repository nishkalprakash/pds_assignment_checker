//Test 1.
// Name- Shashank Sahil
// Roll number - 23CE10065

#include <stdio.h>
int s ;
int n ;
int p = 0;
int main(){
    again1:
printf("Enter the scale factor\n");
scanf("%d",&s);
if (s > 6 || s <1){
    printf(" Input out of specified range ,Please re-enter");
    goto again1; ;
}
again :
printf("Enter the number of lines\n");
scanf("%d",&n);
if (n > 10 || n <1){
    printf(" Input out of specified range ,Please re-enter\n");
    goto again ;
}

for ( int i = 1 ; i <= n ; i++){
     for ( int j = 0; j < i ; j++){
        p = p + 1;
        if (p > s+3){
            p = 1;
        }
        printf("%d",p);
     }
     printf("\n");



}

return 0;











}