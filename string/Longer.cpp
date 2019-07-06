#include <iostream>
#include <string>

using namespace std;

int main() {

	string word1, word2;
	cout << "Word 1 : ";
	cin >> word1;
	cout << "Word 2 : ";
	cin >> word2;
	if(word1.length() > word2.length()) {
		cout << word1 << " is longer than " << word2 << endl;
	} else if(word1.length() < word2.length()) {
		cout << word2 << " is longer than " << word1 << endl;
	} else 
		cout << word1 << " and " << word2 << " are equal length " << endl;

	return 0;
}

