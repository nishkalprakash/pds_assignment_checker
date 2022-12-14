#include<stdio.h>
#include<math.h>
  int main()
{   
     
    

         int a1,b1;
        printf("enter the coordinates : ");
          scanf("%d %d",&a1,&b1);  //taking coordinates as input

         int a2,b2;
        printf("enter the coordinates : ");
          scanf("%d %d",&a2,&b2);  //taking coordinates as input
           
         int a3,b3;
        printf("enter the coordinates : ");
          scanf("%d %d",&a3,&b3);  //taking coordinates as input
           
           
  //computing the length of sides of triangle

            float s1,s2,s3;                              //here s1,s2,s3 are the sides of triangle
            s1=sqrt((b1-b2)*(b1-b2)+(a1-a2)*(a1-a2));
            s2=sqrt((b3-b2)*(b3-b2)+(a3-a2)*(a3-a2));
	    s3=sqrt((b1-b3)*(b1-b3)+(a1-a3)*(a1-a3));
// checking that triangle is valid or not
         if(s1+s2>s3&&s3+s2>s1&&s1+s3>s2)
           {}
         else
           printf("Invalid");

  //checking which side is largest
      int max;  
       if(s1>s2)
          max=s1;
       else if(s2>s1)
          max=s2;
       else if(max>s3)
          printf("%f",max);
        else
          printf("%f",s3);
// checking the type of triangle 
     if(s1*s1=s2*s2+s3*s3||s2*s2=s1*s1+s3*s3||s3*s3=s2*s2+s1*s1)
         printf("right triangle");
     else if(s1*s1>(s2*s2+s3*s3)||s2*s2>(s1*s1+s3*s3)||s3*s3>(s2*s2+s1*s1))
         printf("obtuse triangle")
      else if(s1*s1<(s2*s2+s3*s3)||s2*s2<(s1*s1+s3*s3)||s3*s3<(s2*s2+s1*s1))
         printf("acute triangle")
       





   return 0;
}
