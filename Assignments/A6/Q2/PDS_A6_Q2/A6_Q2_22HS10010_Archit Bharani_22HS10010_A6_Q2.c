#include <stdio.h>
int gcd(int x, int y) // returns gcd of x and y
{
int t;
   if (y==0)
return x;
t=y;
y=x;
x=t;
gcd(x,x%y);

}
void coprime(int a, int b) // prints all co-prime numbers in range a, b
{
    if (gcd(a, b) == 1)
        printf("%d and %d are Co-Prime\n", a, b);
}
void pair(float a[])  // Generates pairing and calls coprime() for each pair
{
int k;
 printf("Enter number of integers you entered");
scanf("%d",&k);
    for (int i = 0; i < k; i++)
        for (int j = i + 1; j < 5; j++)
            coprime(a[i], a[j]);
}
int main()
{
    int k;
     float A[500];  
     printf("Enter number of integers");
scanf("%d",&k);                             // A = array of k integers
  printf("Enter numbers : ");
    for (int n = 0; n < k; n++){ // loop for storing input
        scanf("%f", &A[n]);
}for(int l=0;l<k;l++){
if(A[l]- (int)A[l] !=0  || A[l]<0){
printf("Invalid Input\n");
break;
}
}
    for (int i = 0; i < k; i++) 
        for (int j = i + 1; j < k; j++)
            if (gcd(A[i], A[j]) == 1)   // checking if at least one coprime pair exists
            {
                pair(A);
                return 0;   // stopping after calling pair()
            }
    printf("No Co-prime found");    // if program reached here, then no coprime pair exists
    return 0;
}

