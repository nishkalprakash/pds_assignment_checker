// Name -Modi Meet
// Roll no - 22ME10053
// LAB TEST 2 Q1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// Defining structure Person

typedef struct{
    char name[31];
    char passport_no[11];
    char nationality[16];
    struct DOB{
        char date[12];
    }dob;
}Person;

// function for reading the inputs

void read(Person *a){
    printf("Enter the details one by one as per input clicking enter after reading a string since ch is used to absorb newline char :\n");
    fflush(stdin);
    char ch = getchar();
    scanf("%[^\n]",a->name);
    char c = getchar();
    scanf("%[^\n]",a->passport_no);
    char c1 = getchar();
    scanf("%[^\n]",a->nationality);
    char c2 = getchar();
    printf("Enter the dob as a string :\n");
    scanf("%[^\n]",(*a).dob.date);
}

// Printing the inputs

void print(Person a){
    printf("%s\n",(a.name));
    printf("%s  ",a.passport_no);
    printf("%s  ",a.nationality);
    printf("%s ",a.dob.date);

}


int main(){
    int n;
    Person *Persons=NULL;
    printf("Enter the value of no of persons :\n");
    scanf("%d",&n);
    Persons =(Person*)calloc(n,sizeof(Person));
    int i,j,k;
    for(i=0;i<n;i++){
        read(&Persons[i]);
    }
    for(i=0;i<n;i++){
        printf("** Person %d **\n",i);
        print(Persons[i]);
        printf("\n");
    }

    // Reading values for 2nd time

    printf("Enter the no of records(m) for part 5:\n");
    int m;
    scanf("%d",&m);
    Person *Persons2=NULL;
    Persons2 = (Person*)calloc(m,sizeof(Person));
    for(i=0;i<m;i++){
        read(&Persons2[i]);
    }

    int p = m+n;
    Person *Persons_merged=NULL;
    Persons_merged = (Person*)calloc(p,sizeof(Person));
    for(i=0;i<n;i++){
        Persons_merged[i] = Persons[i];
    }
    for(j=0;j<m;j++){
        Persons_merged[i] = Persons2[j];
    }

    // part 6

    int flag = 0;
    printf("All Persons having nationality as India :");
    for(i=0;i<p;i++){
        if(strcmp(Persons_merged[i].nationality,"India")== 0){
            flag = 1;
            printf("**Person %d**",i);
            print(Persons_merged[i]);
            printf("\n");
        }
    }
    if(flag==0) printf("No persons having nationality as India.");

    return 0;
}


