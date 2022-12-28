# include<stdio.h>
// finding coprime pairs
// defining a function to find gcd of two numbers
int gcd(int m, int n) {
    int sum = 0;
   if(m<=n) {
      for(int i=1; i<=m; i++) {
         if(m%i==0 && n%i==0) {
        sum = i;
    }
    }
    }
   if(n<m) {
      for(int i=1; i<=n; i++) {
         if(m%i==0 && n%i==0) {
        sum = i;
    }
    }
    }
     return sum;
    }
 // executing the  main part
int main(){ 
    int num[5];
    int a, b, ans;
    printf("Enter five numbers : ");
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2] , &num[3] ,&num[4]);
    if(num[0]>0 && num[1]>0 && num[2]>0 && num[3]>0 && num[4]>0) {
    printf("Co-prime pairs are : ");
     for(int j=0; j<5; j++) {
      a = num[j];
      for(int k=j+1; k<5; k++) {
     b = num[k];
     ans = gcd(a,b);
     if(ans == 1)
        printf("(%d, %d)", a, b);
    }
    }
    }
    else  {
       printf("Invaluid inputs : Inputs should be positive numbers");
    }return 0;
    }
