#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;
        
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
   
    reverseArray(arr, start + 1, end - 1);
}

int areAnagrams(const char* str1, const char* str2) {
    int count[26] = {0}; 
    
    while (*str1) {
        count[*str1 - 'a']++;
        str1++;
    }
    
    while (*str2) {
        count[*str2 - 'a']--;
        str2++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0)
            return 0;
    }
    
    return 1;
}

int isPalindrome(const char* str) {
    int length = 0;
    
    while (str[length])
        length++;
    
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        if (str[start] != str[end])
            return 0;
        
        start++;
        end--;
    }
    
    return 1;
}

int main() {
    int choice;
    printf("Enter choice (1: Reverse Array, 2: Anagrams, 3: Palindrome): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: {
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            
            int arr[100];
            printf("Enter the elements: ");
            for (int i = 0; i < n; i++)
                scanf("%d", &arr[i]);
            
            reverseArray(arr, 0, n - 1);
            
            printf("Reversed array: ");
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);
            
            break;
        }
        
        case 2: {
            char str1[100], str2[100];
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            
            int result = areAnagrams(str1, str2);
            
            if (result)
                printf("%s and %s are anagrams.\n", str1, str2);
            else
                printf("%s and %s are not anagrams.\n", str1, str2);
            
            break;
        }
        
        case 3: {
            char str[20];
            printf("Enter a string: ");
            scanf("%s", str);
            
            int result = isPalindrome(str);
            
            if (result)
                printf("%s is a palindrome.\n", str);
            else
                printf("%s is not a palindrome.\n", str);
            
            break;
        }
        
        default:
            printf("Invalid choice.\n");
            break;
    }
    
    return 0;
}
