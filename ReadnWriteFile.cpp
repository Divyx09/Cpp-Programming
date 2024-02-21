#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream MyFile("example.txt");

    MyFile << "This is a line.\n";
    MyFile << "This is another line.\n";

    MyFile.close();

    std::string myText;

    std::ifstream MyReadFile("example.txt");

    while (getline(MyReadFile, myText))
    {
        std::cout << myText;
    }

    MyReadFile.close();

    return 0;
}
