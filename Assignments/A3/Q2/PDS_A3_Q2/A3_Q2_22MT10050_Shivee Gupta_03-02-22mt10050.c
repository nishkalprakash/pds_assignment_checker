#include<stdio.h>
int main()
         {
             int a,b;
             printf("Enter two numbers : ");
             scanf("%d %d",&a,&b);
             int unit,tenth,hund;
             unit=a%10;
             tenth = (a/10)%10;
             hund= a/100;
             int rev = unit*100 + tenth*10+ hund;

             if(rev==b) printf("The two numbers form a perfect pair");
             else printf("The two numbers do not form a perfect pair");
             return 0;
                     }
