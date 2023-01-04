# include<stdio.h>
int main() {
    int n[10];
    int m;
    printf("Enter 10 numbers : ");
    for (int i=0;i<10; i++) {
   scanf("%d", &n[i]);
    } printf("Enter m : ");
      scanf("%d", &m);
    for(int i=0; i<10; i++) {
     int s = m;
    for(int j=i+1; j<10; j++) { 
     if(n[i]==n[j]) {
       s = s-1;
  }
  } if(s == 1) {
     printf("%d ", n[i]);
  }
  }
   printf("appears %d times", m);
   return 0;
}
