#include <iostream>
using namespace std;

void displayBanner(int stringLen);
void displayWithinBanner(string message);

int main()
{
	const string message = "Welcome to Computer Science";

	displayWithinBanner(message);

	//Tell the calling shell all is well
	return 0;
}

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displayWithinBanner(string message)
{
	int L = message.length();

	displayBanner(L);
	 
	cout << "* ";
	cout << message;
	cout << " *" << endl;
	displayBanner(L);

}