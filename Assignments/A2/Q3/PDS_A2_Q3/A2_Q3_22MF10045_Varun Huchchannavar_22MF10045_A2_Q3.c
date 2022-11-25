/* To write a program to find the roots of a quadratic equation*/
# include<stdio.h>
# include<math.h>
int main()
{
	int a;
	int b;
	int c;
	float root;
        printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Enter the value of c\n");
	scanf("%d",&c);
           float temp= sqrt(b*b-4*a*c);
            	
root=(-b+temp)/(2*a);
printf("%f",root);
         
return 0;	
	
}
