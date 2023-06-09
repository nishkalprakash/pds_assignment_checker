/*
NAME = Priyangshu Barman
ROLL NO. = 22AG30036
SECTION = 2
*/
#include<stdio.h>
struct record
{
    char *rollNo[10];
    char *branch;
};
struct dob
{
    int dd;
    int mm;
    int yyyy;
};
int main()
{
    int n,i;
    scanf("%d", &n);
    if(0 > n >= 100)
        return printf("Invalid value of N");
        struct record* record1 = (struct record*)malloc(n * sizeof(struct record));
        for(i = 0;i < n;i++)
        {
        scanf("%s", &record1[i].rollNo);
        scanf("%s", &record1[i].branch);
        }
}
void R(struct record* record1)
{
    scanf("%s", &record1->rollNo);
    scanf("%s", &record1->branch);
    scanf("%d %d %d", &record1->dob.dd, &record1->dob.mm, &record1->dob.yy);
}

