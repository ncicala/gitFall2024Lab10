#include <iostream>
using std::cout;

void displayName(std::string stuff);

int main()
{
    cout<< "Hello world!\n";
    std::string name = "Amber";
    displayName(name);
    return 0;
}

void displayName(std::string stuff)
{
    cout<< "hey guys, it's " <<stuff<<std::endl;
}