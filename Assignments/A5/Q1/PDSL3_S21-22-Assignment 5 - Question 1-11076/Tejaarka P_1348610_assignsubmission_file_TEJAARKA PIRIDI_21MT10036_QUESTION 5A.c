   //TEJAARKA PIRIDI

   //21MT10036

   // ASSIGNMENT 5 A


   // function to addressing the integers.


   #include <stdio.h>


   void     rearranging(int *a,int *b,int *c)

  {
	int M;      // this is used for rearranging the elements



    // Sorting them in  non-decreasing order


	if(*a>*b) { M=*a; *a=*b; *b=M; }


	if(*b>*c) { M=*c; *c=*b; *b=M; }
   }

   // Main  function(developer)


   int main()


  {
	int *a,*b,*c;

	int x,y,z;

	a=&x,b=&y,c=&z;   // addressing a,b,c temporarily


	printf("Enter the three integers : ");


	scanf("%d%d%d",a,b,c);


	printf("\n\n*****Before function call*****\n");



	printf(" the Address of a = %d\n",a);


	printf("the Address of b = %d\n",b);


	printf("the Address of c = %d\n",c);


	printf(" the Values of a,b,c = %d, %d, %d\n\n",*a,*b,*c);


    // Calling the function


	rearranging(a,b,c);


    //These values are after the function called.



	printf("--*****After the function call--*****\n");


	printf(" the Address of a = %d\n",a);


	printf(" the Address of b = %d\n",b);


	printf("the Address of c = %d\n",c);


	printf("Values of a,b,c = %d, %d, %d",*a,*b,*c);


	return 0;

  }
