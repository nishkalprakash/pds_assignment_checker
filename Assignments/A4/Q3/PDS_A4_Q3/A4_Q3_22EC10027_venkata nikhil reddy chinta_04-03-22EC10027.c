/*
section : 2
name : chinta venkata nikhil reddy
roll no : 22EC10027
assignment : 4
description : grade caluclation for number of students

*/
#include<stdio.h>
int main(){
int n,a=1,r=1,b=1,c=1;
printf("give a number n : ");
scanf("%d" , &n);

while(a<=n)
{
    while(b<=n-r)
    {
        printf(" ");
        r++;
        b++;
    }
    b=1;
    r=1;
    while((b>n-r)&&(b<=n))
          {
              printf("%d" , c);
              c++;
              r++;
          }
          printf("\n");
            a++;
}


return 0;
}
