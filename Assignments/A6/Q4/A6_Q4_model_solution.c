// Code creator: Abhishek Topwal (topwalabhi1998@kgpian.iitkgp.ac.in)
#include<stdio.h>
#include<stdlib.h>

#define MIN -2147483646
#define MAX 2147483647
int sizeA; // size of set A
int sizeB; // size of set B
int union_size; // size of union of set A and B
int intersection_size; // size of intersection of set A and B
int difference_size; // size of difference of set A and B
int curr_set; // current working set
//(1 - set A, 2 - set B,3-union set)



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

    for(int i=0;i<n-1;i++)
    {   
        int curr_ele = arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]==curr_ele){
                arr[j] = MAX;
            }
        }
    }

    // find the number of unique elements
    int unique_count=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=MAX){
            unique_count++;
        }
    }

    // to set the size of current working set
    if (curr_set==1){
        sizeA = unique_count;
    }
    else if(curr_set==2){
        sizeB = unique_count;
    }
    else if(curr_set==3){
        union_size = unique_count;
    }


    // allocate a memory equal to number of unique elements
    int *set = (int*)malloc(sizeof(int)*unique_count);

    // traverse the array and take all elements not equal to MAX
    int k=0;
    for(int i=0; i<n;i++){
        if(arr[i]!=MAX){
            set[k++] = arr[i];
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
    if(curr_set==1){
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

    // size of union set will be addition of sizes of set A and B
    int* temp = (int*)malloc(sizeof(int)*(sizeA+sizeB));

    //put all the elemets of set A in union set
    for(int i=0; i<sizeA; i++){
        temp[i] = A[i];
    }

    //put all the elemets of set B in union set
    for(int i=0; i<sizeB; i++){
        temp[i+sizeA] = B[i];
    }

    curr_set = 3;
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

    // first get the size of the intersection
    int count=0;
    for(int i=0; i<sizeA; i++){
        int curr_ele = A[i];
        for(int j=0; j<sizeB; j++){
            if(curr_ele==B[j]){
                count++;
            }
        }
    }

    intersection_size = count;
    // allocate memory equal to the size of intersection set
    int *intersect_set = (int*) malloc(sizeof(int)*count);

    int k=0;
    for(int i=0; i<sizeA; i++){
        int curr_ele = A[i];
        for(int j=0; j<sizeB; j++){
            if(curr_ele==B[j]){
                intersect_set[k++] = A[i];
            }
        }
    }

    return intersect_set;

}



/******************************************************************************
 * Finds Difference of two sets A and B.
 * 
 * @param A pointer to integer set A
 * @param B pointer to integer set B
 * 
 * @return the pointer to difference of sets A and B.
 *****************************************************************************/
int* Difference(int* A,int* B){

    // get the intersection of two sets
    int *intersect = Intersection(A,B);

    // get the union of two sets
    int *union_set = Union(A,B);

    // get the size of the difference set
    int count=0;
    for(int i=0;i<union_size;i++){
        int flag = 0;
        for(int j=0;j<intersection_size;j++){
            if(union_set[i]==intersect[j]){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }


    difference_size = count;

    // allocate memory equal to the size of difference set
    int *difference_set = (int*) malloc(sizeof(int)*count);

    int k=0;
    for(int i=0;i<union_size;i++){
        int flag = 0;
        for(int j=0;j<intersection_size;j++){
            if(union_set[i]==intersect[j]){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            difference_set[k++] = union_set[i];
        }
    }

    return difference_set;
}



/******************************************************************************
 * Main function.
 *****************************************************************************/
int main(){
    int size1;
    printf("Enter size of array A: ");
    scanf("%d",&size1);
    curr_set = 1;
    int* setA = BuildSet(size1);

    int size2;
    printf("Enter size of array B: ");
    scanf("%d",&size2);
    curr_set = 2;
    int* setB = BuildSet(size2);

    while(1){

        printf("\n======================================================\n");
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
        int flag=0;
        switch (input)
        {
        case 1:
            curr_set = 1;
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
            curr_set = 2;
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
            for(int i=0; i<union_size;i++){
                printf("%d ",union_set[i]);
            }
            printf("\n");
            break;

        case 4: ;
            int *intersection_set = Intersection(setA,setB);
            printf("Intersection: ");
            for(int i=0; i<intersection_size;i++){
                printf("%d ",intersection_set[i]);
            }
            printf("\n");
            break;

        case 5: ;
            int *difference_set = Difference(setA,setB);
            printf("Difference: ");
            for(int i=0; i<difference_size;i++){
                printf("%d ",difference_set[i]);
            }
            printf("\n");
            break;
        
        default:
            flag=1;
            break;
        }
        if(flag==1){
            printf("****  EXIT  ****\n");
            break;
        }
    }
}