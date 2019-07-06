#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> vi;
	for(int i = 0; i < 10; i++) {

		vi.push_back(i);
	}


	for(auto item : vi) {

		cout << item << " ";
	}

	cout << endl;

	vector<string> vs;
	for(int i = 0; i < 4; i++) {
		string str;
		cin >> str;
		vs.push_back(str);
	}


	for(auto item : vs) {

		cout << item << " ";
	}

	cout << endl;

	for(auto i = begin(vi) ; i != end(vi); i++) {
		cout  << *i << " " ;
	}

	cout << endl;

	sort(begin(vs), end(vs));
	for(auto item: vs) {
		cout << item << " ";
	}

	cout << endl;

	cout << "Vector of ints has " << count(begin(vi), end(vi), 3) << " element 3" << endl;
	cout << "First word has " << count(begin(vs[0]), end(vs[0]), 't') << " letter 't' s" << endl;

	return 0;
}
