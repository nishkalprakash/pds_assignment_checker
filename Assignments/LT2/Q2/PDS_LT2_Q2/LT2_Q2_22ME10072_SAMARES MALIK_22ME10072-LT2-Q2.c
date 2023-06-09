
/*name - samares malik
  sec 2 labtest q2
  roll no-22ME10072*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef struct record{ //CREATING THE RECORD AS GIVEM IN THE QUESTION
    char roll[10];
    char br[3];
    char dob[11];

}record;
int main(){
    int n,m=0;
    char a[5];
    scanf("%d",&n);
    if((n>100)||(n<0)){
        printf("Invalid value of N\n");
    }
    else{
        record* arr = (record*)malloc(n*(sizeof(record)));
    //record* temp = (record*)calloc(n,sizeof(record));
    for(int i=0;i<n;i++){
        scanf("%s",&arr[i].roll);//taking input of roll no
        scanf("%s",&arr[i].br);//taking input of branch
        scanf("%s",&arr[i].dob);//taking input of dob
    }
    scanf("%s",&a);
    for(int i=0;i<n;i++){
        char t[5];
        for(int j=0;j<4;j++){
            t[j] = arr[i].dob[6+j];
        }//extracting out the year from the dob and storing it in a temporary array
        t[4] = '\0';//making it a valid string
        if(strcmp(t,a)<0){
            m+=1;
            printf("Deleted Record: %s %s %s\n",arr[i].roll,arr[i].br,arr[i].dob);
            //replacing the record which is to be deleted with the next record
            if(i!=n-1){
                strcpy(arr[i].br,arr[i+1].br);
                strcpy(arr[i].roll,arr[i+1].roll);
                strcpy(arr[i].dob,arr[i+1].dob);
            }
        }
    }
    if(m==0){
        printf("No records deleted\n");//if no record is deleted
    }
    printf("m = %d, n - m = %d\n",m,n-m);//printing the values of m and n-m
    arr = realloc(arr,(n-m)*sizeof(record));//reallocation the array to n-m size
    printf("Remaining Records:\n");
    if(n-m!=0){//checking if any record is there or not
        for(int i=0;i<n-m;i++){
        printf("%s %s %s\n",arr[i].roll,arr[i].br,arr[i].dob);
        }
    }
    else{
        printf("No records remaining");
    }
    }




    return 0;

}
