#include <iostream>
#include "cpp_files/other_patrick.h"
#include "cpp_files/other_mason.h"

using namespace std;

int main()
{
    cout << "This is the main file." << endl;
    cout << "It will load in header files" << endl << endl;

    cout << "This is the result of calling patrick_function():" << endl;
    patrick_function();
    cout << endl;

    cout << "This is the result of calling mason_function():" << endl;
    mason_function();

    return 0;
}
