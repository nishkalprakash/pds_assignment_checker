/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>
int sorting(int *x,int *y,int *z)
{
	int temp; // temporary variable
	//Arranging in non-decreasing order//simplest sorting algorithm
	if(*x>*z){
        temp=*x;
        *z=*x;
        *x=temp;
    }
	if(*x>*y){
        temp=*x;
        *x=*y;
        *y=temp;
    }
	if(*y>*z){
        temp=*z;
        *z=*y;
        *y=temp;
    }
 return 0;
}
int main()
{
	int *add_a,*add_b,*add_c;//pointers to store address
	int a,b,c;
	printf("Enter 3 ints\n");
	scanf("%d%d%d",&a,&b,&c);
	add_a=&a,add_b=&b,add_c=&c;
	printf("\nBefore function call\nAddress of a = %d\nAddress of b = %d\nAddress of c = %d\n",add_a,add_b,add_c);
	printf("Values of a,b,c = %d, %d, %d\n\n",*add_a,*add_b,*add_c);
	int q=sorting(add_a,add_b,add_c);
	printf("\nAfter function call\nAddress of a = %d\nAddress of b = %d\nAddress of c = %d\n",add_a,add_b,add_c);
	printf("Values of a,b,c = %d, %d, %d",*add_a,*add_b,*add_c);
	return 0;
}
