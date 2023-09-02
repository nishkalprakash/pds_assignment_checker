// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include<stdio.h>
int main ()
{
  printf("\nEnter the details asked below. Please Enter the marks scored between 0 and 100.\n");
  int R1, R2, R3, R4, R5;
  
  int A1, B1, C1, D1, E1;
  printf("\nEnter the Roll No. of Student-1: ");
  scanf("%d", &R1);
  printf("Enter the marks scored by Student-1 in subjects A, B, C, D, E (provide space between each entry): ");
  scanf("%d%d%d%d%d", &A1, &B1, &C1, &D1, &E1);

  int A2, B2, C2, D2, E2;
  printf("\nEnter the Roll No. of Student-2: ");
  scanf("%d", &R2);
  printf("Enter the marks scored by Student-2 in subjects A, B, C, D, E (provide space between each entry): ");
  scanf("%d%d%d%d%d", &A2, &B2, &C2, &D2, &E2);

  int A3, B3, C3, D3, E3;
  printf("\nEnter the Roll No. of Student-3: ");
  scanf("%d", &R3);
  printf("Enter the marks scored by Student-3 in subjects A, B, C, D, E (provide space between each entry): ");
  scanf("%d%d%d%d%d", &A3, &B3, &C3, &D3, &E3);

  int A4, B4, C4, D4, E4;
  printf("\nEnter the Roll No. of Student-4: ");
  scanf("%d", &R4);
  printf("Enter the marks scored by Student-4 in subjects A, B, C, D, E (provide space between each entry): ");
  scanf("%d%d%d%d%d", &A4, &B4, &C4, &D4, &E4);

  int A5, B5, C5, D5, E5;
  printf("\nEnter the Roll No. of Student-5: ");
  scanf("%d", &R5);
  printf("Enter the marks scored by Student-5 in subjects A, B, C, D, E (provide space between each entry): ");
  scanf("%d%d%d%d%d", &A5, &B5, &C5, &D5, &E5);

  printf("\n\n\t\t\t\t\t Marks scored by the Students\n");
  printf("SL No.   Roll No.    \t A  \t   B  \t   C  \t   D  \t   E\n\n");
  printf("1        %d          \t %d \t   %d \t   %d \t   %d \t   %d\n", R1, A1, B1, C1, D1, E1);
  printf("2        %d          \t %d \t   %d \t   %d \t   %d \t   %d\n", R2, A2, B2, C2, D2, E2);
  printf("3        %d          \t %d \t   %d \t   %d \t   %d \t   %d\n", R3, A3, B3, C3, D3, E3);
  printf("4        %d          \t %d \t   %d \t   %d \t   %d \t   %d\n", R4, A4, B4, C4, D4, E4);
  printf("5        %d          \t %d \t   %d \t   %d \t   %d \t   %d\n", R5, A5, B5, C5, D5, E5);

  printf("\nThankyou\n\n");
  return 0;
}
  
  
