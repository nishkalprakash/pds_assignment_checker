/*
LT1_Q2A:
2.	Management of Records
A record can be defined having:
•	rollNo – A string of alpha-numeric characters of length 10, for example: 22AE10034
•	branch – A string of 2 characters, for example: AE, CS, ME,…,etc.
•	dob – A structure with the fields dd/mm/yyyy, for example, 25/12/1997
In this regard, write a program to:
1.	Define the structure to store a record.
Read n (0<n<=100), the number of records to be stored.
2.	Allocate the appropriate memory dynamically to store n records
3.	Read n records and store them.
4.	Remove the records, whose year in their DOB field is less than the year Y
(Y should be read from the user)
Print all the records deleted. Suppose, m (m <=n) records are deleted.
5.	Reallocate the memory so that the size of the array is exactly n-m after deletion.
Print the remaining records.
*/
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

// Structure to store a record
typedef struct
{
    char *rollNo;
    char *branch;
    struct
    {
        int dd;
        int mm;
        int yyyy;
    } dob;
} Record;

// Function to read a record
Record read_record()
{
    // Declare a record
    Record record;
    // Allocate memory for rollNo
    record.rollNo = (char *)malloc(11 * sizeof(char));
    // Read rollNo
    scanf("%s", record.rollNo);
    // Allocate memory for branch
    record.branch = (char *)malloc(3 * sizeof(char));
    // Read branch
    scanf("%s", record.branch);
    // Read dob
    scanf("%d/%d/%d", &record.dob.dd, &record.dob.mm, &record.dob.yyyy);
    // Return record
    return record;
}

// Function to print a record
void print_record(Record record)
{
    // Print rollNo
    printf("%s ", record.rollNo);
    // Print branch
    printf("%s ", record.branch);
    // Print dob
    printf("%02d/%02d/%04d\n", record.dob.dd, record.dob.mm, record.dob.yyyy);
}

// Function to delete a record
void delete_record(Record *records, int *n, int index)
{
    // Print the deleted record
    printf("Deleted Record: ");
    print_record(records[index]);
    // Free the memory allocated for rollNo
    free(records[index].rollNo);
    // Free the memory allocated for branch
    free(records[index].branch);
    // Shift all records after the deleted record to the left
    for (int i = index; i < *n - 1; i++)
    {
        records[i] = records[i + 1];
    }
    // Decrement n
    (*n)--;
    // Reallocate memory for records
    records = (Record *)realloc(records, (*n) * sizeof(Record));
}

int main()
{
    // Declare n, the number of records
    int n;
    // Read n
    printf("Enter N: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_N)
    {
        printf("Invalid value of N\n");
        return 0;
    }
    // Declare records
    Record *records;
    // Allocate memory for records
    records = (Record *)malloc(n * sizeof(Record));
    // Read records
    for (int i = 0; i < n; i++)
    {
        records[i] = read_record();
    }
    // Declare Y, the year
    int Y;
    // Read Y
    printf("Enter Y: ");
    scanf("%d", &Y);
    // Declare m, the number of records deleted
    int m = 0;
    // Iterate over all records
    for (int i = 0; i < n; i++)
    {
        // Check if year is less than Y
        if (records[i].dob.yyyy < Y)
        {
            // Delete the record
            delete_record(records, &n, i);
            m++;
            i--;
        }
    }
    if (m == 0)
        printf("No records deleted\n");
    // Print the number of records deleted
    printf("m = %d, ", m);
    // Print the remaining records number of records
    printf("n - m = %d\n", n);
    // Print the remaining records
    printf("Remaining Records:\n");
    for (int i = 0; i < n; i++)
        print_record(records[i]);
    if (n == 0)
        printf("No records remaining\n");
    // Free the memory allocated for records
    else
        free(records);
    return 0;
}