#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

ofstream result ("resul.txt");
ifstream input;
 
int main(int argc, const char *argv[]){

    input.open("texto.txt");

    string myText;

    // Read from the text file
    ifstream MyReadFile;

    MyReadFile.open("x.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText;
    }

    input.close();
    result.close();

    MyReadFile.close();

    return 0;
}