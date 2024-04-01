#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n; // Read the input value of n

    vector<int> ans;
    ans.push_back(1); // Initialize a vector to store factorial result with 1

    // Calculate factorial
    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        // Multiply each digit in ans by i
        for (int j = 0; j < ans.size(); j++)
        {
            int prod = ans[j] * i + carry; // Calculate the product of digit and i
            ans[j] = prod % 10; // Store the last digit of the product in the ans vector
            carry = prod / 10; // Update carry
        }
        // Handle remaining carry
        while (carry > 0)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }

    int count = 0; // Initialize count of trailing zeros

    // Count trailing zeros
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        if (ans[i] == 0)
        {
            count++;
        }
        else {
            cout << count << "\n"; // Print the count of trailing zeros
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    // Solve each test case
    while (t--)
    {
        solve(); // Call the solve function for each test case
    }

    return 0;
}
