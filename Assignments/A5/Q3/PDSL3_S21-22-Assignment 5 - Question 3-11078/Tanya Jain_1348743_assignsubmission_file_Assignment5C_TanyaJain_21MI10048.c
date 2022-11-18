#include<stdio.h>
#include<stdlib.h>

void finding_Saddle_Point();

//maint function
int main(){
    //declaring variables
    int m;
    int n;
    int** Array = (int*)calloc(m,sizeof(int));
    printf("Enter no. rows    : ");
    scanf("%d", &m);
    printf("Enter no. columns : ");
    scanf("%d", &n);

    for(int i=0; i<m; i++){
    Array[i] = (int*)calloc(n,sizeof(int));}

    printf("Enter the array elemets one row at a time\n");
    for(int i=0; i<m; i++){
    for(int j=0; j<n; j++)
    scanf("%d", &Array[i][j]);}

    finding_Saddle_Point(Array, m, n);
    return 0;}

//function to find saddle point
void finding_Saddle_Point(int** Array,int m, int n){
    int INDEX_1, INDEX_2;
    for (int i = 0; i < n; i++){
    int MINIMUM_ROW = Array[i][0];
    int COLUMN_INDEX = 0;
    for (int j = 1; j < n; j++){
    if (MINIMUM_ROW > Array[i][j]){
    MINIMUM_ROW = Array[i][j];
    COLUMN_INDEX = j;}}
 
        
    int k;
    for (k = 0; k < n; k++)
 
            
    if (MINIMUM_ROW < Array[k][COLUMN_INDEX])
    break;
    if (k == n){
    printf("Saddle Point (%d, %d) :  %d",k-1, COLUMN_INDEX,MINIMUM_ROW);
    return;}}
    printf("\nno saddle point exists.");}
