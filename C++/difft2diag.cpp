// C++ program to find the difference
// between the sum of diagonal.
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int difference(int arr[][MAX], int n)
{
	// Initialize sums of diagonals
	int d1 = 0, d2 = 0;

	for (int i = 0; i < n; i++)
	{
		d1 += arr[i][i];
		d2 += arr[i][n-i-1];
	}

	// Absolute difference of the sums
	// across the diagonals
	return abs(d1 - d2);
}

// Driven Program
int main()
{
	int n = 3;

	int arr[][MAX] =
	{
		{11, 2, 4},
		{4 , 5, 6},
		{10, 8, -12}
	};

	cout << difference(arr, n);
	return 0;
}
