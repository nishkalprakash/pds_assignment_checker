/*SECTION -14
  NAME -KRISHNA GUPTA
  ROLL NUMBER -22GG10024
  ASSIGNMENT - DETERMINING THE TYPE OF TRIANGLE
*/
#include <stdio.h>
#include <math.h>
int main()
{
   int X[3],Y[3],i;
   float l1,l2,l3,max,t,z,m1,m2,m3;
   for(i=0;i<=2;i++)
    {
     printf("Enter the X-coordinate of point %d :",i+1);
     scanf("%d",&X[i]);  
     printf("Enter the Y-coordinate of point %d :",i+1);
     scanf("%d",&Y[i]);
     } 
    l1= sqrt((X[1]-X[0])*(X[1]-X[0])+(Y[1]-Y[0])*(Y[1]-Y[0]));      // CALCULATING l1
    l2= sqrt((X[2]-X[1])*(X[2]-X[1])+(Y[2]-Y[1])*(Y[2]-Y[1]));      // CALCULATING l2
    l3= sqrt((X[2]-X[0])*(X[2]-X[0])+(Y[2]-Y[0])*(Y[2]-Y[0]));      // CALCULATING l3
printf("%f\n",l1);
printf("%f\n",l2);
printf("%f\n",l3); 
    
   max =l1;                               // calculating max
   if (max<l2)
    max=l2;
    if(max<l3)
    max=l3;
    
m1= (X[1]-X[0])/(Y[1]-Y[0]);           // calculating slopes
m2 = (X[2]-X[0])/(Y[2]-Y[0]);
m3=(X[2]-X[1])/(Y[2]-Y[1]);

  if (l1>(l2+l3)||l2>(l1+l3)||l3>(l2+l1))    
{
                      // checking triangle inequality
   printf("Invalid");
   }
   if (l1<(l2+l3)&&l2<(l1+l3)&&l3<(l2+l1))  
     {
          if (l1*l1 + l2*l2 == l3*l3 || l3*l3 + l2*l2 == l1*l1 || l1*l1 + l3*l3 == l2*l2)         
         {
          printf("Right Angled"); 
          }

      }
   
return 0;
   
}
