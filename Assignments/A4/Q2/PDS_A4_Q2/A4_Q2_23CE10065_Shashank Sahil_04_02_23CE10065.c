//Lab 4
// Name- Shashank Sahil
// Roll number - 23CE10065
int a ;
int b ;
#include <stdio.h>
#include <stdlib.h>
int main(){
int i;
for (i = 0 ; i< 20 ; i++){
    a = rand()%100;
    if (a > b){
        b = a;
    }
    
    printf("%d\n",a);
    

}
printf ( " largest number is %d ", b);
return 0;



}