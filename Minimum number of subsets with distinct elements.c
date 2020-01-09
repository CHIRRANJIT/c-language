// A sorting based solution to find the
// minimum number of subsets of a set
// such that every subset contains distinct
// elements.
#include <bits/stdc++.h>
using namespace std;

// Function to count subsets such that all
// subsets have distinct elements.
int subset(int ar[], int n)
{
	// Take input and initialize res = 0
	int res = 0;

	// Sort the array
	sort(ar, ar + n);

	// Traverse the input array and
	// find maximum frequency
	for (int i = 0; i < n; i++) {
		int count = 1;

		// For each number find its repetition / frequency
		for (; i < n - 1; i++) {
			if (ar[i] == ar[i + 1])
				count++;
			else
				break;
		}

		// Update res
		res = max(res, count);
	}

	return res;
}

// Driver code
int main()
{
	int arr[] = { 5, 6, 9, 3, 4, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << subset(arr, n);
	return 0;
}
