
/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
Assignment No : 7
Description : program to find the saddle point in the matrix


#include<stdio.h>


int main ()


        int  arr[0,0]  , arr[0,1] , arr[0,2]  , arr[1,0] , arr[2,0]  , arr[1,1] , arr[1,2]  , arr[2,2] , arr[2,1] ;


       if((arr[0,0] < arr[0,1]  && arr[0,0]<arr[0,2]) &&(arr[0,0]>arr[1,0] && arr[0,0]>arr[2,0]))

        printf("The saddle point is: arr[0,0]");


      

        else if((arr[0,1] < arr[0,0]  && arr[0,1]<arr[0,2]) &&(arr[0,1]>arr[1,1] && arr[0,1]>arr[2,1]))

         printf("The saddle point is: arr[0,1]");


      

       else if((arr[0,2] < arr[0,0]  && arr[0,2]<arr[0,1]) &&(arr[0,2]>arr[1,2] && arr[0,2]>arr[2,2]))

         printf("The saddle point is: arr[0,2]");


       else if((arr[1,0] < arr[1,1]  && arr[1,0]<arr[1,2]) &&(arr[1,0]>arr[2,0] && arr[1,1]>arr[0,0]))

         printf("The saddle point is: arr[1,0]");

       else if((arr[1,1] < arr[1,0]  && arr[1,1]<arr[1,2]) &&(arr[1,1]>arr[1,0] && arr[1,1]>arr[1,2]))

         printf("The saddle point is: arr[1,1]");

       else if((arr[1,2] < arr[1,1]  && arr[1,2]<arr[1,0]) &&(arr[1,2]>arr[1,1] && arr[1,2]>arr[0,1]))

         printf("The saddle point is: arr[1,2]");

      

       else if((arr[2,0] < arr[1,0]  && arr[2,0]<arr[1,1]) &&(arr[2,0]>arr[2,2] && arr[2,0]>arr[2,1]))

         printf("The saddle point is: arr[2,0]");

 

      else if((arr[2,1] < arr[1,0]  && arr[2,1]<arr[1,1]) &&(arr[2,1]>arr[2,2] && arr[2,1]>arr[2,1]))

         printf("The saddle point is: arr[2,1]");



      else if((arr[2,2] < arr[1,2]  && arr[2,2]<arr[1,0]) &&(arr[2,2]>arr[2,2] && arr[2,2]>arr[2,1]))

         printf("The saddle point is: arr[2,2]");




return 0;

}
