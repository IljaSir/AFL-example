#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;
	if (input.length() != 5) return 0;
	if (input[0] == input[4]) {
		cout << "First condition figured!" << endl;
		if (input[1] == input[3]) {
			cout << "Second condition figured!" << endl;
			if (input[2] == 'A') {
				cout << "Congrats! Now I will throw up..." << endl;
				throw;
			}
		}
	} else {
		cout << "Wrong clue.. Hehe" << endl;
		if (input[1] != input[3]) {
			cout << "Please stop it..." << endl;
			if (input[2] == 'B') {
				cout << "Cmon..." << endl;
			}
		}
	}
	return 0;
}