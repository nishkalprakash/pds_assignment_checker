/* Name=Pushkaraj Jagtap
   Roll no.= 21MF3IM12
   Section=3
   Package= Code Blocks
   ASSIGN CLASS=5
   */

#include<stdio.h>
#include<math.h>
int main()
{
   float z,k,s,i;
   printf("z=");
   scanf("%f",&z);
   printf("k=");
   scanf("%f",&k);
   i=1;
        while(z>0){

            s=sqrt(z);
            z=z-(s);
            if(s==0){
               s=s-((1/k));
               z=z-(s*s);
               break;
            }
            if(z<0){
              z=z*(-1.0);

             break;
            }
         printf("%f and iteration %f\n",z,i);
         i++;
        }

}
