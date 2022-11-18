#include<stdio.h>
#include<math.h>

int intersection(float a[], float a1, float b1, float c1, float a2, float b2, float c2)
{
    static int len=0;
    if (a1*b2 == a2/b1) return(1);
    else { a[len++]=(float)(c1*b2-c2*b1)/(a1*b2-a2*b1);
           a[len++]=(float)(c1*a2-c2*a1)/(b1*a2-b2*a1);
           return(1);}
}

int main()
{
    float Points[6],a1,b1,c1,a2,b2,c2,a3,b3,c3,s1,s2,s3,A;
    int flag=1;

    printf("Enter the coefficients (a,b,c) of the three lines: \n");
    printf("Line 1: ");
    scanf("%f%f%f",&a1,&b1,&c1);

    printf("Line 2: ");
    scanf("%f%f%f",&a2,&b2,&c2);

    printf("Line 3: ");
    scanf("%f%f%f",&a3,&b3,&c3);

    if(intersection(Points,a1,b1,c1,a2,b2,c2)==0){printf("Lines are parallel, no intersection point");flag=0;}
    else printf("\nPoint of intersection between L1 and L2 = (%f,%f)",Points[0],Points[1]);
    if (flag!=0){
            if(intersection(Points,a2,b2,c2,a3,b3,c3)==0){printf("\nLines are parallel, no intersection point");flag=0;}
            else printf("\nPoint of intersection between L2 and L3 = (%f,%f)",Points[2],Points[3]);
            if (flag!=0){
                if(intersection(Points,a3,b3,c3,a1,b1,c1)==0){printf("Lines are parallel, no intersection point");flag=0;}
                else printf("\n3rd vachindi3rR33Point of intersection between L1 and L2 = (%f,%f)",Points[4],Points[5]);
                if (flag!=0){
                    s1=(float)sqrt(pow(Points[0]-Points[2],2)+pow(Points[1]-Points[3],2));
                    s2=(float)sqrt(pow(Points[2]-Points[4],2)+pow(Points[3]-Points[5],2));
                    s3=(float)sqrt(pow(Points[0]-Points[4],2)+pow(Points[1]-Points[5],2));
                    printf("\nSide lengths= %f,%f,%f",s1,s2,s3);
                    A=(s1+s2+s3)/2.0;
                    s1=A-s1;
                    s2=A-s2;
                    s3=A-s3;
                    A=sqrt(A*s1*s2*s3);
                    printf("\nArea = %f",A);
                }
                else printf("\nTriangle cannot be formed since the lines are parallel");
            }
            else printf("\nTriangle cannot be formed since the lines are parallel");
        }
        else printf("\nTriangle cannot be formed since the lines are parallel");


}



