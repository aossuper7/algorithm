#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char ch;
	while (getline(cin, str)) {
		int low = 0, upp = 0, dig = 0, emt = 0;
		for (int i = 0; i < str.size(); i++) {
			ch = str[i];
			if (isalpha(ch))
				if (islower(ch))
					low++;
				else upp++;
			else if (isdigit(ch))
				dig++;
			else emt++;
		}
		cout << low << ' ' << upp << ' ' << dig << ' ' << emt << '\n';
	}
}