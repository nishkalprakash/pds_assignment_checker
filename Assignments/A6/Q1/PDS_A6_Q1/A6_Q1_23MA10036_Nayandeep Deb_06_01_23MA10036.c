//Name: Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>
#include <stdlib.h>
void Fill ();  //declaration of all functions
void Exchange ();
void Right();
void Left ();
void Segregate ();
void Search ();
void Fold ();

int arr[100], size;

int main() { //giving menu choices infinite man times till exited
  printf("Menu Choices:\n\n i. 1 ---- Fill\n ii. 2 ---- Exchange\n iii. 3 ---- Rotate Right\n iv. 4 ---- Rotate Left\n v. 5 ---- Segregate\n vi. 6 ---- Search\n vii. 7 ---- Fold\n viii. 8 ---- Analyze\n ix. 0,9 or any higher number ---- Exit\n");

  int x;

  while (1) { //infinite loop with exit condition
    printf("Input function number: ");
    scanf("%d", &x);
    switch (x) {
    case 0: return 0;
    case 1: {Fill(); break;}
    case 2: {Exchange(); break;}
    case 3: {Right(); break;}
    case 4: {Left(); break;}
    case 5: {Segregate(); break;}
    case 6: {Search(); break;}
    case 7: {Fold(); break;}
      /*case 8: {Analyze(); break;}*/
    default: return 0;
    }
  }
  return 0;
}

void Fill () { 
  do {
    printf("Size of Array: ");
    scanf("%d", &size);
  }
  while ( size < 1 || size > 100); //randomly filling variables in arrayand displaying
  for (int i = 0; i < size; i++) arr[i] = (rand()%900)+ 100;
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
  return;
}

void Exchange () {
  printf("Original Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
  for (int i = 0; i < (size/2); i++) {
    int a = arr[i];
    if (size%2 == 1) { //odd condition
      arr[i] = arr[i + (size/2 +1)]; // +1 needed in odd condition to switch properly
    arr [i + (size/2 +1)] = a;
    }
    else if (size%2 == 0) { //even condition
      arr[i] = arr[i + (size/2)]; //switching done using variable stroing value of one array index
      arr [i + (size/2)] = a;
    }
  }
  printf("Exchanged Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
}

void Right() {
  printf("Original Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
  for (int i = 1; i < size; i++) { //rotating right by swapping consecutive values (from 1 onwards) with 0 to eventially have last array index value to loop over to arr[0]
    int a = arr[0];
    arr[0] = arr[i];
    arr [i] = a;
    }
  printf("Right Rotated Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
}

void Left () {
  printf("Original Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
  for (int i = size - 2; i >=  0; i--) { //rotating left by taking the last value and looping consecutive values from it till first index
    int a = arr[size - 1];
    arr[size - 1] = arr[i];
    arr [i] = a;
    }
  printf("Left Rotated Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
}

void Segregate () {
  printf("Original Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
  for (int i = 0; i < size; i++) { //bubble sort method to gradually sort odd to right and even to left
    for (int j = 0; j < size-1; j++) {
      if ((arr[j]%2 == 1) && (arr[j+1]%2 == 0)) {
	int a = arr[j];
	arr[j] = arr[j+1];
	arr [j+1] = a;
      }
    }
  }
  printf("Segregated Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
}

void Search () {
  printf("Original Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
  int b, cnt = 0;
  printf("Input Integer to be searched: ");
  scanf("%d", &b);
  for (int i = 0; i < size; i++) { // checking each array number for match with search number
    if ( arr[i] == b) {
      printf("%d is stored at array index arr[%d]\n", b, i);
      cnt++;
    }
  }
  if (cnt == 0) printf("Not Found\n"); //not found condition
}

void Fold () {
  printf("Original Array\n");
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
  int arr1[100];
  if (size%2 == 0) { //even condition
    for (int i = 0; i < size/2; i++) {
      arr1[i] = arr[i] + arr[size - i - 1]; //first gets added to last and stored in another array
    }
    printf("Folded Array\n");
  for (int i = 0; i < size/2; i++) printf("%d ", arr1[i]);
  printf("\n");
  }
  else if (size%2 == 1) { //odd condition
    for ( int i = 0; i < size/2; i++) {
      arr1[i] = arr[i] + arr[i + (size - i - 1)]; //same as even except middle digit is left untouched
    }
    arr1[size/2] = arr[size/2]; //storing middle digit seperately
    printf("Folded Array\n");
  for (int i = 0; i <= size/2; i++) printf("%d ", arr1[i]);
  printf("\n");
  }
}
