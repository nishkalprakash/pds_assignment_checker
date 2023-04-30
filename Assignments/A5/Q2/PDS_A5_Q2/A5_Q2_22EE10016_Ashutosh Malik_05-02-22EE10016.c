#include<stdio.h>
int primecheck(int i){                             //Function which could be further used for finding whether a number is prime or not//
int j, c = 0 ;                                     // If c is equal to i-2 then it  is a prime number//
for (j = 1; j < i ; j++){
    if (i%j != 0){
        c+=1;
}


}
return c;
}

int main(){
int x,k,l;
printf("Write the natural number to check for Goldbach's conjecture\n");   //Taking input to check whether your number follows Goldbach's conjecture or not//
scanf("%d", &x);
int q=-1;
if ((x%2 != 0) && (x <= 4)){      //If the input number is even or less than equal to 4 the output is -1//
    printf("-1");
}func_name ( int A[], ... );
... func_name ( int A[100], ... );
... func_name ( int *A, ... );
for (k = 1; k < x ; k++){
    for (l = 1; l < x ; l++){
        if ((primecheck(k) == k-2) && (primecheck(l) == l-2) && (x == (k + l))){
                    printf("%d,%d\n",k,l);
                    q=1;
        break;

        }

    if(q==1)
        break;

}






}

return 0;
}