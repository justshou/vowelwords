/******************************************************************************

ASSIGNMENT : 
Write a program that reads the file FIRST.TXT and creates a new file named SECOND.TXT, to contain only those words from the file FIRST.TXT which start with a lowercase vowel.

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string inFile;
    string outFile;
    string word;
    
    ifstream ReadFile("FIRST.TXT"); // opens first file
    ofstream OutFile("SECOND.TXT"); // creates output file

    while (ReadFile >> word) { // takes first letter of each word, if it's a vowel it adds that entire word to the output file
        char FirstLetter = word[0];
        if (FirstLetter == 'a' || FirstLetter == 'e' || FirstLetter == 'i' || FirstLetter == 'o' || FirstLetter == 'u') {
            OutFile << word << " ";
        }
    }

    return 0;
}