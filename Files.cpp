#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile("myFile.txt");

    myFile << "This is some text in the file.\n";

    myFile.close();

    ifstream readFile("myFile.txt");

    string line;
    while (getline(readFile, line))
    {
        cout << line;
    }
    readFile.close();

    return 0;
}