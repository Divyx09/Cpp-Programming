#include <iostream>

int main()
{
    try
    {
        int num1 = 10;
        int num2 = 0;
        if (num2 == 0)
        {
            throw "Division by zero error!";
        }
        else
        {
            std::cout << num1 / num2 << std::endl;
        }
    }
    catch (const char *e)
    {
        std::cout << "Error: " << e << std::endl;
    }

    return 0;
}