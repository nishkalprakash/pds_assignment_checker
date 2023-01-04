/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
Assignment No : 7
Description : To print the largest number on appending of input numbers */


#include<stdio.h>


int main() {

      int k , x_[] , pos , size_ ; 

         printf("Enter the numbers in the array /n");
         scanf("%d", &x_[]);
         
         printf("The Array in Ascending order is : %d/n", x_[pos]);  //Input array in ascending order .
           
         for( k = 0 ; k < size_- 1 ; k ++ )
         printf("The Largest appending number in the input array is : x[k] /n");   //Printing the needed appending array .



// Function to make the input array in the form of ascending array.

int min_loc(int x[] , int k ,int size)  {              


        int j , pos ;


        for( j = k + 1 ; j < size ; j++ ) {                             

              if( x[j] < x[pos])pos = j  ;                  //Condition for finding minimum value.


return j;

}

}


// Function to select the position to interchange .

int_sel_loc(int x[] ,int size) {


int k , temp , pos , j ;                            //Defining a temporary variable temp to interchange the value of x[j] and x[pos] .


         for( k = 0 ; k < size - 1 ; k++ ) {

            int min_loc( int x[] , int k , int size);

         

         temp = x[j];

         x[j] = x[pos];                            //INTERCHANGING THE VALUES.

         x[pos] = temp;

}


         return x[pos];

}

 




