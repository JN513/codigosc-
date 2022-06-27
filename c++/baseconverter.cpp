// C++ program of th above approach
#include <bits/stdc++.h>
using namespace std;

// To return char for a value. For example '2'
// is returned for 2. 'A' is returned for 10. 'B'
// for 11
char reVal(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

// Utility function to reverse a string
void strev(char *str)
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len/2; i++)
	{
		char temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
}

// Function to convert a given decimal number
// to a base 'base' and
char* fromDeci(char res[], int base, int inputNum)
{
	int index = 0; // Initialize index of result

	// Convert input number is given base by repeatedly
	// dividing it by base and taking remainder
	while (inputNum > 0)
	{
		res[index++] = reVal(inputNum % base);
		inputNum /= base;
	}
	res[index] = '\0';

	// Reverse the result
	strev(res);

	return res;
}

// Driver Code
int main()
{
	int inputNum = 31, base = 32;
	char res[100];
	cout << "Equivalent of " << inputNum << "in base "<< base << " is " <<
											fromDeci(res, base, inputNum) << endl;

	return 0;
}

// This code is contributed by code_hunt.
