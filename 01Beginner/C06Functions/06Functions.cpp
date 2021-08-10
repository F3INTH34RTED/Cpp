#include <iostream>
#include <string>
#include "06Functions.h"

using std::cin;
using std::cout;
using std::string;

// Exercise01 - Exercise05 declarations are in 06Functions.h
void Exercise06();
size_t Exercise07();
void Exercise08();
void Exercise09();
void Exercise10SwapIntsUsingPointers(int *a, int *b);
void Exercise11Reset(int &a);
void Exercise12SwapIntsUsingReferences(int &a, int &b);
void Exercise13();
void Exercise14();
void Exercise15();
void Exercise16();
void Exercise17(string &s);
void Exercise18();
void Exercise19();
void Exercise20();
int Exercise21(const int a, const int *b);
void Exercise22();
void Exercise23();
void Exercise24();
void Exercise25();
void Exercise26();
void Exercise27();
void Exercise28();
void Exercise29();
void Exercise30();
void Exercise31();
void Exercise32();
void Exercise33();
void Exercise34();
void Exercise35();
void Exercise36();
void Exercise37();
void Exercise38();
void Exercise39();
void Exercise40();
void Exercise41();
void Exercise42();
void Exercise43();
void Exercise44();
void Exercise45();
void Exercise46();
void Exercise47();
void Exercise48();
void Exercise49();
void Exercise50();
void Exercise51();
void Exercise52();
void Exercise53();
void Exercise54();
void Exercise55();
void Exercise56();

void Dummy()
{
    int a = 5, b = 4;
    cout << Exercise21(a, &b) << '\n';
}

int main()
{
    Dummy();
    // Exercise01();
    // Exercise02();
    // Exercise03();
    // Exercise04();
    // Exercise05();
    // Exercise06();
    // Exercise07();
    // Exercise08();
    // Exercise09();
    // Exercise10();
    // Exercise11();
    // Exercise12();
    // Exercise13();
    // Exercise14();
    // Exercise15();
    // Exercise16();
    // Exercise17();
    // Exercise18();
    // Exercise19();
    // Exercise20();
    // Exercise21();
    // Exercise22();
    // Exercise23();
    // Exercise24();
    // Exercise25();
    // Exercise26();
    // Exercise27();
    // Exercise28();
    // Exercise29();
    // Exercise30();
    // Exercise31();
    // Exercise32();
    // Exercise33();
    // Exercise34();
    // Exercise35();
    // Exercise36();
    // Exercise37();
    // Exercise38();
    // Exercise39();
    // Exercise40();
    // Exercise41();
    // Exercise42();
    // Exercise43();
    // Exercise44();
    // Exercise45();
    // Exercise45();
    // Exercise45();
    // Exercise46();
    // Exercise47();
    // Exercise48();
    // Exercise49();
    // Exercise50();
    // Exercise51();
    // Exercise52();
    // Exercise53();
    // Exercise54();
    // Exercise55();
    // Exercise56();

    return 0;
}

// Function to discuss the difference between parameter and argument
void Exercise01()
{
    /*
    Parameter(s) are data that are required by the function and arguments are the initializers to those parameters.
    For example,
    bool CheckAgeValidity(int age)
    {
        bool isAgeValid = age > 17 ? true : false;
        return isAgeValid;
    }

    CheckValidity(10);

    Here, `int age` is a parameter and `10` is the argument because it initializes the age parameter.
    */
}

// Function to discuss the errors in the code
void Exercise02()
{
    /*
    Errors:
    (a) int f() {
            string s;
            return s;
        }
    
    (b) f2(int i) {...}

    (c) int calc(int v1, int v1) {...}

    (d) double square(double x) return x * x;

    Solutions:
    (a) There are two ways:
        string f() {
                string s;
                return s;
        } OR
        int f() {
                int s;
                return s;
        }
    
    (b) void f2(int i) {...}

    (c) int calc(int v1, int v2) {...}

    (d) double square(double x) {return x * x;}
    */
}

// Function to calculate factorial of an integer
int Exercise03Factorial(int x)
{
    int fact = 1;
    while (x > 1) fact *= x--;
    return fact;
}

// Function to print factorial based on user input
void Exercise04UserBasedFactorial()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << Exercise03Factorial(number) << '\n';
}

// Function to return absolute value
int Exercise05AbsoluteValue(int x)
{
    return x < 0 ? x *= -1 : x;
}

// Function to discuss the differences and use cases for parameter, local variable, and local static variable
void Exercise06()
{
    /*
    When some data needs to be passed from one function to another we would use arguments to initialize the parameter and use that data accordingly.
    For example a factorial function: Fact(5) where 5 is the argument and int Fact(int x) and x is the parameter that will have the value 5.

    A local variable is defined and declared in the same function and cannot be declared by any entity outside of that function.
    For example:
    int Fact(int x) {int fact;} Here, fact is a local variable which is private to this function

    A local static variable is not destroyed even after the function terminates and hence, it is widely used when the information stored inside that
    local variable is intended to not be destroyed.
    For example:
    int calls(){static int counter = 1; return counter++;}
    for (size_t i = 0; i < 10; ++i) cout << "Function is being called " << calls() << " times\n";
    */
}

// Function to return 0 when it is called the first time and then return numbers in a particular sequence
size_t Exercise07()
{
    static size_t number = 0;
    return number++;
}

// Create a new header file
void Exercise08()
{
    // Check 06Functions.h
}

//
void Exercise09()
{
    // Check 06Functions.h and Exercise03Fact(int x) and Exercise04UserBasedFact()
}

// Function to swap 2 integers using pointers
void Exercise10SwapIntsUsingPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reset the value of an int to 0
void Exercise11Reset(int &a)
{
    a = 0;
}

// Function to swap 2 integers using references
void Exercise12SwapIntsUsingReferences(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to discuss the difference between void f(T) and void f(T &)
void Exercise13()
{
    // void f(T)  is where the argument is passed by value (or copied) and hence, does not affect the argument
    // void f(T&) is where the argument is passed by reference and hence, affects the argument
}

// Function to discuss when parameter must be a reference type and when it shouldn't
void Exercise14()
{
    /* A parameter must be a reference type where there are large values to pass or when the argument being passed needs to be changed or when we require
        multiple return statements from 1 function.

        A parameter must not be a reference when the argument does not need to be changed and the data being passed is not very large in size.
    */
}

// Function to explain the rationale of the following function
void Exercise15()
{
    /*
    string::size_type find_char(const string &s, char c, string::size_type &occurs)
    {
        auto ret = s.size();
        occurs = 0;
        for (decltype(ret) i = 0; i != s.size(); ++i)
        {
            if (s[i] == c)
            {
                if (ret == s.size()) ret = i;
                ++occurs;
            }
        }
        return ret;
    }

    - `s` is a reference to const because this function does not need to change the value of `s` and it is faster to send by reference than by value.
    - occurs is a plain reference as the function needs to keep incrementing and keep track of the index at which the character occurs.
    - c is not a reference because the function does not intend to change the value of the argument being passed nor it is a very large argument
    - if `s` was a plain reference, nothing would change but the function implementation would be less safer as it has the potential to change the value
        of `s` and the argument as well.
    - if `occurs` was a reference to const then it would not be possible to increment the value of occurs.
    */
}

// Function to identify limitation and correct it
void Exercise16()
{
    // bool is_empty(string s) {return s.empty();} OR
    // bool is_empty(const string &s) {return s.empty();} (preferred)
}

// Function to detect any capital letters and to change the string to all lowercase
void Exercise17(string &s)
{
    bool isCapital = false;
    int count = 0;
    for (char x : s)
    {
        if (isupper(x))
        {
            isCapital = true;
            break;
        }
        ++count;
    }
    isCapital ? cout << s << ": has a capital letter at index " << count << '\n' : cout << s << ": does not have a capital letter\n";
    if (isCapital)
        for (char &x : s) x = tolower(x);
    
    /*
    Although they can have the same type, but I personally would prefer:
    void DetectCapitalLetter(const string &s); as this does not have any limitation as can pass literal string arguments
    void ChangeToLower(string &s); and this requires the argument to be changed
    */
}

// Function to write declarations
void Exercise18()
{
    /*
    (a) bool compare(matrix &m1, matrix &m2);
    (b) vector<int>::iterator change_val(int x, vector<int>::iterator iter);
    */
}

// Function to determine legal and illegal calls
void Exercise19()
{
    // (a) is illegal because it has too many arguments
    // (b) is legal
    // (c) is legal
    // (d) is legal
}

// Function to discuss the difference between const reference and plain reference
void Exercise20()
{
    /*
    Const reference allows the function to take literal arguments as parameters and the function cannot under any circumstance change the value.
    
    Plain reference cannot take literals as a parameter and only variables but they can change the value.
    
    Therefore, making a plain reference when it can be a const reference would limit the arguments to only variables and parameters wont be able to accept
    literal arguments.
    */
}

// Function to return the larger value
int Exercise21(const int a, const int const *b)
{    
    return a >= *b ? a : *b;
    // const int *b should be used to avoid changing the value of 'b'
    // int const *b should be used to avoid changing the value to which 'b' points
    // therefore, const inst const *b should be the type of pointer
}

//
void Exercise22()
{
    // Refer to exercise 3 and 4
}

//
void Exercise23()
{
    // To print `i`
    // void print(const int a) cout << a << '\n';
    // Function call: print(i);

    // To print `int j = {0,1};`
    // void print(int *beg, const int const *end)
    // {
    //      while (beg != end) cout << *beg++ << '\n';
    // }
    // Function call: print(beg(j), end(j));
}

//
void Exercise24()
{
    // The problem is that we cannot pass an array by value, and when we pass an array to a function, we are actually passing a pointer to the
    // array's first element. In this question, const int ia[10] is actually same as const int*, and the size of the array is irrelevant.
    // we can pass const int ia[3] or const int ia[255], there are no differences. If we want to pass an array which size is ten, we should use reference
    // like that: void print10(const int (&ia)[10]) { /*...*/ }
}

//
void Exercise25()
{
}

//
void Exercise26()
{
}

//
void Exercise27()
{
}

//
void Exercise28()
{
}

//
void Exercise29()
{
}

//
void Exercise30()
{
}

//
void Exercise31()
{
}

//
void Exercise32()
{
}

//
void Exercise33()
{
}

//
void Exercise34()
{
}

//
void Exercise35()
{
}

//
void Exercise36()
{
}

//
void Exercise37()
{
}

//
void Exercise38()
{
}

//
void Exercise39()
{
}

//
void Exercise40()
{
}

//
void Exercise41()
{
}

//
void Exercise42()
{
}

//
void Exercise43()
{
}

//
void Exercise44()
{
}

//
void Exercise45()
{
}

//
void Exercise46()
{
}

//
void Exercise47()
{
}

//
void Exercise48()
{
}

//
void Exercise49()
{
}

//
void Exercise50()
{
}

//
void Exercise51()
{
}

//
void Exercise52()
{
}

//
void Exercise53()
{
}

//
void Exercise54()
{
}

//
void Exercise55()
{
}

//
void Exercise56()
{
}