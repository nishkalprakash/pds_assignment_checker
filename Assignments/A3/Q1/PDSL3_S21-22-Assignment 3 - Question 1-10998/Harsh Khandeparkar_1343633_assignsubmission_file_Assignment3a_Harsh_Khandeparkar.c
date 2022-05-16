/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 3(a)
*/

#include <stdio.h>

const int num_specials = 11;
const char specials[11] = {'$', '*', '+', '/', '#', '@', '<', '>', '?', '_', '!'};

int main() {
	char username[30], password[30];

	printf("Enter username: ");
	scanf("%s", username);

	printf("Enter password: ");
	scanf("%s", password);

	int length = 0;
	int i = 0;
	while(password[i++] != '\0') length++;

	int uname_length = 0;
	i = 0;
	while(username[i++] != '\0') uname_length++;

	if (length < 8) {
		printf("Password too short.\n");
		return 0;
	}
	else if (length > 15) {
		printf("Password too long.\n");
		return 0;
	}

	int contains_lowercase = 0;
	int contains_uppercase = 0;
	int specials_count = 0;

	// number of consecutive digits in the ongoing sequence
	int cons_digit_count = 0;
	// largest sequence of consecutive digits
	int max_cons_count = 0;

	int j = 0;
	for (i = 0; i < length; i++) {
		char c = password[i];

		if ('a' <= c && c <= 'z' && !contains_lowercase) contains_lowercase = 1;
		if ('A' <= c && c <= 'Z' && !contains_uppercase) contains_uppercase = 1;

		for (j = 0; j < num_specials; j++) {
			if (c == specials[j]) {
				specials_count++;
				break;
			}
		}

		if ('0' <= c && c <= '9') cons_digit_count++;
		else {
			// update max if the current sequence was larger
			max_cons_count = cons_digit_count > max_cons_count ? cons_digit_count : max_cons_count;

			// end the current sequence
			cons_digit_count = 0;
		}
	}

	if (!contains_lowercase) {
		printf("The password should contain a lowercase character.\n");
		return 0;
	}

	if (!contains_uppercase) {
		printf("The password should contain a uppercase character.\n");
		return 0;
	}

	if (specials_count < 2) {
		printf("The password should contain at least 2 special characters.\n");
		return 0;
	}

	if (max_cons_count > 5) {
		printf("The password should not contain more than 5 consecutive digits.\n");
		return 0;
	}

	/**
	 * To find whether the username is a part of the password:
	 * Initialize a value j = 0 that serves as an index inside username
	 * Run a for loop on the password
	 * At each character index i, check the following:
	 * if username[j] == password[i], j++
	 * else j = 0
	 *
	 * if at any point in the loop, j == uname_length - 1 then username is included in the password
	 */

	j = 0;
	for (i = 0; i < length; i++) {
		if (username[j] == password[i]) j++;
		else j = 0;

		if (j == uname_length - 1) {
			printf("Password must not contain the username in it.\n");
			return 0;
		}
	}

	/**
	 * To check if a character has repeated more than 5 times
	 * run a for loop over the password
	 * at each index i, run another for loop from
	 * j = 0 to j = length - 1
	 *
	 * check how many times password[i] = password[j].
	 * if at any point in the second loop this number becomes > 5, then a character is repeated more than 5 times
	 */

	for (i = 0; i < length; i++) {
		int repetitions = 1; // including the current number

		for (j = i + 1; j < length; j++) {
			if (password[i] == password[j]) repetitions++;

			if (repetitions > 5) {
				printf("No character in the password should be repeated more than 5 times.\n");
				return 0;
			}
		}
	}

	// since the process did not exit at any of the above stages
	// the password must be acceptable

	printf("Acceptable.\n");

	return 0;
}