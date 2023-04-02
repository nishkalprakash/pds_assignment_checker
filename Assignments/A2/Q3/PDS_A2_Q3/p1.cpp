/*Consider a square matrix A of size N*N and an integer X, where X is an element of A. Find out the following:
I) Row number R and column number C of X in A.
II) Sum S of R and C,i.e. S= R+C.
III) The element Z which is at S row(s) above X, in the same column.
IV) Print the Prime Factors of Z. If Z is a prime number, print the same.

In Step III, while traversing if the first row is reached, traversing has to be continued from the last row of the matrix. Array index always starts from (0,0).

Constraints:
1) Elements of A are unique integers.
II) 1 < N<= 35.


Sample Input1:
4
45 55 51 13
11 39 14 99
23 74 87 85
25 81 53 15
14
Sample Output1:
87
3 29
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, x;
    cout << "Enter size of matrix A: ";
    cin >> n;

    int mat[n][n];
    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Enter integer X: ";
    cin >> x;

    int r, c;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == x) {
                r = i;
                c = j;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    int s = r + c;
    int z;
    if (r > s) {
        z = mat[r-s-1][c];
    } else {
        z = mat[n+s-r-1][c];
    }

    cout << "Row number R and column number C of X in A: " << r << " " << c << endl;
    cout << "Sum S of R and C: " << s << endl;
    cout << "The element Z which is at S row(s) above X, in the same column: " << z << endl;

    // Finding prime factors of Z
    cout << "Prime factors of Z: ";
    vector<int> factors;
    while (z % 2 == 0) {
        factors.push_back(2);
        z /= 2;
    }
    for (int i = 3; i <= sqrt(z); i += 2) {
        while (z % i == 0) {
            factors.push_back(i);
            z /= i;
        }
    }
    if (z > 2) {
        factors.push_back(z);
    }
    if (factors.size() == 1) {
        cout << "Z is a prime number." << endl;
    } else {
        for (int i : factors) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
