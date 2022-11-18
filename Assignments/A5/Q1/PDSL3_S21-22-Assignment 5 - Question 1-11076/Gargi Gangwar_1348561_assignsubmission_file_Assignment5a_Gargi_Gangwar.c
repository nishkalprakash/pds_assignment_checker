//C program to rearrange the values of a, b, c, in non-decreasing order
//Gargi Gangwar
//21MF10017


#include <stdio.h>

//function to rearrange
int Rearrange(int *x,int *y,int *z)
{
    int arr[3],i,temp;
    arr[0]=*x; arr[1]=*y; arr[2]=*z;
    for(i=0;i<3;i++)
    {
     if(arr[i+1]<arr[i])
     {
         //rearranging using bubble sort
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
     }
    }
   *x=arr[0]; *y=arr[1]; *z=arr[2];

}

//main function
int main()
{
    int a,b,c;
    //input values of a,b,c from user
    printf("Enter values of a,b,c respectively \n");
    scanf("%d\n %d\n %d",&a,&b,&c);

    printf("Before calling:\n");
    printf("Address of a:%d and value of a:%d\n",&a,a);
    printf("Address of b:%d and value of b:%d\n",&b,b);
    printf("Address of c:%d and value of c:%d\n",&c,c);

    Rearrange(&a,&b,&c);  //calling the function

    printf("After calling:\n");
    printf("Address of a:%d and value of a:%d\n",&a,a);
    printf("Address of b:%d and value of b:%d\n",&b,b);
    printf("Address of c:%d and value of c:%d\n",&c,c);
    //we can see values have changed but addresses have not
}
