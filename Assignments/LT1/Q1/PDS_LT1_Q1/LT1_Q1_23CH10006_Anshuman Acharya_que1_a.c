// Name - Anshuman Acharya
// Roll No. - 23CH10006
#include<stdio.h>
#include<math.h>

int main(){

 int n, m, i = 3, rem, sum = 0;
  printf("Enter the number: \n");
  scanf("%d", &n);

  m = n;

  while(m){
    int store = pow(10, i);         // Taking first the largest power according to the question
    rem = m / store;
    m = m % store;
    i--;                            // Reducing the power of 10
   
    if(rem > 0){
    printf("%d",rem + 1);
    }
    
  }
  // Part(a) solved..

  printf("\n\n");

  i = 3;
  int rem1;

  int m1 = n;

  while(m1){
    int store = pow(10, i);         // Taking first the largest power according to the question
    rem1 = m1 / store;
    m1 = m1 % store;
    i--;                            // Reducing the power of 10

    if(rem1 != 0){
      sum += (rem1 + 1);
    }
    
    if(rem1 > 0){
    printf("%d",rem1 + 1);
    }
    
  }

   if((sum) < 10){
      printf("0%d", sum);
    }
  if((sum) >= 10){
      printf("%d", sum);
    }
  // Part(b) solved..

  printf("\n\n");

   int  m2, rem2;
   i = 3;
   sum = 0;

  m2 = n;

  while(m2){
    int store = pow(10, i);         // Taking first the largest power according to the question
    rem2 = m2 / store;
    m2 = m2 % store;
    i--;                            // Reducing the power of 10
   
    if(rem2 > 0){
    printf("%d0",rem2 + 1);
    sum += (rem2 + 1);
    }
    
  }

  if((sum) < 10){
      printf("00%d0", sum);
    }
  if((sum) >= 10){
      printf("%d", sum);
      int store1 = sum;
      while(store1){                      // Again separating the digits if sum exceeds 10
    int j = 1;
    int store2 = pow(10, j);
    int ans = store1 / store2;
    store1 = store1 % store2;
    j--;
    
    printf("%d0", ans);
      }
    }

  return 0;
}
