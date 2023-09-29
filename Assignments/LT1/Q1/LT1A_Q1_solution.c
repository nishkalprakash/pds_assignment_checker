#include <stdio.h>

int main() {
    int n;

    // Step 1: Read a positive integer less than 9999 from the user
    printf("Enter a positive integer less than 9999: ");
    scanf("%d", &n);
    if(n >9998) {printf("number is greater than 9999...returning!"); return 0;}

    int originalNumber = n;
    int encodedNumber = 0;
    long int position = 1;
    int checksum = 0;

    // Step 2: Encode each digit in the number and construct the encoded number
    while (n > 0) {
        int digit = n % 10;
        
        // Encode the digit as specified
        if (digit < 9) {
            digit++; // Increment the digit
            // Update the checksum with the encoded digit
            checksum += digit;
        } else {
            digit = 10; // Digit 9 is encoded as 10
            // Update the checksum with the encoded digit
            checksum += 1;
        }

        // Construct the encoded number by adding encoded digits with appropriate position
        encodedNumber = digit * position + encodedNumber;
        if (digit==10) position*=100;
        else position *= 10; // Move to the next position
        
        
        n /= 10; // Move to the next digit
    }

    // Step 3: Calculate the 2-digit checksum (lowest 2 digits of the sum)
    checksum %= 100;

    // Step 4: Add the checksum to the encoded number
    checksum = encodedNumber * 100 + checksum;

    // Step 5: Double encode the number by inserting a 0 after each digit
    long doubleEncodedNumber = 0;
    position = 10;
    
    int copychecksum=checksum;
    while (copychecksum > 0) {
        int digit = copychecksum % 10;
        
        // Insert a 0 after each digit in the double encoding
        doubleEncodedNumber = digit * position + doubleEncodedNumber;
        position *= 100; // Move two positions to insert a 0
        copychecksum /= 10; // Move to the next digit in the encoded number
    }

    // Step 6: Print the results with the correct variable names
    printf("\n input: %d -> encoded: %d -> with checksum %d -> double encoded: %ld\n",
           originalNumber, encodedNumber, checksum, doubleEncodedNumber);

    return 0;
}
