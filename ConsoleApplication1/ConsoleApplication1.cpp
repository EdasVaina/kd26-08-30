#include <iostream>
#include <string.h>
using namespace std;
int main() {

	char str[100];
	cout << "Enter a string: ";
	cin >> str;
	cout << "You entered: " << str << "\n";
	int len = strlen(str);
	int shift;
	cout << "Shift: ";
	cin >> shift;
	for (int i = 0; i < len; ++i) {
		str[i] = (str[i] - 'a' + shift) % 26 + 'a';
		cout << str[i];
	}

	cout << "\n";

	for (int i = 0; i < len; ++i) {
		str[i] = (str[i] - 'a' - shift) % 26 + 'a';
		cout << str[i];
	}
	return 0;

	//cout << "fourth letter will be m\n";
	//str[3] = 'm';
	//cout << str;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
