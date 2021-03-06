// PZ9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>>
#include <string>

using namespace std;

void CompareArrays(const int* arr1, int* arr2, const int arrSize)
{
	cout << "Let's found different numbers in two arrays" << endl;
	bool found = false;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr1[i] != arr2[i])
		{
			cout << arr1[i] << " ";

			found = true;
		}
	}

	cout << endl;

	if (!found)
	{
		cout << "all numbers are equal" << endl;
	}
}

string MirrorString(string const& input)
{
	string result = "";

	for (int i = input.length() - 1; i >= 0; i--)
	{
		result += input[i];
	}
	return result;
}

int main()
{
	const int arrSize = 5;

	const int arr1[arrSize] = {1,2,3,4,5};
	int arr2[arrSize] = {};
	
	cout << "Enter five number" << endl;
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr2[i];
	}

	CompareArrays(arr1, arr2, arrSize);

	string input;
	cin.ignore();
	cout << "enter string to mirror" << endl;
	getline(cin, input);

	cout << "The mirror string to that is: " << endl;
	cout << MirrorString(input) << endl;

    return 0;
}

