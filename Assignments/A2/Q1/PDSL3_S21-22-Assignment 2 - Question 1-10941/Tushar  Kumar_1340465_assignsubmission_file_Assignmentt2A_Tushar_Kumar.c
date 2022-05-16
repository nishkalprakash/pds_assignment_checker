/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
#include<math.h>
int main(){
    float z[100];
    int i,k;
    printf("Enter the initial height of ball where is it at rest\n");
    scanf("%f", &z[0]);
    printf("Enter the  value of k\n");
    scanf("%d", &k);
        for( i=0;i<=k ;i++)
        {
           z[i+1] = z[i] - sqrt(z[i]);
           if(z[i+1] < 0)
           {
               z[i+1] = -z[i+1];
           }
           if( z[i+1] == z[i] )
           {
               z[i+1] = z[i] - ((z[i])*(z[i]) - (1/k));
               if(z[i+1] < 0)
                 {
               z[i+1] = -z[i+1];
                }
           }
           if(z[i+1] == 0)
            {
                printf("%f", z[i+1]);
                break;
            }
           printf("(%f,%d)\n", z[i+1], i+1);


        }
 return 0;
}
