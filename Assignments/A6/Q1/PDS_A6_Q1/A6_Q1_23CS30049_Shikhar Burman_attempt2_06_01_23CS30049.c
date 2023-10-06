// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

int arr[100];
int size = 0;

void display_original_array()
{
    printf("Original array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

void fill()
{
    do
    {
        printf("Enter the size of the array in range [1,100]: ");
        scanf("%d", &size);
        if (size < 1 || size > 100)
            printf("Please make sure size is in range [1,100]\n");
    } while (size < 1 || size > 100);

    printf("Filled array: \n");
    for (int i = 0; i < size; i++)
    {
        arr[i] = 100 + rand() % 900;
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

void exchange()
{
    display_original_array();
    printf("\n\n");
    int temp;
    for (int i = 0; i < (size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    printf("Exchanged array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

void rotate_right()
{

    display_original_array();
    int temp[101];

    for (int i = 0; i < size; i++)
    {
        temp[i + 1] = arr[i];
    }

    arr[0] = arr[size - 1];

    for (int i = 0; i < size - 1; i++)
    {
        arr[i + 1] = temp[i + 1];
    }

    printf("Rotated right array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

void rotate_left()
{
    display_original_array();
    int temp[101];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i + 1];
    }

    arr[size - 1] = arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = temp[i];
    }

    printf("Rotated left array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

void segragate()
{
    display_original_array();
    int temp[size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }

    printf("Segregated array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

void search()
{
    display_original_array();
    int n;
    printf("Enter integer to be searched: ");
    scanf("%d", &n);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
            printf("Found at index: %d\n", i);
    }
    printf("\n\n");
}

void fold()
{
    printf("Folded array:\n");
    if (size % 2 == 0)
    {
        int folded[size / 2];
        for (int i = 0; i < size / 2; i++)
        {
            folded[i] = arr[i] + arr[size - 1 - i];
            printf("%d\t", folded[i]);
        }
    }
    else
    {
        int folded[(size / 2) + 1];
        for (int i = 0; i < (size / 2) + 1; i++)
        {
            folded[i] = arr[i] + arr[size - 1 - i];
            printf("%d\t", folded[i]);
        }
    }
    printf("\n\n");
}

void analyze()
{
    int pos = 0, isize = 0, mpos = 0, msize = 0;
    display_original_array();
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            if(isize==0)
                pos=i;
            isize++;
        }
        else
        {
            isize=0;
        }
    }
}

void main()
{
    int n;
    do
    {
        printf("1---- Fill\n");
        printf("2---- Exchange\n");
        printf("3---- Rotate right\n");
        printf("4---- Rotate left\n");
        printf("5---- Segregate\n");
        printf("6---- Search\n");
        printf("7---- Fold\n");
        printf("8---- Analyze\n");
        printf("0,9 or any higher number ---- Exit\n");
        scanf("%d", &n);
        printf("\n");
        switch (n)
        {
        case 1:
            fill();
            break;
        case 2:
            exchange();
            break;
        case 3:
            rotate_right();
            break;
        case 4:
            rotate_left();
            break;
        case 5:
            segragate();
            break;
        case 6:
            search();
            break;
        case 7:
            fold();
            break;
        case 8:
            analyze();
            break;
        default:
            break;
        }

    } while (n > 0 && n < 9);
}