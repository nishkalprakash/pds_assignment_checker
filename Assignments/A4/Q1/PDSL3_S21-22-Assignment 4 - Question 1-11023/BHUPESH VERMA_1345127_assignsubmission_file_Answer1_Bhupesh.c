#include <stdio.h>


//printing sub arreys
void print_sub(int arr[], int n, int l);

//finding different conbinations
void print_combination(int arr[], int temp[], int start, int end, int index, int l);


int main()
{
//local var
int l , n, i=0, c;
//arr size
printf("enter arrey size:\n");
scanf("%d",&n);
//sub arrey size
printf("enter L:");
scanf("%d",&l);

int arr[n];
//filling arrey
printf("enter arrey element (one at a time):\n");
while(i<n){
printf("enter: ");
scanf(" %d",&c);
arr[i]=c;
i++;
}

print_sub(arr, n, l);
return 0;
}

//printing sub arreys
void print_sub(int arr[], int n, int l){
//temp arr
int temp[l];
print_combination(arr, temp, 0, n-1, 0 , l);

}

//finding different conbinations
void print_combination(int arr[], int temp[], int start, int end, int index, int l){
//printing sub arrey
if (index == l){
for (int j=0; j<l; j++)

printf("%d ", temp[j]);
printf("\n");
return;
}

//filling sub arrey
for (int i=start; i<=end && end-i+1 >= l-index; i++)
{
temp[index] = arr[i];
print_combination(arr, temp, i+1, end, index+1, l);
}

}
