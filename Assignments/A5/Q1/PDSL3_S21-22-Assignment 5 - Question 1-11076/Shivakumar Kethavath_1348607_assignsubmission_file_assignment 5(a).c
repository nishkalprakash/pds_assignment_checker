/* kethavath shivakumar
  21MI31013   */

  #include <stdio.h>

void function(int *a, int *b, int *c)
{
    int temp;
    int high;
    int low;

    if (*a > *b)
    {
        temp = *a;
        low = *b;
    }
    else
    {
        temp = *b;
        low = *a;
    }
    if (temp > *c)
    {
        high = temp;
        if (low > *c)
        {
            temp = low;
            low = *c;
        }
        else
        {
            temp = *c;
        }
    }
    else
        high = *c;

    // giving back the values
    *a = low;
    *b = temp;
    *c = high;
}

int main()
{
    int a, b, c;
    int *p1, *p2, *p3; // pointers for (a b c)
    printf("Enter the 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Before the function call\n");

    printf("The address of a : %p and value of a: %d\n", &a, a);
    printf("The address of b : %p and value of b: %d\n", &b, b);
    printf("The address of c : %p and value of c: %d\n", &c, c);

    // fn call
    function(&a, &b, &c);
    printf("After function call\n");

    printf("The address of a : %p and value of a: %d\n", &a, a);
    printf("The address of b : %p and value of b: %d\n", &b, b);
    printf("The address of c : %p and value of c: %d\n", &c, c);

    return 0;
}
