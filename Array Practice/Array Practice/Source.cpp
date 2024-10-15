#include <iostream>
using namespace std;

int practice[] = { 1,3,5,7,9 };
int n, result = 0;
int i = 0;

int main() {

	for (n = 0; n < 5; n++)
	{
		result += practice[n];
	}

	cout << result << "\n\n";
	
	for (int i = 0; i < 5; i++) {

		cout <<  practice[i] << " ";
	}
	
	
	
	return 0;
}