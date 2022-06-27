#include <bits/stdc++.h>

#define ll long long int
#define nl endl

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
	unsigned long long int len = strlen(str);
	unsigned long long int i;
	for (i = 0; i < len/2; i++)
	{
		char temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
}

// Function to convert a given decimal number
// to a base 'base' and
char* fromDeci(char res[], int base, unsigned long long int inputNum)
{
	unsigned long long int index = 0; // Initialize index of result

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

int main(void){
    unsigned long long int n;

    while(cin >> n and n){
        char res[120];

        cout << fromDeci(res, 32, n) << endl;
    }

    cout << "0\n";

    return 0;
}