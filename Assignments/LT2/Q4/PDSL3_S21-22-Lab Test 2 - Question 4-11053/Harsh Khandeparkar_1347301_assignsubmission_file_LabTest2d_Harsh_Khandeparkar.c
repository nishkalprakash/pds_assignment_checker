/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 2(d)
*/

#include <stdio.h>
#define MAX 50

struct Student {
	// maximum capacity of 30 can be changed
	char name[30];
	// max size is 5 to account for the \0 character
	char gender[5];
	float marks;
};

// uses getchar to read a string until the newline character
// used since scanf("%s") will use space as a delimiter
// stores the string in s
void get_newline_string(char* s) {
	int i = 0;
	char c = getchar();

	// read until a \n is encountered
	while (c != '\n') {
		s[i] = c;
		i++;

		c = getchar();
	}

	// terminate the string in null character
	s[i] = '\0';
}

// returns 1 if given student is a girl
// returns 0 otherwise
int is_girl(struct Student student) {
	// each character of the array is directly checked since
	// the array length is known to be 5
	if (
		student.gender[0] == 'g' &&
		student.gender[1] == 'i' &&
		student.gender[2] == 'r' &&
		student.gender[3] == 'l' &&
		student.gender[4] == '\0'
	) return 1;
	else return 0;
}

struct Student find_best_girl_student(
	// array of students
	struct Student* students,
	// size of array
	int n
) {
	int i;

	// NOTE: if there are no girl students then the first student in the array will be returned
	int best_girl_index = 0;
	int best_marks = 0;

	for (i = 0; i < n; i++) {
		if (
			// if the student is a girl
			is_girl(students[i]) &&
			// and her marks are more than the previously known best girl
			students[i].marks > best_marks
		) {
			// then update best_girl_index and marks
			best_girl_index = i;
			best_marks = students[i].marks;
		}
	}

	return students[best_girl_index];
}

int main() {
	// input n
	int n;
	struct Student students[MAX];

	printf("Enter the value of n: ");
	scanf("%d", &n);

	// take student data input
	int i;
	for (i = 0; i < n; i++) {
		printf("Enter details for student %d:\n", i + 1);

		// to remove the previous newline so that it doesn't interfere with the
		// string inputs
		getchar();

		printf("Name: ");
		get_newline_string(students[i].name);

		printf("Gender: ");
		get_newline_string(students[i].gender);

		printf("Marks: ");
		scanf("%f", &students[i].marks);
	}

	printf("\nPrinting the student records: \n\n");
	for (i = 0; i < n; i++) {
		printf("%s %s - %.2f\n", students[i].name, students[i].gender, students[i].marks);
	}

	printf("\nThe best girl student is %s.\n", find_best_girl_student(students, n).name);

	return 0;
}