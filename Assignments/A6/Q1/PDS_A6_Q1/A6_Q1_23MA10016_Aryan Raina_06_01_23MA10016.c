//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[100], size = 0;

/* This function takes in the user input stores it in the variable size and then uses rand to create an array of that size filled with random integers between [100,999] */
void fill() {
  // The do while loop keeps prompting the user for input until the input is in the correct range.
  do {
    printf("Enter the size of the array (1 to 100): ");
    scanf("%d", &size);
  } while (!(1 <= size && size <= 100));

  //rand() % 900 gives output in range [0,899] therefore that +100 gives output in range [100,999]
  printf("arr = [");
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 900 + 100;
    printf("%d, ", arr[i]);
  }
  printf("\b\b]\n\n");
}

//-------------------------------------------------------

/* This function exchanges the first half and latter half of the array*/
void exchange() {
  printf("Original Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n");

  // offset stores the offset we need to add to get the ith element of latter half, it is equal to ceil of size/2
  int offset = (size + 1)/2;
  for (int i = 0; i < size/2; i++) {
    // we swap the element at ith indice in first half and latter half
    int temp = arr[i];
    arr[i] = arr[offset+i];
    arr[offset+i] = temp;
  }
  
  printf("Updated Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n\n");
}

//---------------------------------------------------------------

/* This function moves all the elements in array one towards the right and moves the last element to first */
void rotateRight() {
  printf("Original Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n");

  // storing the last element as it will get updated in the loop
  int lst = arr[size-1];
  /* This loop updates the value at i-th indice we are using a reverse loop because we are updating using the previous value so if we were to use a loop in forward direction we will use updated value of previous indice to update the current one*/
  for (int i = size-1; i >= 1; i--)
    arr[i] = arr[i-1];
  arr[0] = lst;
  
  printf("Updated Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n\n");
}

//------------------------------------------------------------

/* This function moves all the elements in array one towards the left and moves the first element to last */
void rotateLeft() {
  printf("Original Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n");

  // first is used to store the first element of our array because it will get updated in the loop. 
  int frst = arr[0];
  // we use the next element to update the current element
  for (int i = 0; i < size-1; i++)
    arr[i] = arr[i+1];
  arr[size-1] = frst;
  
  printf("Updated Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n\n");
}

//-----------------------------------------------------------------

/* This function segregates the array where all the elements in start are even and all in end are even and the order is maintained same as in original array*/
void segregate() {
  printf("Original Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n");

  // size of even portion of array
  int esz = 0;
  // gets the even element then moves it to the end of current even portion
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 1) continue;
    for (int j = i-1; j >= esz; j--) {
      int tmp = arr[j+1];
      arr[j+1] = arr[j];
      arr[j] = tmp;
    }
    esz++;
  }

  printf("Updated Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n\n");
}

//-------------------------------------------------------------

/* Looks for a number given by user in the array and prints the indice for it */
void search() {
  printf("Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n");

  printf("Enter the integer to be searched: ");
  int x;
  scanf("%d", &x);

  // Linear search to find the element and terminate function if found
  for (int i = 0; i < size; i++) {
    if (arr[i] == x) {
      printf("Found at %d\n\n", i);
      return;
    }
  }

  // only runs if the function doesnt terminate therefore no element found
  printf("Not Found.\n\n");
}

//-----------------------------------------------------------
/* Prints the folded array */
void fold() {
  printf("Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n");

  // folded array has sum of ith element from start and ith element from end
  printf("Folded Array : [");
  for (int i = 0; i < size/2; i++)
    printf("%d, ", arr[i] + arr[size-1-i]);

  // if size is odd print the middle element at the end
  if (size % 2 == 1) printf("%d, ", arr[size/2]);

  printf("\b\b]\n\n");
}

//---------------------------------------------------------------
/* Prints the increasing subsequences of the array and the largest subsequence */
void analyze() {
  printf("Array : [");
  for (int i = 0; i < size; i++)
    printf("%d, ", arr[i]);
  printf("\b\b]\n");

  int pos = 0, len = 1, mpos = 0, mlen = 1;

  printf("\nThe increasing sequences are: ");
  
  for (int i = 1; i < size; i++) {
    /* Increase len if sequence is continued else print the sequence if it is not just one element and reset the pos and len*/
    if (arr[i] > arr[i-1]) len++;
    else {
      if (len > 1) {
	printf("(");
	for (int j = pos; j < pos + len; j++)
	  printf("%d, ", arr[j]);
	printf("\b\b), ");
      }
      
      len = 1; pos = i;
    }

    /* if current length is more than the max one we have stored update */
    if (len > mlen) {
      mlen = len; mpos = pos;
    }
  }

  /* if the final sequence is not just one element print it */
  if (len > 1) {
    printf("(");
    for (int j = pos; j < pos + len; j++)
      printf("%d, ", arr[j]);
    printf("\b\b)\n");
  }

  printf("\nThe largest increasing sequence is: (");
  for (int i = mpos; i < mpos + mlen; i++)
    printf("%d, ", arr[i]);
  printf("\b\b)\n\n");
}

//----------------------------------------------------------

int main() {
  srand(time(0));
  
  while (1) {
    printf("1 ---- Fill\n");
    printf("2 ---- Exchange\n");
    printf("3 ---- Rotate right\n");
    printf("4 ---- Rotate left\n");
    printf("5 ---- Segregate\n");
    printf("6 ---- Search\n");
    printf("7 ---- Fold\n");
    printf("8 ---- Analyze\n");
    printf("0,9 or any higher number ---- Exit\n");

    printf("\nEnter the User input: ");
    int inp;
    scanf("%d", &inp);
    printf("\n");

    if (inp == 1) fill();
    if (inp == 2) exchange();
    if (inp == 3) rotateRight();
    if (inp == 4) rotateLeft();
    if (inp == 5) segregate();
    if (inp == 6) search();
    if (inp == 7) fold();
    if (inp == 8) analyze();
    if (inp == 0 || inp >= 9) break;
  }

  printf("Program Terminated.\n");
}
