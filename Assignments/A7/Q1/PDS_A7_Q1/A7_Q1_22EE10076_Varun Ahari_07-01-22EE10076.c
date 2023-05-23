#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

bool isPerfectNumber(int number) {
    int sum = 1; // Start with 1 as a factor
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            sum += i;
            if (i * i != number) {
                sum += number / i;
            }
        }
    }
    return sum == number;
}

void generateRandomNumbers(std::vector<int>& numbers, int n) {
    std::srand(std::time(0));
    for (int i = 0; i < n; ++i) {
        int randomNumber = std::rand() % 999 + 2; // Generate random number in the range [2, 1000]
        numbers.push_back(randomNumber);
    }
}

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void findPerfectNumbers(const std::vector<int>& numbers) {
    bool foundPerfectNumber = false;
    for (int num : numbers) {
        if (isPerfectNumber(num)) {
            std::cout << num << " is a perfect number." << std::endl;
            foundPerfectNumber = true;
        }
    }
    if (!foundPerfectNumber) {
        std::cout << "No perfect number found." << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::vector<int> randomNumbers;
    generateRandomNumbers(randomNumbers, n);

    std::cout << n << "-random number array: ";
    printArray(randomNumbers);

    findPerfectNumbers(randomNumbers);

    return 0;
}