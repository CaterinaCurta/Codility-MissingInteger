#include <iostream>
#include <vector>

using namespace std;

int findMissingInteger(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    // since we know that only one element from the permutation
    // is missing, n will always be larger than the array size by 1
    int n = A.size() + 1;

    // Compute grandTotal according to mathematical formula
    int grandTotal = (n * (n + 1)) / 2;

    int arrayTotal = 0;

    //Parse the array and compute the sum of the elements.
    for(unsigned int i = 0; i < A.size(); i++)
    {
        arrayTotal += A[i];
    }

    // The missing element will be the difference between grandTotal
    // and arrayTotal

    return (grandTotal - arrayTotal);
}

int main() {

    vector<int> A{4, 1, 2, 5, 6};

    int n = findMissingInteger(A);

    cout << n;

    return 0;
}
