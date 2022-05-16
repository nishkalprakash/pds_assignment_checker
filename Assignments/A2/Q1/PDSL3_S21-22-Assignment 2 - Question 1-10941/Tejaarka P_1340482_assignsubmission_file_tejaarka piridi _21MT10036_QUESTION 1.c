/* TEJAARKA PIRIDI 21MT10036 QUESTION 1 SECTION 3*/



#include <stdio.h>

#include<math.h>

int main() {


    float k,z,zc,i,s;


    printf("Enter the value of Iterations: ");


    scanf("%f",&k);


    printf("Enter the value of Z :");


    scanf("%f",&z);


    for( i=1;i<=k;i++)           /*this condition runs till i greater than k */
    {
        s=sqrt(z);

        z=z-s;


        if(z>0)
        {

            printf("(%f,%f)\t",z,i);
            continue;
        }
        if(z==0)
        {
            printf("(%d,%d)",z,i);
            break;
        }
        else
        {
            z+=s;

            s=s-(1/k);

        z=z-pow(s,2);

            printf("(%f,%f)\t",z,i);

            continue;

        }




    }
    return 0;
}
