#include <iostream>
#include <random>

using namespace std;

int main() {

	random_device seed{};

	mt19937 engine{seed()};

	uniform_int_distribution<> dis{1, 12};

	int questions{20}, total{0};
	cout << "Number of questions you want : " ;
	cin >> questions;
	
	for( int i{0} ; i < questions ; i++) {
	  int a{ dis(engine) };
	  int b{ dis(engine) };

	  cout << a << " * " << b << " = ";
	  int answer{};
	  cin >> answer;

	  if ( answer == (a*b) ) {
	    cout << "Correct!"<< '\n';
	    total++;
	  } else {
	    cout << "Wrong!"<< '\n';
	  }
	}

	cout << " Your score is : " << ( (total * 100) / questions ) << "\n"; 

}
