#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	srand(0);
	bool keepPlaying = true;
	while(keepPlaying) {
		
		bool done = false;
		int randomNumber  = rand() % 100;
		srand(randomNumber);
		while(!done) {	
			int guess;
			cout << "Guess The Number : ";
			cin >>  guess;

			if(guess == randomNumber) {
				cout << "Correct!!!";
				done = true;
			} else if ( guess > randomNumber) {
				cout << "Too High!!";
			} else {
				cout << "Too Low!!";
			}

			cout << endl;

		}
		int i;
		cout << "Do you want to continue ? Press 0 (Zero) for No ";
		cin >> i;
		if(i == 0) {
			keepPlaying = false;
		}
	}

	return 0;
}
