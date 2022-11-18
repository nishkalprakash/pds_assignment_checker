/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Operating System : Windows 11
Assignment class : 5
*/


#include<stdio.h>

void sortit(int*x,int*y,int*z){                           //function to sort the elements

    int temp;

if(*x>*y||*z>*y){
    temp = *x;
    *x=*y;
    *y=temp;
}
else {
    if(*x>*z||*y>*z){
        temp = *x;
        *x=*z;
        *z=temp;

    }
}
if(*y>*z){
    temp = *y;
    *y=*z;
    *z=temp;
}


}



int main(){

   int a,b,c;

   printf("Enter three integers\n");
   scanf("%d %d %d",&a,&b,&c);

   printf("\n---Before the function call---");
   printf("\n The Address of a = %d\n The Address of b = %d\n The Address of c = %d",&a,&b,&c);   //printing before the function call
   printf("\n Values in a,b,c = %d %d %d",a,b,c);

   sortit(&a,&b,&c);                                                                             //function called by reference

   printf("\n---After the function call---");
   printf("\n The Address of a = %d\n The Address of b = %d\n The Address of c = %d",&a,&b,&c);   //printing after the function call
   printf("\n Values in a,b,c = %d %d %d",a,b,c);


return 0;
}
