// 22PH10002
// Lab Test 1
// Problem 2
#include <stdio.h>

int main(){
    // Part a
    // Scanning and storing integer
    int i;
    printf("Enter the Integer: ");
    scanf("%d", &i);
        // For cases where user enters 0, asking for valid integer
    while(i==0){
        printf("\nEnter valid Integer: ");
        scanf("%d", &i);
    }

    // Part b
    // Throughout this part assuming replica variables to store value of i safely in variable i but being able to use the value freely elsehwere
    int index = 0, i1 =i,ten = 1;
    // Variable index is used as a counter and is used to indicate the number of digits
    // Variable i1 is replica to be used
    // Variable ten is used as divisor, it equals to 10 raised to the power of index
    if(i1<0){i1 = i1*-1;} // Taking absolute value of i1 for finding number of digits
    while(i1>0){
        i1/=10;
        index++;
        ten*=10;
    }
    // Case 1: i is odd
    if(i%2){
        ten/=10;        // Divide by 10 to get 1 index less because of the way we use 'ten' here
        int i2 = i;     // Replica variable i2
        if(i2<0){i2 = i2*-1;} // Taking absolute value to print properly
        printf("\nMost significant digits to least significant digits:\n");
        // This step is supposed to be a part of the loop but to print in the given format using commas we do this one step outside the loop and use a different print format
        printf("%d", i2/ten);
        ten/=10;
        index--;
        // Using index as counter, we use the logic that desired sub integers are just quotients of dividing by different powers of 10
        while(index--){
            printf(", %d", i2/ten);
            ten/=10;
        }
    }
    // Case 2: i is even
    else{
        int i3 = i;     // Replica variable i3
        if(i3<0){i3 = i3*-1;} // Taking absolute value to print properly
        printf("\nLeast significant digits to most significant digits:\n");
        // This step is supposed to be a part of the loop but to print in the given format using commas we do this one step outside the loop and use a different print format
        printf("%d", i3);
        i3%=ten;
        ten/=10;
        --index;
        // Using index as counter, we use the logic that desired sub integers are just remainders of dividing by different powers of 10
        while(index--){
            printf(", %d", i3%ten);
            ten = ten/10;
        }
    }

    //Part c
    int revi = 0, i4 = i; // Defining variables revi for storing reverse number and i4 as replica
    // Using logic that if we remove the last digit by dividing i4 by 10, the remainder of dividing i4 by 10 gives the next needed digit for the reverse
    while(i4!=0){
        revi = revi*10 + i4%10;
        i4 = i4/10;
    }
    printf("\n\nReverse number = %d", revi);
    int diff; // Defining variable to store difference which is bigger number - smaller number
    if(revi > i){diff = revi - i;}
    else{diff = i - revi;}
    printf("\nDifference between reverse and original number = %d", diff);

return 0;
}
