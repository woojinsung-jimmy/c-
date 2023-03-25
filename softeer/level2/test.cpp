#include <iostream>
using namespace std;


int main() {
	string str1 = "abcde";

	cout << str1.substr(1, 5) << endl; // a
	cout << str1.substr(1, 1) << endl; // b
	cout << str1.substr(2, 1) << endl; // c

	cout << str1.substr(0, 2) << endl; // ab
	cout << str1.substr(1, 2) << endl; // bc

	return 0;
}