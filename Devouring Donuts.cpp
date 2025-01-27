#include <iostream>
using namespace std;

int main() {
    // Read the input
    int N;
    cin >> N;

    // Calculate the total number of leaves
    int total_leaves = 4 + 3 * (N - 1);

    // Print the result
    cout << total_leaves << endl;

    return 0;
}
