#include<stdio.h>
#include<math.h>
/* Harsh Raj
Roll : 21IE10017   */
int main()
{
    int i,A[3],B[3],C[3];
    float X[3],Y[3],S[3],s,Ar;
    int count=0;
    printf("Enter the coefficients(a,b,c) of 3 lines");
    printf("\n Line 1 : ");
    for(i=0;i<3;i++)
        scanf("%d",&A[i]);
    printf("\n Line 2 : ");
    for(i=0;i<3;i++)
        scanf("%d",&B[i]);
    printf("\n Line 3 : ");
    for(i=0;i<3;i++)
        scanf("%d",&C[i]);
    if(A[0]*B[1]-A[1]*B[0]==0)
       {
           printf("Line 1 & Line 2 are Parallel");
           count++;
       }
    if(B[0]*C[1]-B[1]*C[0]==0)
       {
           printf("Line 2 & Line 3 are Parallel");
           count++;
       }
    if(A[0]*C[1]-A[1]*C[0]==0)
       {
           printf("Line 1 & Line 3 are Parallel");
           count++;
       }
    if(count==0)
    {
        X[0]=(B[1]*A[2]-A[1]*B[2])/(A[0]*B[1]-A[1]*B[0]);
        Y[0]=(B[0]*A[2]-A[0]*B[2])/(A[0]*B[1]-A[1]*B[0]);
        X[1]=(B[1]*C[2]-C[1]*B[2])/(C[0]*B[1]-C[1]*B[0]);
        Y[1]=(B[0]*C[2]-C[0]*B[2])/(C[0]*B[1]-C[1]*B[0]);
        X[2]=(C[1]*A[2]-A[1]*C[2])/(A[0]*C[1]-A[1]*C[0]);
        Y[0]=(C[0]*A[2]-A[0]*C[2])/(A[0]*C[1]-A[1]*C[0]);
        printf("\n Point of intersection between lines Line 1 & Line 2 = (%d , %d)",X[0],Y[0]);
        printf("\n Point of intersection between lines Line 2 & Line 3 = (%d , %d)",X[1],Y[1]);
        printf("\n Point of intersection between lines Line 1 & Line 3 = (%d , %d)",X[2],Y[2]);
        S[0]=sqrt((pow((X[0]-X[1]),2))+(pow((Y[0]-Y[1]),2)));
        S[1]=sqrt((pow((X[2]-X[1]),2))+(pow((Y[2]-Y[1]),2)));
        S[2]=sqrt((pow((X[0]-X[2]),2))+(pow((Y[0]-Y[2]),2)));
        printf("\n Side lengths : %f , %f , %f",S[0],S[1],S[2]);
        s=(S[0]+S[1]+S[2])/2;
        Ar=sqrt(s*(s-S[0])*(s-S[1])*(s-S[2]));
        printf("\n Area = %f",Ar);
    }
    else printf("No Area");
}
