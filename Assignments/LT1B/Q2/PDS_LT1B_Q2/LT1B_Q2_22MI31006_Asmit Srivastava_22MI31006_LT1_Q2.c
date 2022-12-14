#include<stdio.h>
int main()
{
 int n;
 printf("enter integer n [2-10]");
 scanf("%d" ,&n);
  for (int i = 0; i < n; i++)         // i loop for rows
    {
        for (int j = 0; j <= i; j++)    // j loop for columns
        { if (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10 && i%2==0 && j%2==0){                  
                printf(" 1");}
          else if  (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10&& i%1==1 && j%1==1){
                  printf(" 2 ");} 
         else if (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10&& j/3==1 && i/3==1){                  
                printf(" 3");}
         
         else if (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10 ){
                  printf(" 4 ");}
          else if  (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10 && j==1 && i==1){
                  printf(" 5 ");}
           else if  (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10 && j==1 && i==1){
                  printf(" 6 ");}
            else if  (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10&& j==1 && i==1){
                  printf(" 7 ");}
            else if  (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10 && j==1 && i==1){
                  printf(" 8 ");}

           else if  (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10 && j==1 && i==1){
                  printf(" 9 ");}
           else if  (n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==10 && j==1 && i==1){
                  printf(" 10 ");}
        }
     
        printf("\n");          // This adds a new line after every j 
        }                    
return 0;
}
