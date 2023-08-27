 #include<stdio.h> 
 void main() 
 {    int x,y; 
 printf("enter the age"); 
 scanf("%d",&x);
 if (x%12==0){
   y=(x/12);
 }
 else{
   y=(x/12)+1;
 }
  printf("The person is %d years old",y); 
 } 
