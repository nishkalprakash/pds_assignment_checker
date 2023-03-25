
#include <stdio.h>

int main() {
    int nums[5];
    printf("Enter five numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    int odd_count = 0;
    int even_count = 0;
    for (int i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    if (odd_count == 3) {
        
        int odds[3];
        int j = 0;
        for (int i = 0; i < 5; i++) {
            if (nums[i] % 2 != 0) {
                odds[j] = nums[i];
                j++;
            }
        }
        for (int i = 0; i < 2; i++) {
            for (int j = i+1; j < 3; j++) {
                if (odds[i] > odds[j]) {
                    int temp = odds[i];
                    odds[i] = odds[j];
                    odds[j] = temp;
                }
            }
        }
        printf("Smallest three odd numbers: %d %d %d\n", odds[0], odds[1], odds[2]);
    } else if (even_count == 3) {
        
        int largest = nums[0];
        for (int i = 1; i < 5; i++) {
            if (nums[i] % 2 == 0 && nums[i] > largest) {
                largest = nums[i];
            }
        }
        printf("Largest number: %d\n", largest);
    } else {
        printf("Invalid input: You must enter exactly three odd or three even numbers.\n");
    }

    return 0;
}
