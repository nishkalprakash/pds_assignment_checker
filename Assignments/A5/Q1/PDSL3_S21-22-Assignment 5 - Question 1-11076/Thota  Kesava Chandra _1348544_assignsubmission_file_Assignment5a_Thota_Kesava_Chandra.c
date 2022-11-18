/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

void order(int *ptr_a,int *ptr_b,int *ptr_c)
{
    //declaring a array to ease out comparing process
    // mini maxi and midd store the index of minimum maximum and middle elements
    int cpy[]={*ptr_a,*ptr_b,*ptr_c},mini,maxi,midd;
    mini=0;
    maxi=2;

    //finding the max and min elements
    for(int i=0;i<3;i++)
    {
        if(cpy[i]<cpy[mini]) mini=i;
        if(cpy[i]>cpy[maxi]) maxi=i;
    }

    //midd element is different from min and max so finding it
    for(int i=0;i<3;i++)
    {
        if(i!=mini && i!=maxi) midd=i;
    }
    //storing the found values in order
    *ptr_a = cpy[mini];
    *ptr_b = cpy[midd];
    *ptr_c = cpy[maxi];
}

int main()
{
    int a,b,c,*ptr_a,*ptr_b,*ptr_c;
    ptr_a=&a;
    ptr_b=&b;
    ptr_c=&c;
    printf("Enter the value of a : ");
    scanf("%d",ptr_a);
    printf("Enter the value of b : ");
    scanf("%d",ptr_b);
    printf("Enter the value of c : ");
    scanf("%d",ptr_c);
    printf("\n--- Before Function call ---\n",ptr_a);
    printf("Address of a : %u\n",ptr_a);
    printf("Address of b : %u\n",ptr_b);
    printf("Address of c : %u\n",ptr_c);
    printf("Values in a,b,c : %d, %d, %d\n",a,b,c);

    //calling the function
    order(ptr_a,ptr_b,ptr_c);

    //printing the final values
    printf("\n--- After Function call ---\n",ptr_a);
    printf("Address of a : %u\n",ptr_a);
    printf("Address of b : %u\n",ptr_b);
    printf("Address of c : %u\n",ptr_c);
    printf("Values in a,b,c : %d, %d, %d\n",a,b,c);
    return 0;
}
