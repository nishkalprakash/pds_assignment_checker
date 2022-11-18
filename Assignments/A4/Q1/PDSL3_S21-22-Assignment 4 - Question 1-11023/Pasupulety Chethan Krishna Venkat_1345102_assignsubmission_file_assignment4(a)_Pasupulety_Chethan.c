/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/


#include<stdio.h>

//defining the second function used to print the elements.invoked upon calling the first function.
void print_elements2(int a[],int n,int l,int index,int temp[],int i);

//defining the first function to set up a temporary array and to call 2nd function.
void print_elements1(int a[], int n, int l)
{
    // A temporary array to store all combination one by one during execution
    int temp[l];

    //calling the second function to  print all combination using temporary array
    print_elements2(a, n, l, 0, temp, 0);
}


void print_elements2(int a[], int n, int l, int index, int temp[], int i)     //index and i are used in filling our temp array.
{
    int j;

    // When no more elements are there to put in temp[]
    if (i >= n)
        return;

    // recursion termination condition for when our temp array is filled
    if (index == l)
    {
        for (j=0; j<l; j++)
            printf("%d ",temp[j]);
        printf("\n");
        return;
    }



    // current element is included and next element in temp is changed(index+1)
    temp[index] = a[i];
    print_elements2(a, n, l, index+1, temp, i);

    // current element is excluded, and replacing it with next element in our array(i+1)
    print_elements2(a, n, l, index, temp, i+1);
}
int main()
{
   int n;
   printf("enter number of elements in the array:"); scanf("%d",&n);

   //defining our array and number l
   int a[n],l,i;

   //taking the input of our array
   printf("enter the array elements\n");
   for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    }
    //taking l input (number of elements to be printed
   printf("enter l:"); scanf("%d",&l);
   printf("\n");



    //calling our first function to initiate the second function
   print_elements1(a,n,l);
   return 0;








}






