/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
LABTEST NO-1
Description :/* program to check weather the triangle formed by input coordinates is a right angle , obtuse or acute  angled triangle*/

#include<stdio.h>

#include<math.h>

int main()    {

int a,b,c,d,e,f,l1,l2,l3;

      printf("Enter the three coordinates of the triangle respectively\n"); //printing the coordinates of the triangle
      scanf("%d%d%d%d%d%d";&a,&b,&c,&d,&e,&f);

     l1 =sqrt[(a-c) * (a-c) + (b-d) * (b-d)];
     l2 =sqrt[(c-e) * (c-e) + (d-f) * (d-f)];          //finding length of the sides of triangle
     l3 = sqrt[(a-e) * (a-e) + (b-f) * (b-f)];

      printf("the value of l1 is: %d", l1);
      printf("the value of l2 is: %d", l2);            //printing the length of sides of triangle
      printf("the value of l3 is: %d", l3);
    
                                                                                   //applying conditions....
     	if (l1+l2>l3)  {
     	printf("This satisfy the triangles inequality condition\n");  

   	}else if(l1+l2<l3)  {
	printf("does not satisfy the triangles inequality condition\n");

        if (l3+l2>l1)  {
        printf("This satisfy the triangles inequality condition\n");

        }else if(l3+l2<l1)  {
        printf("does not satisfy the triangle inequality condition\n");

        if (l1+l3>l2)  {
        printf("This satisfy the triangles inequality condition\n");

        }else if(l1+l3<l2)  {
	printf("does not satisfy the triangles inequality condition\n");

	if((l1 * l1)+(l2*l2)=(l3*l3))  {
	printf("the triangle is a right angled triangle\n"); 

	}else if((l1 * l1)+(l3*l3)=(l2*l2))  {
	printf("the triangle is a right angled triangle\n");

	} else if((l3 * l3)+(l2*l2)=(l1*l1))  {
	printf("the triangle is a right angled triangle\n"); 

	if((l1 * l1)+(l2*l2)>(l3*l3))  {
	printf("the triangle is a acute angled triangle\n"); 

	}else if((l3 * l3)+(l2*l2)>(l1*l1))  {
	printf("the triangle is a acute angled triangle\n"); 

	}else if((l1 * l1)+(l3*l3)>(l2*l2))  {
	printf("the triangle is a acute angled triangle\n"); 

	if((l1 * l1)+(l2*l2)<(l3*l3))  {
	printf("the triangle is a obtuse angled triangle\n"); 

	}else if((l3 * l3)+(l2*l2)<(l1*l1))  {
	printf("the triangle is a obtuse angled triangle\n"); 

	}else if((l1 * l1)+(l3*l3)><(l2*l2))  {
	printf("the triangle is a obtuse angled triangle\n"); 
	}else
	printf("NO OUTPUT\n");

	returm 0;
