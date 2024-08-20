//Code to create menu for bank management system
// code creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
int main ()

{ 
      int DM, WM, B = 0;
      
      printf ("Initial balance = 0");
      
      printf ("\n Enter the deposited money:");
      scanf ("%d", &DM);
      
      printf ("\n Enter money to be withdrawn:");
      scanf ("%d", &WM);
      
      printf ("\n Deposit: %d", DM);
      
     if (DM >= WM)
   {   
      B = DM - WM;
      
      printf ("\n Withdrew: %d \n Balance: %d", WM, B);
      
     }
      
      else  
    { B = DM;
      
      printf ("\n Withdraw Failed: Balance insufficient\n Balance = %d\n", B);
   }
 
 }
      
