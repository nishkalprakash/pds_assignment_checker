

    
#include <stdio.h>


int sumOfDigits(int num) {

    int sum = 0;

    while (num > 0) {

        sum += num % 10;

        num /= 10;

    }

    return sum;

}


int main() {

    int n;

    

    printf("Enter the number of integers: ");

    scanf("%d", &n);

    

    if (n <= 1) {

        printf("Please enter at least two integers.\n");

        return 1; 

    }

    

    int largest = 0;

    int secondLargest = 0;

    

    for (int i = 0; i < n; i++) {

        int num;

        printf("Enter integer %d: ", i + 1);

        scanf("%d", &num);

        

        int sum = sumOfDigits(num);

        

        if (sum > largest) {

            secondLargest = largest;

            largest = sum;

        } else if (sum > secondLargest && sum < largest) {

            secondLargest = sum;

        }

    }

    

    printf("Largest sum of digits: %d\n", largest);

    printf("Second largest sum of digits: %d\n", secondLargest);

    

    return 0;

}




      
  
