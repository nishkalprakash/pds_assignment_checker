    // Shikhar Gautam
    // Roll No. = 22CE10073
    // Section = 2
    // Set - A

    #include <stdio.h>

    float mean(int *array, int n); //Declaring our function to calculate mean

    int main(){

    int n; //Declaring variable to demand size of array

    printf("Enter the size of array : ");
    scanf("%d", &n); //Taking input for size of array

    printf("\n");

    int array[n]; //Declaring our array of size n

    printf("Enter array elements : ");
    for(int i=0; i<n; i++){

        scanf("%d", &array[i]); //Taking input for array elements

    }

    printf("\n");

    printf("List : ");
    for(int i=0; i<n; i++){

        printf("%d\t", array[i]); //printing our array elements
    }

    printf("\n");
    printf("\n");

    mean(&array, n); //Calling our function to calculate mean

    return 0;

    }

    //Defining our function to calculate mean

    float mean(int *array, int n){

    float sum = 0;
    for(int i=0; i<n; i++){

        sum = sum + array[i]; //First we are calculating sum of elements

    }

    float mean; //Declaring variable to store mean value

    mean = (float)(sum/n); //Calculating the mean value

    printf("Mean : %f\n", mean); //Printing the value of mean also in function

    }

