/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:3,Question 1
*/
#include <stdio.h>

int checkUsername(char username[],char password[]){

	int len1,len2;
	for(len1 = 0;username[len1] != '\0';len1++);
	for(len2 = 0;password[len2] != '\0';len2++);
	if(len1 > len2)
		return 1;

	int i,j;
	for(i = 0;i <= len2-len1;i++){
		for(j = 0;j < len1;j++){
			if(username[j] != password[i+j])
				break;
		}
		if(j == len1){
			printf("Username cannot be included in Password\n");
			return 0;
		}
	}
	return 1;
}

int minLength(char password[]){
	int len;
	for(len = 0;password[len] != '\0';len++);
	if(len >= 8) return 1;
	else {
		printf("Minimum Number of Character in the Password should be 8\n");
		return 0;
	}
}

int maxLength(char password[]){
	int len;
	for(len = 0;password[len] != '\0';len++);
	if(len <= 15) return 1;
	else {
		printf("Maximum Number of Character in the Password should be 15\n");
		return 0;
	}
}

int checkSpecial(char password[]){
	char specials[] = {'$', '*', '+', '/', '#', '@', '<', '>', '?', '_', '!'};
	int i,j;
	int len,flag = 0;
	for(len = 0;password[len] != '\0';len++);
	for(i = 0;i < len;i++){
		if(password[i] >= 'A' && password[i] <= 'Z')
			flag = 1;
	}
	if(flag == 0){
		printf("Password should contain one Uppercase character\n");
		return 0;
	}
	flag = 0;
	for(i = 0;i < len;i++){
		if(password[i] >= 'a' && password[i] <= 'z')
			flag = 1;
	}
	if(flag == 0){
		printf("Password should contain one Lowercase character\n");
		return 0;
	}
	flag = 0;
	for(i = 0;i < len;i++){
		for(j = 0;j < 11;j++)
			if(password[i] == specials[j])
				flag++;
	}
	if(flag < 2){
		printf("Password should contain two characters from the following: $, *, +, /, #, @, <, >, ?, _, !\n");
		return 0;
	}
	return 1;
}

int consecutiveDigits(char password[]){
	int len,i,cnt = 0;
	for(len = 0;password[len] != '\0';len++);
	for(i = 0;i < len;i++){
		if(password[i] >= '0' && password[i] <= '9'){
			cnt++;
			if(cnt > 5){
				printf("Password can contain maximum 5 consecutive digits\n");
				return 0;
			}
		} else
			cnt = 0;
	}
	return 1;
}

int fiveRepeated(char password[]){
	int flag[200];
	int len,i;
	for(len = 0;password[len] != '\0';len++);
	for(i = 0;i < 200;i++)
		flag[i] = 0;
	for(i = 0;i < len;i++)
		flag[(int)password[i]]++;

	for(i = 0;i < 200;i++)
		if(flag[i] > 5){
			printf("Password can contain maximum 5 repeated characters\n");
			return 0;
		}

	return 1;
}

int main(){
	char username[1000],password[1000];
	printf("Enter Username:");
	scanf("%s",username);
	printf("Enter Password:");
	scanf("%s",password);
	int conditions[6];
	conditions[0] = checkUsername(username,password);
	conditions[1] = minLength(password);
	conditions[2] = maxLength(password);
	conditions[3] = checkSpecial(password);
	conditions[4] = consecutiveDigits(password);
	conditions[5] = fiveRepeated(password);

	int i,check = 1;
	for(i = 0;i < 6;i++){
		check &= conditions[i];
	}
	if(check == 0)
		printf("Not Acceptable");
	else
		printf("Acceptable");
	return 0;
}
