// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const int size = 10;
	int arr[size];
	int x;
	cout << "Enter value for X: ";
	cin >> x;

	cout << "Enter " << size << " numbers.";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < size; i++) {
		if (arr[i] == x) {
			for (int j = i; j < size; j++) {
				arr[j] = arr[j + 1];
				if (j == size - 1) {
					arr[j] = -1;
					
				}
		}

			break;
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
    return 0;
}

