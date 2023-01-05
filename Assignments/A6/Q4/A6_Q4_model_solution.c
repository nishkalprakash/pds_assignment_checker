#include<stdio.h>
#include<stdlib.h>

#define MIN -1000000
int sizeA; // size of set A
int sizeB; // size of set B
int curr_search_set; // set in which currently search is happening (1 - set A, 2 - set B)



/******************************************************************************
 * Helper function to create a set having only uniue elements.
 * 
 * @param arr pointer to an arrau of elements
 * @param n size of the array
 * 
 * @return a pointer to the set.
 *****************************************************************************/
int* helperBuildSet(int *arr, int n){
    // maximum size of the set can be n
    int *set = (int*)malloc(sizeof(int)*n);

    // find the maximum element in the array
    int max_ele = MIN;
    for(int i=0;i<n;i++){
        if(max_ele<arr[i]){
            max_ele = arr[i];
        }
    }

    // allocate an array of size equal to that of maximum element
    int *freq_map = (int*)calloc(max_ele,sizeof(int));

    //traverse the original array and count the frequency of each element
    for(int i=0; i<n; i++){
        freq_map[arr[i]]++;
    }

    //only consider the elements having frequency 1
    int k=0;
    for(int i=0;i<max_ele;i++){
        if(freq_map[i]==1){
            set[k] = i;
            k++;
        }
    }

    return set;
}



/******************************************************************************
 * Read elements and store them in a set.
 * 
 * @param n number of elements
 * 
 * @return a pointer to the set
 *****************************************************************************/
int* BuildSet(int n){

    int *arr = (int*)malloc(sizeof(int)*n);
    printf("Enter the elements: ");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    return helperBuildSet(arr,n);
}



/******************************************************************************
 * Search a set of integers and and find an element in it.
 * 
 * @param A pointer to integer set
 * @param x integer to be searched in set
 * 
 * @return 1 if element is present else returns 0.
 *****************************************************************************/
int SearchSet(int *A, int x){
    int size;
    if(curr_search_set==1){
        size = sizeA;
    }
    else{
        size = sizeB;
    }

    // perform linear search
    for(int i=0; i<size; i++){
        if(A[i]==x){
            return 1;
        }
    }

    return 0;
}


/******************************************************************************
 * Performs union of two sets A and B
 * 
 * @param A pointer to integer set A
 * @param B pointer to integer set B
 * 
 * @return the pointer to the union of sets A and B
 *****************************************************************************/
int* Union(int *A, int *B){

    // size will be addition of sizes of set A and B
    int* temp = (int*)malloc(sizeof(int)*(sizeA+sizeB));

    //put all the elemets of set A in union set
    for(int i=0; i<sizeA; i++){
        temp[i] = A[i];
    }

    //put all the elemets of set B in union set
    for(int i=0; i<sizeB; i++){
        temp[i+sizeA] = B[i];
    }

    // use function helperBuildSet to return the union with no repeating elements
    int *union_set = helperBuildSet(temp,sizeA+sizeB);

}


/******************************************************************************
 * Performs Intersection of two sets A and B.
 * 
 * @param A pointer to integer set A
 * @param B pointer to integer set B
 * 
 * @return the pointer to the intersection of sets A and B.
 *****************************************************************************/
int* Intersection(int *A, int *B){

    // maximum size of intersection will be the smaller of sizeA and sizeB
    int* temp = (int*)malloc(sizeof(int)*(min(sizeA,sizeB)));

    for(int i=0; i<sizeA; i++){
        temp[i] = A[i];
    }

    //put all the elemets of set B in union set
    for(int i=0; i<sizeB; i++){
        temp[i+sizeA] = B[i];
    }

    // use function build set to return the union with no repeating elements
    int *union_set = helperBuildSet(temp,sizeA+sizeB);

}




/******************************************************************************
 * Main function.
 *****************************************************************************/
int main(){
    printf("Enter size of array A: ");
    scanf("%d",&sizeA);
    int* setA = BuildSet(sizeA);

    printf("Enter size of array B: ");
    scanf("%d",&sizeB);
    int* setB = BuildSet(sizeB);

    while(1){
        printf("======================================================\n");
        printf("Press 1 to perform search in set A\n");
        printf("Press 2 to perform search in set B\n");
        printf("Press 3 to perform union of set A and set B\n");
        printf("Press 4 to perform intersection of set A and set B\n");
        printf("Press 5 to perform difference of set A and set B\n");
        printf("Press any other key to exit.\n");
        printf("======================================================\n");

        printf("Enter: ");
        int input;
        scanf("%d",&input);
        int x;
        int res;
        switch (input)
        {
        case 1:
            curr_search_set = 1;
            printf("Enter the element to be searched in set A: ");
            scanf("%d",&x);
            res = SearchSet(setA,x);
            if(res==1){
                printf("%d is present in set A\n",x);
            }
            else{
                printf("%d is not present in set A\n",x);
            }
            break;

        case 2:
            curr_search_set = 2;
            printf("Enter the element to be searched in set B: ");
            scanf("%d",&x);
            res = SearchSet(setB,x);
            if(res==1){
                printf("%d is present in set B\n",x);
            }
            else{
                printf("%d is not present in set B\n",x);
            }
            break;

        case 3: ;
            int *union_set = Union(setA,setB);
            printf("Union: ");
            for(int i=0; i<sizeA+sizeB;i++){
                printf("%d",union_set[i]);
            }
            printf("\n");
            break;
        
        default:
            break;
        }
    }

}