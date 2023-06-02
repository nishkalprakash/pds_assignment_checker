/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 2
Description:Vector
*/
#include <stdio.h>  //Header file
typedef struct vector{  //defining structure vector
    int dim;
    int *a;
}vector;

int check(vector u,vector v) //returns 1 if similar 2 if orthogonal and -1 if none
{
    int check_similar=0;
    float f1,f2 = (float)u.a[0]/(float)v.a[0];
    int s=0;
    for(int i=0;i<u.dim;i++)
    {
       f1 = (float)u.a[i]/(float)v.a[i];
       if(f1!=f2)  //if unequal ratio found
       {
           check_similar++;
           break;
       }

    }
    if(check_similar==0)  //Identical
        return 1;
    for(int i=0;i<u.dim;i++)
    {
        s = s+u.a[i]*v.a[i]; //sum of products of respective values
    }
    if(s==0)  //Orthogonal
        return 2;
    return -1;
}

int main()
{
    vector u,v;
    printf("Enter dimension:");
    scanf("%d",&u.dim);
    u.a = (int*)malloc(u.dim*sizeof(int)); //array to store the values
    printf("Enter values:");
    for(int i=0;i<u.dim;i++)
        scanf("%d",&u.a[i]);
    printf("Enter dimension:");
    scanf("%d",&v.dim);
    if(u.dim!=v.dim)
        printf("Dimension should be same."); //error message
    else
    {


    v.a = (int*)malloc(v.dim*sizeof(int)); //array to store the values
    printf("Enter values:");
    for(int i=0;i<v.dim;i++)
        scanf("%d",&v.a[i]);

    if(check(u,v)==1)
        printf("Identical Vectors");
    else if(check(u,v)==2)
        printf("Orthogonal Vectors");
    else
        printf("The vectors are neither similar nor orthogonal.");
    }
    free(u.a);
    free(v.a);
    return 0; //end

}
