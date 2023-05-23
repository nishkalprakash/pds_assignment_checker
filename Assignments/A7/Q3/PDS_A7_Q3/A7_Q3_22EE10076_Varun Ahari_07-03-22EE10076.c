#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

void printArray(const std::vector<std::string>& arr) {
    std::cout << "Printing " << arr.size() << " names (names stored in the array):\n";
    std::cout << "#\tName\n";
    std::cout << "===========================\n";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << i + 1 << "\t" << arr[i] << "\n";
    }
    std::cout << std::endl;
}

void sortAndRemoveDuplicates(std::vector<std::string>& arr) {
    std::sort(arr.begin(), arr.end()); // Sort the array

    // Remove duplicate entries
    arr.erase(std::unique(arr.begin(), arr.end()), arr.end());
}

int main() {
    int n, m;

    std::cout << "Enter the number of names for array X: ";
    std::cin >> n;

    std::vector<std::string> X(n);
    std::cout << "Enter " << n << " names for array X:\n";
    for (int i = 0; i < n; ++i) {
        std::cin.ignore();
        std::getline(std::cin, X[i]);
    }

    std::cout << "\n## After reading X ##\n";
    printArray(X);

    std::cout << "Enter the number of names for array Y: ";
    std::cin >> m;

    std::vector<std::string> Y(m);
    std::cout << "Enter " << m << " names for array Y:\n";
    for (int i = 0; i < m; ++i) {
        std::cin.ignore();
        std::getline(std::cin, Y[i]);
    }

    std::cout << "\n## After reading Y ##\n";
    printArray(Y);

    std::vector<std::string> Z;
    Z.reserve(X.size() + Y.size()); // Reserve enough space in Z to avoid reallocations

    // Copy names from X to Z
    Z.insert(Z.end(), X.begin(), X.end());

    // Copy names from Y to Z
    Z.insert(Z.end(), Y.begin(), Y.end());

    std::cout << "\n## After sorting and deleting duplicates in Z ##\n";
    sortAndRemoveDuplicates(Z);
    printArray(Z);

    return 0;
}