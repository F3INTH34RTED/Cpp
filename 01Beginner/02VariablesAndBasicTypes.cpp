#include <iostream>

using std::cout;
using std::cin;

void Exercise1();
void Exercise2();

int main()
{
    Exercise1();
    return 0;
}

// Function that discusses the differences between datatypes.
void Exercise1()
{
    cout << "The difference between int, long, long long, and short is their number of bytes and sizes that they occupy in the RAM.\n";
    cout << "Size of short integer: " << sizeof(short) << " bytes.\n";
    cout << "Size of integer: " << sizeof(int) << " bytes.\n";
    cout << "Size of long integer: " << sizeof(long) << " bytes.\n";
    cout << "Size of long long integer: " << sizeof(long long) << " bytes.\n\n";
    cout << "A signed integer can hold negative values whereas an unsigned integer can only hold positive values. Any attempt to store negative values in an unsigned datatype will "
    "wrap around the negative value to its corresponding positive value.\n\n";
    cout << "A float has single precision floating point, whereas a double has double precision floating point. Therefore, a double datatype is more precise and generally preferred"
    " over a floating datatype.\n";
}

// Function to calculate mortgage
void Exercise2()
{
    
}