
#include<stdio.h>

void swap1( int p , int q){              // function for swaping two numbers

      int r;

     r = p ;
     p = q ;
     q = r ;
}

void swap( int *p, int *q){

     int t;
     t = *p;                             // swaping using pointers
     *p = *q;
     *q = t;
}


int main(){

    int n, i;

printf("enter the number of integers in array:") ;

scanf("%d", &n) ;
                                                              // storing n integers in an array
int array[n] ;

printf("enter the elements:") ;

for ( i = 0; i < n ; i++){

    scanf("%d", &array[i]);
}


int *x = &array ;
int length , i  ;

void reverse( int *x , int length ){

        int t;
        if (length ==0 || length == 1) return ;
        t = *x;
        *x = *(x + length -1) ;
        *(x + length - 1) = t ;

        reverse ( (x + 1 ), length -2 ) ;

}

return 0;
}
