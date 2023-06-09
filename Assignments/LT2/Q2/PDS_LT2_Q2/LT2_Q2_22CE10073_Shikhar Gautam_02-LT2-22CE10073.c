    // Shikhar Gautam
    // Roll No. = 22CE10073
    // Section = 2
    // Set - A

    #include <stdio.h>

    // Declaring our structure to be used
    struct Record{

    char rollno[10]; //Declaring character array to store rollno.
    char branch[2]; //Declaring character array to store branch code
    char dob[8]; //Declaring integer array to store DOB

    };

    void readrecord(struct Record *records, int n); //Declaring function to read n records
    void printrecord(struct Record *records, int n); //Declaring function to print n records

    int main(){

    int n; // Declaring variable to store n records
    printf("Enter the no. of records to be stored : ");
    scanf("%d", &n); //taking input for no. of records

    printf("\n");

    struct Record *records = (struct Record*)malloc(n * sizeof(struct Record)); //Demanding size from malloc to store n records

    readrecord(records, n); //Calling our function to read n records

    printrecord(records, n); //Calling our function to print n records



        return 0;
    }

    //Defining our function to read n records

    void readrecord(struct Record *records, int n){

    for(int i=0; i<n; i++){

        printf("Enter roll no. for %d : ", i+1);
        scanf("%s", &records[i].rollno); // Taking input for roll no.

        printf("\n");

        printf("Enter branch code for %d : ", i+1);
        scanf("%s", &records[i].branch); //Taking input for branch code

        printf("\n");

        printf("Enter DOB (dd/mm/yyyy) for %d : ", i+1);
        scanf("%s", &records[i].dob); //taking input for DOB (dd/mm/yyyy)

        printf("\n");


    }

        return ;
    }

    //Defining our function to print n records

    void printrecord(struct Record *records, int n){

    printf("Printing %d records : \n", n);
    printf("\n");
    for(int i=0; i<n; i++){

        printf("Roll no. : %s\n", records[i].rollno); //Printing rollno.
        printf("Branch code : %s\n", records[i].branch); //Printing branch code
        printf("DOB in (dd/mm/yyyy) : %s\n", records[i].dob); //printing DOB (dd/mm/yyyy)
        printf("\n");
    }

        return ;
    }
