/*
 * Section 2
 * Roll no : 22GG10052
 * Name : Vedant Thakare
 * Lab Test 2
 * Description : Management of records
 *
 */
#include <stdio.h>
// defining structure
typedef struct record
{
    char rollno[10];
    char branch[2];
    struct dob
    {
        char dob1[10];
    } dob;
    int L;
} record;
int main()
{
    int n, n2, i, j;
    printf("Enter the number of records to be stored\n");
    scanf("%d", &n);
    if (n > 100)
    {
        printf("Invalid value of N\n");
        exit(1);
    }
    int m = n;
    record *recs;
    recs = (record *)malloc(n * sizeof(record));
    for (i = 0; i < n; i++)
    {
        printf("Enter the roll no for record %d\n", i + 1);
        scanf("%s", recs[i].rollno);
        printf("Enter the branch \n");
        scanf("%s", recs[i].branch);
        printf("Enter the date of birth\n");
        scanf("%s", recs[i].dob.dob1);
    }
    printf("Enter the value of year\n");
    scanf("%d", &n2);
    // finding the value of birth
    for (i = 0; i < n; i++)
    {
        recs[i].L = 1000 * (recs[i].dob.dob1[6] - 48) + 100 * (recs[i].dob.dob1[7] - 48) + 10 * (recs[i].dob.dob1[8] - 48) + recs[i].dob.dob1[9] - 48;
    }
    // printing the deleted records
    for (i = 0; i < n; i++)
    {
        if (recs[i].L < n2)
        {
            printf("Deleted record : %s %s\n", recs[i].rollno, recs[i].branch);
            for (j = i; j < n; j++)
            {
                recs[j] = recs[j + 1];
                n--;
            }
        }
    }
    if (n == m)
    {
        printf("No records deleted\n");
    }
    printf("m = %d ", m - n);
    printf("n -m = %d\n", n);
    printf("Remaining records : \n");
    if (n == 0)
    {
        printf("No records remaining\n");
        exit(2);
    }

    for (i = 0; i < n; i++)
    {
        printf("%s %s", recs[i].rollno, recs[i].branch);
    }
    return 0;
}