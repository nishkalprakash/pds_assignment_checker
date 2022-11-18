/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
Question : 3
*/
#include <stdio.h>

void sort(int arr[], int len) {                                                    //Sorting
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int minTotalIqDiff(int m, int n[], int len, int teams[]) {
	if (len == 0)
		return 0;
	int min = teams[0];
	int index = 0;
	for (int i = 1; i < m; i++) {
		if (min > teams[i]) {
			min = teams[i];
			index = i;
		}
	}
	teams[index] += n[len - 1];
	sort(teams, m);
	minTotalIqDiff(m, n, len - 1, teams);
	return teams[m - 1] - teams[0];
}

int main()
{
	int n[100];
	int len;
	printf("Enter length of array n[]: ");
	scanf("%d", &len);
	printf("Enter array n[]: ");
	for (int i = 0; i < len; i++) {                //Array Input
		scanf("%d", &n[i]);
	}
	int m;
	printf("Enter m: ");
	scanf("%d", &m);
	sort(n, len);
	int teams[50];
	for (int i = 0; i < m; i++) {
		teams[i] = 0;
	}
	printf("Output: %d", minTotalIqDiff(m, n, len, teams));
	return 0;
}
