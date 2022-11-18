#include<stdio.h>

/*name-Chetna
  dep-CSE
  Roll no.-21CS10019
  package-codeblocks*/

 void fun(int save[], int a[], int print, int I, int st, int en);
 int all_combinations(int a[], int n, int l);

int main(){
    int arr[40], n, l;

    printf("Enter the number of elements in array\n");  //asking user for value of n
    scanf("%d",&n);

    printf("Enter the value of length:\n");      //asking user for value of length of array
    scanf("%d",&l);

    printf("Elements of array are:\n");

    for(int i=0; i<n; i++)scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)printf("%d  ", arr[i]);
    printf("\n");
    printf("All the combinations of array are : \n");

    all_combinations(arr, n, l);
    return 0;
}
void fun(int save[], int a[], int print, int l, int st, int en)
{
    if (print == l)
    {
        for (int i = 0; i < l; i++)
            printf("%d ", a[save[i]]);
        printf("\n");
        return;
    }
    for (int i = st; i <= en; i++)
    {
        save[print] = i;
        fun(save, a, print+1, l, i, en);
    }
    return;
}
int all_combinations(int a[], int n, int l)
{
    int save[l+1];
    fun(save, a, 0, l, 0, n - 1);
}
