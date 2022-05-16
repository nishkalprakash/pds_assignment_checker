#include<stdio.h>
int main(){
    char dna1[50];
    char dna2[50];
    int length1=0, length2=0, count=0, small, large;
    printf("Sequence1   ");
    scanf("%s", dna1);
    printf("Sequence2   ");
    scanf("%s", dna2);

    for(int j=0; j<50; j++){
        if(dna1[j] == '\0'){
            break;
        }
        else{
            length1++;
        }
    }
    for(int j=0; j<50; j++){
        if(dna2[j] == '\0'){
            break;
        }
        else{
            length2++;
        }
    }
    if(length1 < length2){
        small = length1;
        large = length2;
    }
    else{
        small = length2;
        large = length1;
    }
    if(large-small > 2){
        printf("The length of the two sequences will differ by maximum 2 characters");
        return 0;
    }
    if(small == large){                     //sequences are of same size
        printf("Penalty    ");
        for(int j=0; j<small; j++){
            if(dna1[j] != dna2[j]){
                printf("1");
                count++;
            }
            else{
                printf("0");
            }
        }
        printf("\nSimilarity score = %d\n", count);
    }
    else if(large - small == 1){        //size of sequences differ by 1
        
    }
    // printf("%d %d", small, large);
    return 0;
}