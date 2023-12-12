#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outputStream;
	outputStream.open("tables.txt"); //makes the file

	if (!outputStream.is_open()) { //verify if the file was made or not
		cerr << "Cannot open file!";
		return -1;
	}
	
	//replaces all 'cout' with  'outputStream'
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			outputStream << r * c << "\t";
		}
		outputStream << endl;
	}
	outputStream << endl;

	outputStream.close(); //ensure to close the file at the end
	return 0;
}