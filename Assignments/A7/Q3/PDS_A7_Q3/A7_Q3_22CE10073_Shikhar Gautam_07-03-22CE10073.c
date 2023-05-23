#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int n; // declaring variable to store n names
    int m; // declaring variable to store m names

    printf("Enter n : "); // taking input for n
    scanf("%d", &n);

    printf("Enter m : "); // taking input for m
    scanf("%d", &m);

    char X[100]; // declaring pointer of array X
    char Y[100]; // declaring pointer of array Y
    char Z[100]; // declaring array Z

    *X = (char*)calloc(500,sizeof(char)); // demanding size for array X

    *Y = (char*)calloc(500,sizeof(char)); // demanding size for array Y

    printf("Enter %d names in X array : ", n);
    for(int i=0; i<n; i++){
       fgets(X,100,stdin); // taking input for names in array X
    }
    puts(X); // printing name stored in X

    printf("Enter %d names in Y array : ", m);
    for(int i=0; i<m; i++){
       fgets(Y,100,stdin); // taking input for names in array Y

    }
    puts(Y); // printing name stored in Y

    strcpy(Z, X); // copying array X names in array Z
    strcpy(Z, Y); // copying array Y names in array Z

    puts(Z); // printing array Z

return 0;
}
