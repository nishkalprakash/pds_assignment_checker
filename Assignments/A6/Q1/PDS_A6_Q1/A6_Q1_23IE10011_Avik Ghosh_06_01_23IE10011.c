//Roll no.: 23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int arr[100],size;

void fill()
{
    while(1)
    {
        printf("Enter size of array\n");
        scanf("%d",&size);
        if(size > 100 || size < 1)
            continue;
        else
            for(int i=0; i < size; i++)
                arr[i] = (rand()%900) + 100;
        printf("Array Elements\n");
        for(int i=0; i < size; i++)
            printf("%d, ", arr[i]);
        printf("\n");
        break;
    }
    return;
}

void exchange()
{
    printf("Original array\n");
    int i;
    for(i=0; i < size; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    printf("Exchanged array\n")
    if(size%2 == 0)
    {
        for(i=size/2 ; i < size ; i++)
            printf("%d, ", arr[i]);
        for(i=0 ; i< ((size/2)-1) ; i++)
            printf("%d, ", arr[i]);
    }
    else
    {
        for(i=((size/2)+1) ; i < size ; i++)
            printf("%d, ", arr[i]);
        for(i=0 ; i< (size/2) ; i++)
            printf("%d, ", arr[i]);
    }
    printf("\n");
    return;
}

void rotate_right()
{
    printf("Original array\n");
    int i;
    for(i=0; i < size; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    printf("Array after being rotated right\n");
    int temp= arr[size-1];
    printf("%d, ",temp);
    for(i=0; i < (size-1); i++)
        printf("%d, ", arr[i]);
    printf("\n");
    return;
}

void rotate_left()
{
    printf("Original array\n");
    int i;
    for(i = 0 ; i < size ; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    printf("Array after being rotated left\n");
    int temp= arr[0];
    for(i = 1 ; i < size ; i++)
        printf("%d, ", arr[i]);
    printf("%d",temp);
    printf("\n");
    return;
}

void segregate()
{
    printf("Original array\n");
    int i;
    for(i = 0 ; i < size ; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    printf("Array after being segregated\n")
    for(i = 0 ; i < size ; i++)
    {
        if(arr[i]%2 == 0)
            printf("%d, ",arr[i]);
    }  //printing even elements before odd elements
    for(i = 0 ; i < size ; i++)
    {
        if(arr[i]%2 != 0)
            printf("%d, ",arr[i]);
    }
    return;
}
void search()
{
    printf("Original array\n");
    int i,number;
    for(i = 0 ; i < size ; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    printf("Enter the integer to be searched\n");
    scanf("%d",&number);
    for(i = 0 ; i < size ; i++)
    {
        if(arr[i] == number)
            printf("Element %d is found at array index of %d\n",number,i);
        else
            printf("Element %d is not found\n",number);
    }
    return;
}

void fold()
{
    printf("Original array\n");
    int i;
    for(i = 0 ; i < size ; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    for(i = 0 ; i < (size/2) ; i++)
        printf("%d, ", (arr[i]+ arr[size-1-i]));
    if(size%2 != 0)
        printf("%d", arr[(size/2)]);
    printf("\n");
    return;
}

void analyze()
{
    printf("Original array\n");
    int i, pos=0, isize=1, mpos=0, msize=0;
    //pos variable to track the position in the array at which largest sequence occurs and mpos to keep track of the position of the maximum increasing sequence and msize  to keep track of its size
    for(i = 0 ; i < size ; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    printf("The increasing sequences are:\n");
    for(i = pos ; i < (size-1) ; i++)
      if(arr[i] <= arr[i+1])
	{printf("%d, ", arr[i]);
	  isize++;
	  if((i+1) == (size-1))
	    printf("%d,", arr[size-1]);}
    
      else {
	pos = i+1;
	printf("%d",arr[i]);
	printf("\n");
	if(msize < isize)
	  {msize = isize;
	    mpos= pos -1;}
	isize=0;
      }
    printf("The largest sequence\n");
    for(i = mpos ; i < mpos+msize ; i++)
      	printf("%d",arr[i]);
    printf("\n");
    return;
}

    int main( )
    {
        int k = 0; //Flag variable
        while(1)
        {
            printf("Menu choices\n\ti. 1---- Fill\n\tii. 2---- Exchange\n\tiii. 3---- Rotate right\n\tiv. 4---- Rotate left\n\tv. 5---- Segregate\n\tvi. 6----Search\n\tvii. 7---- Fold\n\tviii. 8---- Analyze\n\tix. 0,9 or any higher number ---- Exit\n");
            int ch;
            printf("Enter your choice\n");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1:
            {
                fill();
                k++;
                break;
            }
            case 2:
            {
                if(k == 0)
                    fill();
                else
                    exchange();
                break;
            }
            case 3:
            {
                if(k == 0)
                    fill();
                else
                    rotate_right();
                break;
            }
            case 4:
            {
                if(k == 0)
                    fill();
                else
                    rotate_left();
                break;
            }
            case 5:
            {
                if(k == 0)
                    fill();
                else
                    segregate();
                break;
            }
            case 6:
            {
                if(k == 0)
                    fill();
                else
                    search();
                break;
            }
            case 7:
            {
                if(k == 0)
                    fill();
                else
                    fold();
                break;
            }
            case 8:
            {
                if(k == 0)
                    fill();
                else
                    analyze();
                break;
            }
            default:
                printf("Exit");
                break;
            }
            if(ch < 1 || ch > 9)
                break;
        }
	return 0;
    }


