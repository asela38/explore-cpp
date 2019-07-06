#include <iostream>
#include "MyFunction.h"

using namespace std;


int main() {

	auto a = add(3,4);
	cout << " 3 + 4 is " << a << endl;
	cout << " 3.2 + 4.1 is " << add(3.2, 4.1) << endl;
	cout << " 3.2 + 4.1 + 3.1 is " << add(3.2, 4.1, 3.1) << endl;
	cout << " isOdd 3 : " << isOdd(3) << endl;
	cout << " isOdd 4 : " << isOdd(4) << endl;
	return 0;
}
