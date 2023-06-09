#include<studio.h>
#include<string.h>


struct student {
int rollNo[10];
char branch[2];
int dob[10];

};
int main()
{
struct student stu;
printf("\n rollNo: %d", stu.rollNo );
printf("\n branch: %s", stu.branch);
printf("\n dob: %d\n", stu.dob);
return 0;

}

int main() {
struct *ptr;
int n;
printf("Enter the number: ");
scanf("%d", &n);

ptr = (struct student *)malloc(n * sizeof(struct student));
for (int i = 0; i < 100; ++i) {
printf("Enter rollNo:\n");
scanf("%s %d", (ptr + i)->rollNo);
}
printf("Displaying Information:\n");
for (int i = 0; i < n; ++i) {
printf("%s\t%d\n", (ptr + i)->rollNo);
}
free(ptr);
return 0;
}
