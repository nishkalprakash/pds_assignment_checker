#include <stdio.h>
#include <stdlib.h>

typedef struct Customer{
int accno;
char name[];
int balance;
struct Customer *next;
} cust;


int main(){
int n;
printf("Enter the number of customers: ")
scanf("%d",&n);
return 0;
}
