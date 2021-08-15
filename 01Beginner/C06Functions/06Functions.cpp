#include <iostream>
#include <string>
#include <initializer_list>
#include <vector>
#include <assert.h>
#include "06Functions.h"

//#define NDEBUG // NDEBUG = No Debugging

using std::cin;
using std::cout;
using std::initializer_list;
using std::string;
using std::vector;

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
void Exercise27(initializer_list<int> num_list);
void Exercise28();
void Exercise29();
bool Exercise30(const string &str1, const string &str2);
void Exercise31();
int &Exercise32GetArrayIndex(int *arry, int index);
void Exercise33PrintVector(vector<int>::const_iterator beg, vector<int>::const_iterator end);
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
void Exercise47(vector<int>::const_iterator beg, vector<int>::const_iterator end);
void Exercise48();
void Exercise49();
void Exercise50();
void Exercise51();
void Exercise52();
void Exercise53();
void Exercise54();
void Exercise55();
void Exercise56();

int main()
{
    // Exercise01();
    // Exercise02();
    // Exercise03();
    // Exercise04();
    // Exercise05();
    // Exercise06();
    // cout << Exercise07() << '\n';
    // Exercise08();
    // Exercise09();
    // Exercise10SwapIntsUsingPointers(x, y);
    // Exercise11Reset(x);
    // Exercise12SwapIntsUsingReferences(x, y);
    // Exercise13();
    // Exercise14();
    // Exercise15();
    // Exercise16();
    // Exercise17(str);
    // Exercise18();
    // Exercise19();
    // Exercise20();
    // cout << Exercise21(x, y) << '\n';
    // Exercise22();
    // Exercise23();
    // Exercise24();
    // Exercise25();
    // Exercise26();
    // Exercise27({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    // Exercise28();
    // Exercise29();
    // cout << Exercise30("String 1", "String 2") << '\n';
    // Exercise31();
    // cout << Exercise32GetArrayIndex(arr, 6) << '\n';
    // Exercise33PrintVector(ivec.cbegin(), ivec.cend());
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
    // Exercise46();
    // Exercise47(ivec.cbegin(), ivec.cend());
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
    while (x > 1)
        fact *= x--;
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
        for (char &x : s)
            x = tolower(x);

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
int Exercise21(const int a, const int *const b)
{
    return a >= *b ? a : *b;
    // const int *b should be used to avoid changing the value of 'b'
    // int const *b should be used to avoid changing the value to which 'b' points
    // therefore, const inst const *b should be the type of pointer
}

// Function to swap 2 ints
void Exercise22()
{
    // Refer to exercise 3 and 4
}

// Function to print the values of int and integer array
void Exercise23()
{
    // To print `i`
    // void print(const int a) cout << a << '\n';
    // Function call: print(i);

    // To print `int j = {0,1};`
    // void print(int *const beg, const int *const end)
    // {
    //      while (beg != end) cout << *beg++ << '\n';
    // }
    // Function call: print(beg(j), end(j));
}

// Function to explain the behavior of the given function
void Exercise24()
{
    /*
    void print(const int ia[10])
    {
        for (size_t i = 0; i != 10; ++i) cout << ia[i] << endl;
    }
    */

    // The problem is that we cannot pass an array by value, and when we pass an array to a function, we are actually passing a pointer to the
    // array's first element. In this question, const int ia[10] is actually same as const int*, and the size of the array is irrelevant.
    // we can pass const int ia[3] or const int ia[255], there are no differences. If we want to pass an array which size is ten, we should use reference
    // like that: void print10(const int (&ia)[10]) { /*...*/ }
}

// Function to discuss how to write a main function that takes 2 arguments, concatenates the supplied arguments, and prints the argument.
void Exercise25()
{
    // On command line: path\filename.exe give arguments here
    // On powershell:   cd path (press enter)
    //                  ./filename give arguments here

    /*int main(int argc, char *argv[])
    {
        string str;
        for (int i = 1; i != argc; ++i)
            str += "argv[" + std::to_string(i) + "]: " + string(argv[i]) + "\n";
        cout << str << std::endl;
    }
    */
}

// Function to discuss the expected output from Exercise25
void Exercise26()
{
    /*
    Expected output:
    argv[1]: give
    argv[2]: arguments
    argv[3]: here
    */
}

// Function to produce the sum from the initializer list
void Exercise27(initializer_list<int> num_list)
{
    // Call: Exercise27({1,2,3,4,5,6,7,8,9,10,11});
    int sum = 0;
    for (const int& num : num_list) sum += num;
    cout << "The sum is: " << sum << '\n';
}

// Function to discuss the type of variable `elem`
void Exercise28()
{
    /*
    void error_msg(ErrCode e, initializer_list<string> il)
    {
        cout << e.msg() << ": ";
        for (const auto &elem : il) cout << elem << " ";
        cout << endl;
    }
    */
    // The type of auto is const string &elem
}

// Function to discuss whether loop control variable would be used as a ref
void Exercise29()
{
    // Yes, if the datatype is not a primitive datatype such as int, float, double, char etc. Otherwise if it is an object of type
    // string or user defined type then I would use references.
}

// Function to discuss compiler errors on failure of bool return of every path flow
bool Exercise30(const string &str1, const string &str2)
{
    // if (str1.size() == str2.size()) return str1 == str2;
    // string::size_type size = str1.size() < str2.size() ? str1.size() : str2.size();
    // for(string::size_type i = 0; i < size; ++i)
    // {
    //     if(str1[i] != str2[i]) return; -> return statement with no value, in function returning 'bool'
    // }

    if (str1.size() == str2.size()) return str1 == str2;
    string::size_type size = str1.size() < str2.size() ? str1.size() : str2.size();
    for(string::size_type i = 0; i < size; ++i)
    {
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

// Function to discuss when it's valid to return a reference to a constant?
void Exercise31()
{
    // When there is a pre-existing object then it is valid to return a reference to a const.
}

// Function to discuss the output and legality of the function
int &Exercise32GetArrayIndex(int *arry, int index)
{
    return arry[index];
    /*
    Testing:
        int ia[10];
        for (int i = 0; i < 10; ++i) Exercise32GetArrayIndex(ia, i) = i;
        for (int i = 0; i < 10; ++i) cout << ia[i] << '\n';
    */
}

// Function to print the contents of a vector
void Exercise33PrintVector(vector<int>::const_iterator beg, vector<int>::const_iterator end)
{
    if (beg != end)
    {
        cout << *beg << '\n';
        Exercise33PrintVector(++beg, end);
    }
}

// Function to discuss the difference between `if(val > 1) and if(val != 0)` in the factorial(int val) funciton
void Exercise34()
{
    /*
    int factorial(int val)
    {
        if (val != 0) return factorial(val - 1) * val;
        return 1;
    }
    int factorial(int val)
    {
        if (val > 1) return factorial(val - 1) * val;
        return 1;
    }
    Case 1: Analyzing 5! when `if(val != 0)`
        val = 5: fact (4) * 5; (1 * 1 * 2 * 3 * 4 * 5 = 120)
        val = 4: fact (3) * 4; (1 * 1 * 2 * 3 * 4 = 24)
        val = 3: fact (2) * 3; (1 * 1 * 2 * 3 = 6)
        val = 2: fact (1) * 2; (1 * 1 * 2 = 2)
        val = 1: fact (0) * 1; (1 * 1 = 1)
        val = 0: return 1;
    Case 2: Analyzing 5! when `if(val > 1)`
        val = 5: fact (4) * 5; (1 * 2 * 3 * 4 * 5 = 120)
        val = 4: fact (3) * 4; (1 * 2 * 3 * 4 = 24)
        val = 3: fact (2) * 3; (1 * 2 * 3 = 6)
        val = 2: fact (1) * 2; (1 * 2 = 2)
        val = 1: return 1;
    Conclusion: There is an extra function call when we use (val != 0)
    Case 3: If the value is negative, then it will result in an infinite loop.
    */
}

// Function to discuss the reasoning behind using fact(val - 1) rather than fact(val--)
void Exercise35()
{
    // It is because the order of operation is undefined in fact(val--);
    // The function could have executed fact() first and then val-- or vice-vera.
}

// Function to return a reference to an array of 10 strings
void Exercise36()
{
    // string (&func(string (&arrStr)[10]))[10];
}

// Function to write 3 additional declarations for the function in the previous exercise.
void Exercise37()
{
    // using ArrT = string[10];
    // ArrT& func1(ArrT& arr);

    // auto func2(ArrT& arr) -> string(&)[10];

    // string arrS[10];
    // decltype(arrS)& func3(ArrT& arr);

    // I prefer the second form.
}

// Function to revise the `arrPtr` function
void Exercise38()
{
    // int odd[] = {1,3,5,7,9}, even[] = {0,2,4,6,8};
    // decltype(odd)& arrPtr(int i)
    // {
    //     return (i % 2) ? odd : even;
    // }
}

// Function to explain the effect of the second declaration
void Exercise39()
{
    // (a) Legal, they both have the same return types and repeated declaration without definition.
    // (b) int get() and double get() is illegal because have 2 different return types but no way of function mapping as none of them have
    // an argument for the compiler to decide which function to call.
    // (c) int *reset(int *) and double *reset(double *) is legal because the return type and the parameter types are different.
}

// Functions to discuss declarations that are in error
void Exercise40()
{
    // (a) int ff(int a, int b = 0, int c = 0) is legal.
    // (b) char *init(int ht = 24, int wd, char bckgrnd) is illegal because all the following declarations after the default init must also be
    //     default initialized.
}

// Function to discuss illegal function calls and legal but contrary to programmer's intent.
void Exercise41()
{
    // (a) is illegal because height has not been default initialized and there were no arguments passed during the function call.
    // (b) is legal
    // (c) is legal but might be contrary to the programmer's intent because `14` is for the height and int(`*`) is for the width
}

// Function to return the word ending with an 's' if the word is plural and without an 's' if the word is singular
string Exercise42MakePlural(size_t counter, const string &word, const string &ending = "s")
{
    return (counter > 1) ? word + ending : word;
}

// Function to discuss which function definition and declaration would go in a header file.
void Exercise43()
{
    // (a) I would put this in a header file because it is an inline function.
    // (b) This is neither an inline nor a constexpr function and hence, this will not go in the header file.
}

// Function to rewrite the isShorter function to inline
inline bool Exercise44IsShorter(const string &str1, const string &str2)
{
    return str1 > str2;
}

// Function to discuss when a function must be inline.
void Exercise45()
{
    /*
        Short functions that span upto 5 lines of code are great examples of making a function inline. Moreover, the compiler is optimized in
        a way to detect short functions automatically and make them inline.
        Functions between 5-10 lines of code need serious consideration whether they can be inline or not based on the time and space
        complexity.
        Functions with 10+ lines of code should not be inline.
    */
}

// Function to display isShorter as constexpr
void Exercise46()
{
    // No because string::size() is not a constexpr function and s1.size() == s2.size() is not a constant expression.
}

// Function to use debugging during recursion execution
void Exercise47(vector<int>::const_iterator beg, vector<int>::const_iterator end)
{
    static int counter = 0;
    // With debug -> Define `#define NDEBUG` on line 8
    // Without debug -> Comment or remove `#define NDEBUG` on line 8
    if (beg != end)
    {
        #ifndef NDEBUG
            cout << counter++ << '\t';
        #endif
        cout << *beg << '\n';
        Exercise47(++beg, end);
    }
}

// Function to discuss whether assert(cin) is a good use or not.
void Exercise48()
{
    // No, assert would be meaningless here because any combination of character entered is a string.
}

// Function to discuss what is a candidate and a viable function.
void Exercise49()
{
    /*
        A candidate function is a function whose name in the declaration matches with the function caller's name.
        A viable function is a function whose:
        - number of arguments in function caller = number of parameters
        - types of arguments match exactly with the parameter types
        - types of arguments can be converted to parameter types. 
    */
}

// Function to discuss the function calls to which declaration they belong or whether the function call is an error
void Exercise50()
{
    // (a) is ambiguous because there are 2 functions:
    //      f(int, int) and f(double, double) and therefore, when we call f(2.56, 42) it applies to both the functions because either
    //      2.56 can be converted to int or 42 can be converted to double and hence, this call is an error as it leads to ambiguity.
    // (b) is f(int)
    // (c) is f(int, int)
    // (d) is f(double, double)
}

// Function to write all 4 versions of `f` to predict output from Exercise 50
void Exercise51()
{
    /*
    Functions:
    - void f() {cout << "f()" << "no parameters" << '\n';}
    - void f(int x) {cout << "f(int x): " << x << '\n';}
    - void f(int x, int y) {cout << "f(int x, int y): " << x << y << '\n';}
    - void f(double x, double y = 3.14) {cout << "f(double x, double y): " << x << y << '\n';}
    Output:
    (a) Error - Ambiguity
    (b) f(int x): 42
    (c) f(int x, int y): 42, 0
    (d) f(double x, double y): 2.56, 3.14
    */
}

// Ranking the function calls
void Exercise52()
{
    // (a) - Rank 3 (Match through promotion)
    // (b) - Rank 4 (Match through arithmetic conversion)
}

// Function to explain the effect of second declaration
void Exercise53()
{
    // (a) The difference between the 2 declarations is that one can change the values in the function whereas one cannot.
    // (b) Same as 'a'
    // (c) In this case the const are removed and hence we will end up having 2 function with the same declarations which is illegal
}

// Function to declare a function that takes two integer parameters and return an int and declares a vector whole elements have this function
// pointer type
void Exercise54()
{
    // int func(int a, int b);

    // using pFunc1 = decltype(func) *;
    // typedef decltype(func) *pFunc2;
    // using pFunc3 = int (*)(int a, int b);
    // using pFunc4 = int(int a, int b);
    // typedef int(*pFunc5)(int a, int b);
    // using pFunc6 = decltype(func);

    // std::vector<pFunc1> vec1;
    // std::vector<pFunc2> vec2;
    // std::vector<pFunc3> vec3;
    // std::vector<pFunc4*> vec4;
    // std::vector<pFunc5> vec5;
    // std::vector<pFunc6*> vec6;
    // Credits: https://github.com/Mooophy/Cpp-Primer/blob/master/ch06/README.md
}

// 4 functions to add, sub, mult and divide
void Exercise55()
{
    /*
        inline int add(int x, int y) {return x + y;}
        inline int sub(int x, int y) {return x - y;}
        inline int mul(int x, int y) {return x * y;}
        inline int div(int x, int y) {return y == 0 ? y / x : x / y;}
    */
}

//
void Exercise56()
{
        /*
        
        inline int add(int x, int y) {return x + y;}
        inline int sub(int x, int y) {return x - y;}
        inline int mul(int x, int y) {return x * y;}
        inline int div(int x, int y) {return y == 0 ? y / x : x / y;}
        inline void printIntVector(vector<int>::const_iterator beg, vector<int>::const_iterator end)
        {
            while (beg != end) cout << *beg++ << '\n';
        }

        int main()
        {
            vector<int> ivec;
            int x, y;
            cout << "Enter 2 numbers to add: ";
            cin >> x >> y;
            ivec.push_back(add(x,y));

            cout << "Enter 2 numbers to sub: ";
            cin >> x >> y;
            ivec.push_back(sub(x,y));

            cout << "Enter 2 numbers to mul: ";
            cin >> x >> y;
            ivec.push_back(mul(x,y));

            cout << "Enter 2 numbers to div: ";
            cin >> x >> y;
            ivec.push_back(div(x,y));
        }
    */
}