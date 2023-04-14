#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of element in the array
int i; // Index of array element

void input() {
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maksimum 20 elements.\n\n";
	}

	// Accept array elements
	cout << "\n====================\n";
	cout << "Enter array elements\n";
	cout << "====================\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch() {
	char ch;
	int comparisons; // Number of comparisons

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search : "; // Langkah 1
		int item;
		cin >> item;

		comparisons = 0;
		for (i = 0; i < n; i++) { // Langkah 2, 3, dan 4

			comparisons++;
			if (arr[i] == item) {
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}
		}
		if (i == n)
			cout << "\n" << item << " not found in the array \n";
		cout << "\nNumber of comparisons : " << comparisons << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main() {
	input();
	LinearSearch();
}