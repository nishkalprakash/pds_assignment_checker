/*
3. Write a C program with the following functions. First, declare a global 5×5 integer array named
dist.
a) main: Fill the array dist with random values in the range [20, 999] such that the upper
triangle and lower triangle are symmetrical. The principal diagonal should be filled with 0s.
Assume that the array dist represents the direct distance between 5 cities (A,B, C, D, and E)
in Km. Display the generated dist array with proper formatting. Now make all distances
more than 150km as -1 indicating disconnected cities. Again display the dist array with
proper formatting. Next, call the following two functions dist2city, distThr1city.
b) dist2city: Read from keyboard two characters in the range A to E (say s and t).
Determine the direct distance between the cities s to t and display it.
d) DistThr1city: Read from keyboard two characters in the range A to E (say s and r, s ≠
r), find the distance between the cities s and r through one intermediate city and display
these. Display the minimum distance between cities s and r through an intermediate city.
 Example Display:
 From A to C via B unreachable
 From A to C via D 200km
 From A to C via E 250 km etc.
 Minimum distance from A to C is via D and is 200Km
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int dist[MAX][MAX];

int dist2city(char s, char t); // Function to find distance between two cities
void distThr1city(char s, char t); // Function to find distance between two cities through one intermediate city
void initDist(); // Function to initialize the distance array
void printDist(int); // Function to print the distance array
int main(){
    int d;
    char s, t;
    initDist();
    printf("Initial distance array:\n");
    printDist(0);
    // printf("\n");
    printf("Distance array with unreachable cities:\n");
    printDist(1);
    printf("Enter two cities in the range A to E: ");
    scanf("%c %c", &s, &t);
    d=dist2city(s, t);
    if(d==-1){
        printf("Distance between %c and %c is unreachable\n", s, t);
    }
    else{
        printf("Distance between %c and %c is %d\n", s, t, d);
    }
    printf("Enter two cities in the range A to E: ");
    scanf("%c %c", &s, &t);
    distThr1city(s, t);

}

// Function to initialize the distance array
void initDist(){
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            if(i==j){
                dist[i][j] = 0;
            }
            else{
                dist[i][j] = rand()%280 + 20;
                dist[j][i] = dist[i][j];
            }
        }
    }
}

// Function to print the distance array
void printDist(int unreachable){
    // Print city names from A to E on both row and coulmn
    printf("\t");
    for(int i=0; i<MAX; i++){
        printf("%3c\t", 'A'+i);
    }
    printf("\n");
    for(int i=0; i<MAX; i++){
        printf("%3c", 'A'+i);
        for(int j=0; j<MAX; j++){
            if (unreachable && dist[i][j]>150){
                dist[i][j] = -1;
            }
            printf("\t%3d", dist[i][j]);
        }
        printf("\n");
    }
}

// Function to find distance between two cities
int dist2city(char s, char t){
    int i = s - 'A';
    int j = t - 'A';
    return dist[i][j];
}

// Function to find distance between two cities through one intermediate city
void distThr1city(char s, char t){
    int i = s - 'A';
    int j = t - 'A';
    int min_dist=999, index;
    // compute disctance between s and t through all intermediate cities
    for(int k=0; k<MAX; k++){
        if(k!=i && k!=j){
            if(dist[i][k]!=-1 && dist[k][j]!=-1){
                if(dist[i][k]+dist[k][j]<min_dist){
                    min_dist = dist[i][k]+dist[k][j];
                    index = k;
                }
                printf("From %c to %c via %c %dkm\n", s, t, 'A'+k, dist[i][k]+dist[k][j]);
            }
            else{
                printf("From %c to %c via %c unreachable\n", s, t, 'A'+k);
            }
        }
    }
    if (min_dist==999){
        printf("No intermediate city between %c and %c\n", s, t);
        return;
    }
    printf("Minimum distance from %c to %c is via %c and is %dkm\n", s, t, 'A'+index, min_dist);
}