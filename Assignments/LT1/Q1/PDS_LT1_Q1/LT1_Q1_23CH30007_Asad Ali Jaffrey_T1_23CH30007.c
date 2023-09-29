//Roll No.-23CH30007
//Name-Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

int main() {
  unsigned int n, n_stored;
  int last_digit, place_val=1, encoded_n=0, check_sum=0, with_checksum;
  long int double_encoded=0;
  printf("Enter a positive integer less than 9999\n");
  scanf("%u",&n);

  n_stored=n;    //for using value of n later as variable n will be modified

  if (n<9999) {
    while (n>0) {
      last_digit = n%10 + 1;     //encoding
      encoded_n = encoded_n + last_digit*place_val;   
      place_val = place_val*10;
      n=n/10;

      if (last_digit==10) {
	place_val=place_val*10;    //as 10 takes 2 places so the next number must be multiplied by an extra 10
	check_sum = check_sum +1;
      }

      else {
	check_sum = check_sum + last_digit;
      }
    }

    with_checksum = encoded_n*100 + check_sum;

    printf("The integer input by the user is %u\n",n_stored);
    printf("The encoded integer is %d\n", encoded_n);
    printf("The encoded integer with checksum is %d\n", with_checksum);

    place_val=10;

    //LAST PART
    while (with_checksum>0) {
      last_digit = with_checksum%10;
      double_encoded = double_encoded + last_digit*place_val;
      place_val=place_val*100;
      with_checksum = with_checksum/10;
    }

    printf("The double encoded integer is %ld\n", double_encoded);
    
  }

  return 0;
}

