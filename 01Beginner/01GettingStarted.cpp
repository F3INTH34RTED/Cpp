#include  <iostream>

using std::cout;
using std::cin;

int main()
{
    int x;
    cout << "Enter a number between 1 - 10: ";
    cin >> x;
    if (x < 1 || x > 10) exit(0);
    for (int i = 0; i < x; ++i) 
    {
        cout << i << '\n';
    }
    return 0;
}