/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#define MAX 200

void printArray(int *array, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", array[i]);
        
    }
}
void combinations(int *array, int *result, int i, int n, int length) {
    if (length == i){
        printArray(result, length);
        printf("\n");
        return;
    }

    for (int j = 0; j < n; j++) {
        result[i] = array[j];
       combinations(array, result, i + 1, n, length);
    }
}
int main() {
    int a[MAX],s,b[MAX];
    int l;

    printf("enter size of array");
    scanf("%d",&s);
    printf("l:");
    scanf("%d",&l);
    printf("enter elements: \n");
    for (int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }

    combinations(a, b, 0, s-1, l);
    return 0;

}