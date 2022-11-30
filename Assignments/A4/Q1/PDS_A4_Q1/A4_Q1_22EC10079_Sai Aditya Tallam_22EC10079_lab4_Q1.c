   #include<stdio.h> //header file
   int main(){
   int n,i;
   printf("enter any integer\n"); 
   scanf("%d",&n); //reading an integer from keyboard
   for(i=1;i<=n;i++){
   if (n%i==0){        //printing only integers
   printf("%2d",n/i);}}
   return 0;
   }
