# include<stdio.h>
//function to rearrange the numbers in non decreasing order
void rearrange(int a, int b, int c){

    if (a<b && a<c)
    {
        if(b<c)
        {
            printf("Values in a, b, c = %d, %d, %d\n",a,b,c);
        }
        else
        {
            printf("Values in a, b, c = %d, %d, %d\n",a,c,b);
            }
    }

    else if (b<c && b<a)
    {

        if (c<a)
        {
            printf("Values in a, b, c = %d, %d, %d\n",b,c,a);
        }

        else
        {
        printf("Values in a, b, c = %d, %d, %d\n",b,a,c);
        }

    }

    else if (c<a && c<b)
    {

        if (b<a)
        {
            printf("Values in a, b, c = %d, %d, %d\n",c,b,a);
        }

        else
        {
        printf("Values in a, b, c = %d, %d, %d\n",c,a,b);
        }

    }
}
int main(){
    int a, b, c;
    int *ptr1, *ptr2, *ptr3;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    //Assigning the pointer variables the addresses of a, b and c
    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    printf("\n---Before function call---\n");
    printf("Address of a = %p\n", ptr1);
    printf("Address of b = %p\n", ptr2);
    printf("Address of c = %p\n", ptr3);
    printf("Values in a, b, c = %d, %d, %d\n", a, b, c);
    printf("Address of a = %p\n", ptr1);
    printf("Address of b = %p\n", ptr2);
    printf("Address of c = %p\n", ptr3);
    rearrange(a, b, c);

    return 0;
}
