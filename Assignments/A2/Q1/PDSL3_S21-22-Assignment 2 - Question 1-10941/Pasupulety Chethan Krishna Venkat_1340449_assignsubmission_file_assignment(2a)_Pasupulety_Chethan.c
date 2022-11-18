/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float z,s,x;
    int k,i;
    printf("enter z:"); //taking initial height of the cylinder z
    scanf("%f",&z);

    printf("enter k:"); //taking the number of iterations
    scanf("%d",&k);


    for(i=1;i<k+1;i++){
         x=z;              //storing the value of z for the trapped ball situation and running for k times
         s=sqrt(z);
         z=z-s;

         if(z<0){z=-z;}    // changing sign if z becomes negative

         if(z==x){
            printf("(%f,%d), ",z,i);  // changing the conditions for trapped situation
            s=(s-(1/i));
            z=z-s*s;
            if(z<0) {z=-z;} // Making sure z does not become negative again
         }
         if(z==0) { printf("(%f,%d)",z,i+1);    break;}


         printf("(%f,%d), ",z,i);
}
   return 0;


}
