/*name:shivam chagan ratne
 roll no :21PH10033
 ASSINGMENT QUESTION 1 SOLUTION*/
 
 #include <stdio.h>
void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r);


void printCombination(int arr[], int n, int r)
{

    int data[r];


    combinationUtil(arr, data, 0, n-1, 0, r);
}


void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r)
{

    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }


    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}


int main()

{
    int i,m,I;
     printf("no. of elements \n");
     scanf("%d",&m);
     int arr[m];
    printf("Enter array elements : ");
	for(i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value of index : ");
	scanf("%d",&I);


    printCombination(arr, 0, 0);
}