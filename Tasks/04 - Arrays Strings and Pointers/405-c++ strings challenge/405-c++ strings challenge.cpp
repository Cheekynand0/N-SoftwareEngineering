#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    
    size_t loc = input.find("42");
    cout << loc << endl;

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int count = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == "the" || word == "The") {
            count++;
        }
    }
    cout << "This sentence contains \"the\" " << count << " times." << endl;

    // Challenge 3 - Reversing the elements of an array
    // Starting with an array of integers, write code to reverse their order
    // (a) use a second array to hold the result
    
    int arr[] = {1, 2, 3, 4, 5}; //basic array with 5 values, 1 to 5
    int temp[(sizeof(arr)/sizeof(int))]; //Second array with same length as first

    for (int i = 0; i < (sizeof(arr) / 4); i++) {
        temp[i] = arr[(sizeof(arr) / 4) - (i+1)]; //this should make the item in the second array..
        //.. equal to the corresponding item at the opposite end of the first
        // overall: it should invert the numbers into the second

    }
    //to output the array:
    cout << "Inverted array = [";
    for (int i = 0; i < (sizeof(temp) / 4); i++) {

        cout << temp[i] << " ";
    }
    cout << "]" << endl;
    
    //(b) using the same array (no temp one)
    int j = (sizeof(arr) / 4); // been using this calculation far too much so making it a variable
    int holder; //to store the value being carried
    for (int i = 0; i < (j / 4); i++) {
        
        if ((j - i) != i) {  //will run given it wont swap a value in the same spot
            //below is a basic value swap for 2 variables
            holder = arr[i];
            arr[i] = arr[j - (i+1)];
            arr[j - (i+1)] = holder;
        }
        //don't need an else, as the value at j-i an i wouldn't need swapping
    }
    //output the new array:
    cout << "Inverted array 2 = [";
    for (int i = 0; i < j; i++) {

        cout << arr[i] << " ";
    }
    cout << "]" << endl;


    // NOTE: failed at (b) (sad ikr)

}

