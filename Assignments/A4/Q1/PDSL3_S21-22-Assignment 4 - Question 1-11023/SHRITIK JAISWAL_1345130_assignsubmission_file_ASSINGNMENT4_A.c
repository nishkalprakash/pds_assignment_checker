//SHRITIK JAISWAL
//21BT30026
//MACOS
//CODE FOR PRINTING ALL COMBINATIONS OF lenght L and Array size n
 #include<stdio.h>
 //Declaring A function PRINTcombination which helps to print the given combination
void PRINTcombination(int ARRAY[], int i,int L,int tempo[], int index, int n) ;
int main() 
{
    //declaring the vaariables as integers
	int n;
    int L;
    int ARRAY[n];
    int tempo[L];
    //Taking the input of number of elements of array
	printf("Enter number of elements of array: ");
	scanf("%d", &n);

	printf("Enter %d elements for array:\n", n);
	for (int i = 0; i < n; i++) scanf("%d", &ARRAY[i]);
	printf("Enter I: ");

    //taking the input of lenght of L for the combinations
	scanf("%d", &L);
	PRINTcombination(ARRAY,0,L,0,tempo,n);

	return 0;
}
//creating a function called "PRINTcombination" which is of a type of void and returns nothing it just prints te combinations
void PRINTcombination(int ARRAY[], int i, int L, int tempo[], int index, int n) 
{
	if (L==index) 
    {
        int J=0;
		for( J=0;J<L;J++)
        // Printing the numbers of lenght L
		printf(" %d ", tempo[J]);
        // printing new line for a new combination
		printf("\n");
		return;
	}
	if (i >= n)
		return;

	tempo[index] = ARRAY[i];    
    //Calling the function  "PRINTcombination" itself within the function/ Recursion                       
	PRINTcombination(ARRAY, i, L, tempo,index+1, 0);   
    //Recursion for index 1 less than previous to print  all the combinations
	PRINTcombination(ARRAY, i+1, L, tempo ,index ,0);   
}
