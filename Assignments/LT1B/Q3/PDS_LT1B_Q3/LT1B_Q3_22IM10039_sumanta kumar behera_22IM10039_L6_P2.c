# include<stdio.h>
# include<math.h>

int main() {
    int n;
    int a, b;
    printf("Enter the number on numbers you want to work on: "); // calculating the largest number
    scanf("%d", &n);
    int num[n+1];
    int i;
    for(i=1; i<=n; i++) { 
    printf("Enter the %dth number: ", i);    // do it 
    scanf("%d", &num[i]);
     }
    if(n>=2) {
    int j, k;
    for(j=1; j<=n; j++) {
    for(k=j+1; k<=n; k++) {
     if(num[j] > num[k]) {
   
         a = num[j];
         b = num[k];
}    else if(num[j] < num[k]) {

         b = num[j];
         a = num[k]; 
}
}
 }   


       printf("The largest number is: %d\n", a);
       printf("The second largest number is: %d\n", b);

}   else{
      printf("The largest number is: %d", num[1]);
      printf("The second largest number : Value not entered yet"); 
}
     return 0;
      }
    
      
