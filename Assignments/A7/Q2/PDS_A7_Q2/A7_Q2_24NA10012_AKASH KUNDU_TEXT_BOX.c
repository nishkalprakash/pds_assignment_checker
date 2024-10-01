//24NA10012
//Akash Kundu
//program to verify whether a pair of numbers are co-prime
 #include<stdio.h>

int gcd (int a, int b) //function to get gcd of pair
{ int temp;
 if (a > b) {
  temp = a; a = b; b = temp;
  }
 while ((b % a) != 0) {
  temp = b % a;
  b = a;
  a = temp;
  }
 return a;
 } 

void CoPrime(int a, int b) //function to check if a pair is co-prime
{ if (gcd(a,b)==1)
 { 
  printf("%d and %d are Co-Prime\n",a,b);
  }
 }
 
void pair(int a[]) //function to check all pairs of the array
{ int ai,aj;
 for (int i=0; i<4; i++){
  for (int j=i+1; j<5; j++){
   ai=a[i];
   aj=a[j];
   CoPrime(ai,aj);
   }
  }
 }
  
int main()
{ int arr[5];
 int tru=0;
 for (int j=0; j<25; j++) scanf ("%d", &arr[j]);
 pair(arr);
 if (tru==0) printf("No Co-Prime found"); 
 return 0;
 }