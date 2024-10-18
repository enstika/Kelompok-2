#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& word) {
	int left = 0;
	int right = word.length() - 1;

	while (left < right) {
		if (word[left] != word[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int main() {

	cout << "Check Kata " << "\n" << endl;
	string input;

	cout << "Input kata: ";
	cin >> input;

	for (char& c : input) {
		c = tolower(c);
	}

	if (isPalindrome(input)) {
		cout << "Hasil: true" << endl;
	}
	else {
		cout << "Hasil: false" << endl;
	}

	return 0;
}
