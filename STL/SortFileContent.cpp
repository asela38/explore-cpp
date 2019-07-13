#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	ifstream file{"data.text"};
	
	vector<string> lines{};

	string line{};

	while(getline(file, line)) {
		lines.push_back(line);
	}

	sort(begin(lines), end(lines));


	for (auto const& s : lines) { 

		cout << s << '\n';
	}

}
