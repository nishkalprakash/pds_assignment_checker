//Take four integers from user and return yes if two have same value else no

#include<stdio.h>

int main(){
     int a,b,c,d ;                                               //Defining variables for taking input
     printf("Enter four integers \n");
     scanf("%d%d%d%d",&a,&b,&c,&d);
     
     //Comparing numbers for checking given condition printing suitable result
     if (a==b || a==c || a==d) {
          if(b==c || b==d || c==d) printf("No");
          else printf("Yes") ;
     }
     
     else if(b==c || b==d){
          if (c==d) printf("No");
          else printf("Yes");
     }
     
     else if (c==d) printf("Yes");

     else printf("No");   
              
}
