// code to check for coprime pairs in an array
// code creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
// This function is used to compute the gcd of 2 numbers//
int gcd (int a, int b){

    int  temp,i;
    
    if (b>a) // this part of the code ensures that a>b. If it is not, these lines swap vales of a and b so that a>b.//
    { 
       temp = a,  a = b, b = temp;
     }
     
       while ( b !=0)
      {
         i = b;
         b = a%b;
         a = i;
       }
       
    return a;
 }

// This function calls gcd function. If the gcd is 1, it prints that they are coprime. It takes integer inputs from the next function, void pair//
 void Coprime (int a, int b){
 
   if (gcd(a,b) == 1)
    printf("\n %d and %d are co-prime", a, b);
    
  
 }

// This function is used t create pairs of numbers in the array. Then for each pair it calls the Coprime function which then calls the gcd function to check and then print if the pair of numbers is co-prime//
void pair (int a[]){

   int i,j;
     
     for (i=0; i<4; i++)
    {
        for(j= i+1; j<5; j++)
       {
            Coprime ( a[i], a[j]);
       }
    }
}

int main(){
    
     int a[5], i;
     
     for (i=0; i<5;i++)
      scanf ("%d", &a[i]);
      
     pair(a);
 }   
      
    
    
