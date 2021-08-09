#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <iomanip>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::bitset;
using std::setprecision;
using std::fixed;

void Exercise01();
void Exercise02();
void Exercise03();
void Exercise04();
void Exercise05();
void Exercise06();
void Exercise07();
void Exercise08();
void Exercise09();
void Exercise10();
void Exercise11();
void Exercise12();
void Exercise13();
void Exercise14();
void Exercise15();
void Exercise16();
void Exercise17();
void Exercise18();
void Exercise19();
void Exercise20();
void Exercise21();
void Exercise22();
void Exercise23();
void Exercise24();

void Program1_GradesUsingBits();

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

int main()
{
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
    
    return 0;
}

// Function to predict the value returned by an arithmetic
void Exercise01()
{
    cout << "5 + 10 * 20 / 2 = 5 + (10 * 20) / 2 = 5 + 200/2 = 105\n";
}

// Function to discuss the order or operands
void Exercise02()
{
    cout << "*(vec.begin())\n(*(vec.begin())) + 1\n";
}

// Function to discuss the trade off between code optimization and potential pitfalls
void Exercise03()
{
    cout << "I would accept this trade-off simply because such a small problem can be solved by grouping the expressions together.\n";
}

// Function to predict the outcome of the expression
void Exercise04()
{
    cout << "Expression: 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2\n";
    cout << "(12 / 3) * 4)) + (5 * 15) + (24 % (4 / 2))\n";
    cout << "(4 * 4) + (75) + (24 % 2)\n";
    cout << "16 + 75 + 0\n";
    cout << "91\n";
    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << '\n';
}

// Function to predict and display the expressions.
void Exercise05()
{
    cout << "(a) 30 * 3 + 21 / 5 = 90 + 4 = 94\n";
    cout << 30 * 3 + 21 / 5 << '\n';
    
    cout << "(b) -30 + 3 * 21 / 5 = -30 + 12 = -18\n";
    cout << -30 + 3 * 21 / 5 << '\n';

    cout << "(c) 30 / 3 * 21 % 5 = 10 * 21 % 5 = 210 % 5 = 0\n";
    cout << 30 / 3 * 21 % 5 << '\n';

    cout << "(c) -30 / 3 * 21 % 4 = -10 * 21 % 4 = -210 % 4 = -2\n";
    cout << -30 / 3 * 21 % 4 << '\n';
}

// Function to detect whether number is even or odd
void Exercise06()
{
    int a = 213241;
    (a % 2) == 0 ? cout << "Even\n" : cout << "Odd\n";
}

// Function to explain what overflow is
void Exercise07()
{
    cout << "Overflow means that when the value of a particular datatype exceeds the value that the data type can hold then an overflow occurs.\n";
    cout << "int a = INT_MAX + 1;\n";
    cout << "This will lead to an overflow and the value will wrap around\n";
}

// Function to explain logical AND, OR and equality operators
void Exercise08()
{
    cout << "logical AND is used when both conditions must be the true\nlogical OR is used when one of the condition must be true\n";
    cout << "equality operators are used to detect whether 2 objects are equal. If they are then it returns true and false otherwise.\n";
}

// Function to discuss what the if condition must evaluate
void Exercise09()
{
    cout << "const char *cp = \"Hello World\"\n";
    cout << "if (cp && *cp)\n";
    cout << "This expression evaluates that if cp points to the first element then it will be false and the element that cp is pointing to is 0, then";
    cout << " the if condition will be false\n";
}

// Function to print integer user inputs until the user enters 42
void Exercise10()
{
    int number;
    while ((cin >> number) && number != 42) cout << number << '\n';
}

// Function to check whether the variables from a to d are in descending order or not
void Exercise11()
{
    int a = 4, b = 3, c = 2, d = 1;
    if (c > d && b > c && a > b) cout << "Values are in descending order\n";
    else cout << "Values are not in descending order\n";

    a = 1, b = 2, c = 3, d = 4;
    if (c > d && b > c && a > b) cout << "Values are in descending order\n";
    else cout << "Values are not in descending order\n";
}

// Function to explain what i != j < k means
void Exercise12()
{
    cout << "i != j < k means that if j < k, then it returns true if the value of i is not 1 and returns false otherwise.\n"
    "Basically, this condition checks that the value of 'i' should not match the value returned from j < k\n";
}

// Function to display the values of 'd' and 'i'
void Exercise13()
{
    int i; double d;
    d = i = 3.5; // d = 3, i = 3
    cout << d << '\t' << i << '\n';
}

// Function to explain the if-conditions
void Exercise14()
{
    cout << "(a) This condition will assign the literal value of 42 to the value of 'i' which is an error.\n";
    cout << "(b) This condition will assign the value of 'i' to 42 and since, any non-zero value is true. This condition will be true.\n";
}

// Function to discuss why the following assignment is illegal
void Exercise15()
{
    cout << "This assignment is illegal because a pointer and a primitive datatype such as int, or double cannot assign to the same rvalue.\n";
    double dval; int ival, *pi;
    dval = ival = 0;
    pi = 0; // or pi = nullptr;
}

// Function to discuss the misconceptions in the following statements and a better way to write it.
void Exercise16()
{
    cout << "(a) The assignment operator has lower precedence than relational operators and hence the programmer might expect that first ";
    cout << "p = getPtr() is evaluated and then the result of it is compared using the relational operator which is incorrect. The better way ";
    cout << "to write would be `if((p = getPtr()) != 0)";
    cout << "\n\n(b)The programmer might expect that the condition is comparing the value of `i` to 1024. Instead, it is first assigning the value ";
    cout << "of `i` to 1024 and then checking whether `i` is true or false. Since, `i` is 1024 it will return true. The better way to write this ";
    cout << "would be `if (i == 1024)` if the value needs to be compared or `if ((i=1024))` if `i` needs to be evaluated first.\n";
}

// Function to explain the prefix and postfix increments
void Exercise17()
{
    cout << "The prefix increment `++i` will return the incremented value. So, if `i` was 1 then it will return 2.\n";
    cout << "The postfix increment `i++` will return the same value and then increment it. So, if `i` was 1 then it will return 1 and then on the next ";
    cout << "statement the value of `i` will change to 2.\n";
}

// Function to explain the potential result of the following while loop
void Exercise18()
{
    cout << "vector<int> ivec = {1, 2, 3, 4, 5};\n"
            "vector<int>::const_iterator iter = ivec.cbegin();\n"
            "while (iter != ivec.cend())\n"
                "\tcout << *(++iter) << '\\n';\n";

    cout << "vector<int> ivec = {1, 2, 3, 4, 5};\n"
            "auto pbeg = v.begin();\n"
            "while (pbeg != v.end() && *beg >= 0) cout << *(++pbeg) << endl;\n\n";
    cout << "The following while loop will start printing from the second element and go upto the element after the last element.\n";
    cout << "Hence, it might print a garbage value.\n";
}

// Function to discuss the validity of the expressions
void Exercise19()
{
    int ival, *ptr;
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "(a) ptr != 0 ensures that the pointer is not a null pointer and *ptr++ ensures that the value at the current index is non-zero "
            "and then increments the pointer. However, the element at the next index is unknown and hence, it could cause an error.\n";
    cout << "(b) ival++ will check whether the value of ival is nonzero and then increment the value. If the value is 0, it is false. If the value "
            " is true, then it would check whether the incremented value `ival` is nonzero. If it is 0 then it is false and true otherwise.\n";
    cout << "(c) Let ival = 0 then the condition would be vec[0] <= vec[1]. If vec[0] <= vec[1] then it returns true, and false otherwise.\n";
    
}

// Function to discuss the legality of the expressions and why they are not legal.
void Exercise20()
{
    cout << "(a) is legal.\n";
    cout << "(b) is not legal because we cannot increment a string value.\n";
    cout << "(c) is not legal because it is read as `*(iter.empty())` and must be changed to `(*iter).empty()`\n";
    cout << "(d) is legal\n";
    cout << "(e) is not legal as it will increment the value stored at location `iter` which string lib does not have\n";
    cout << "(f) is legal\n";
}

// Function to find odd values and double the values of each element
void Exercise21()
{
    vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (vector<int>::const_iterator iter = ivec.cbegin(); iter != ivec.cend(); ++iter)
        cout << *iter << '\n';

    for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
        *iter = (*iter) % 2 != 0 ? (*iter) + (*iter) : *iter;

    for (vector<int>::const_iterator iter = ivec.cbegin(); iter != ivec.cend(); ++iter)
        cout << *iter << '\n';
}

// Function to print fail, low pass or high pass depending on the grades using ternary operator and conditional operator.
void Exercise22()
{
    int grades;
    cout << "Enter grade: ";
    cin >> grades;
    cout << "Version 1\n";
    cout << ((grades < 60) ? "fail\n\n" : ((grades <= 75) ? "low pass\n\n" : "high pass\n\n"));
    cout << "Version 2\n";
    if (grades < 60) cout << "fail\n\n";
    else if (grades <= 75) cout << "low pass\n\n";
    else cout << "high pass\n\n";
    cout << "By using one or more if statements is easier to understand because it is properly segregated.\n";
}

// Function to discuss why p1 is an error and what is the correct way.
void Exercise23()
{
    string s = "word";
    cout << "string p1 = s + s[s.size() - 1] == 's' ? \"\" : \"s\" fails because:\n"
            "1. `+` has a higher precedence than `==` and hence, the statement becomes (s + s[s.size() - 1]) == `s`) and\n"
            "2. We cannot compare an entire string to one single character. Hence, we can use brackets to ensure "
            "that we are comparing the last letter and not the concatenated string.\n";
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
    cout << s << '\n' << p1 << '\n';
}

// Function to describe how the operator would be evaluated if the grade program was right associative
void Exercise24()
{
    cout << "If the operator would be left associative then the expression would be:\n"
            "cout << ((grade > 75) ? \"high pass\" : ((grade > 60) ? \"low pass\" : \"fail\"));";
    cout << "It would first evaluate whether grade is greater than 75. If it is, it would return `high pass`. Otherwise, it would evaluate if grade "
            "is greater than 60. If the grade is greater than 60 then it will return `low pass` and `fail` if grade is less than 60.\n";
}

// Program to track which student passed or failed in a quiz by assigning 0 or 1 in their appropriate bit location.
void Program1_GradesUsingBits()
{
    unsigned long quiz1 = 1; // 32 bits - 0000 0000  0000 0000  0000 0000  0000 0001
    cout << bitset<32>(quiz1) << '\t' << quiz1 << '\n';

    // Student number 27 passed
    quiz1 = quiz1 << 27; // shift all bits to the left by 27 places. Therefore, the first bit `1` will be at the 27th position
    // 0000 1000  0000 0000  0000 0000  0000 0000
    cout << bitset<32>(quiz1) << '\t' << quiz1 << '\n';

    // Student number 25 passed
    // Currently quiz1 is: 0000 1000  0000 0000  0000 0000  0000 0000
    quiz1 = quiz1 << 25; // New quiz 1: 0000 0000  0000 0000  0000 0000  0000 0000
    cout << bitset<32>(quiz1) << '\t' << quiz1 << '\n'; // Information for student number 27 lost and moreover, 25 not recorded
    // The reason being that it bit-shifted all the bits to 25 places towards the left side without considering the fact that 27 would also be moved
    // and there was no placeholder `1` to represent 25 either to be bit-shifted by 25 places.

    // Resetting student number 27 information
    quiz1 = quiz1 | (1UL << 27); // 0000 0000  0000 0000  0000 0000  0000 0000 OR 0000 0000  0000 0000  0000 0000  0000 0001 << 27
    // Alternatively, this can be rewritten as `quiz1 |= 1UL << 27
    cout << bitset<32>(quiz1) << '\t' << quiz1 << '\n';

    // Now we want to change 0 to 1 at location 25 because student number 25 passed
    quiz1 = quiz1 | (1UL << 25); // 0000 1000  0000 0000  0000 0000  0000 0000 OR 0000 0010  0000 0000  0000 0000  0000 0001
    // Alternatively, this can be rewritten as `quiz1 |= 1UL << 25
    cout << bitset<32>(quiz1) << '\t' << quiz1 << '\n';

    // Student number 13 passed
    quiz1 = quiz1 | (1UL << 13); // Alternatively, this can be rewritten as `quiz1 |= 1UL << 13
    cout << bitset<32>(quiz1) << '\t' << quiz1 << '\n';

    // On re-evaluation student number 27 failed
    quiz1 = quiz1 & ~(1UL << 27); // Alternatively, this can be rewritten as `quiz1 &= ~(1UL << 13)`
    //    1UL << 27         = 0000 1000  0000 0000  0000 0000  0000 0000
    // ~(1UL << 27)         = 1111 0111  1111 1111  1111 1111  1111 1111
    // quiz1 & ~(1UL << 27) =   0000 1010  0000 0000  0010 0000  0000 0000 && 
    //                          1111 0111  1111 1111  1111 1111  1111 1111
    //                          0000 0010  0000 0000  0010 0000  0000 0000 - Only 25 and 13 passed
    cout << bitset<32>(quiz1) << '\t' << quiz1 << '\n';
}

// Function to discuss the value of expression ~'q' << 6
void Exercise25()
{
    cout << "~'q' << 6 is basically (~'q') << 6 and since, 'q' is a character and there is a left shift operand, the number of bits will change from "
            "8 to 32 bits.\n"
            "q's 08 bit pattern: 0111 0001\n"
            "q's 32 bit pattern: 0000 0000  0000 0000  0000 0000  0111 0001\n"
            "~q:                 1111 1111  1111 1111  1111 1111  1000 1110\n"
            "~q << 6:            1111 1111  1111 1111  1110 0011  1000 0000\n";
    cout << "        q = " << bitset<32>('q') << '\t' << 'q' << '\n';
    cout << "       ~q = " << bitset<32>(~'q') << '\t' << ~'q' << '\n';
    cout << "(~q) << 6 = " << bitset<32>(~'q' << 6) << '\t' << ~'q' << 6 << '\n';
}

// Function to discuss the result of using unsigned int rather than unsigned long in Program1_GradesUsingBits
void Exercise26()
{
    cout << "Size of unsigned long is " << sizeof(unsigned long) << " bytes.\n";
    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes.\n";
    cout << "On this system, the number of bytes for unsigned int and unsigned long is the same and hence, there would be no difference.\n";
    cout << "However, integer guarantees a minimum of 2 bytes and on systems with 2 byte integers, it would not be enough to store information about 30 "
            "students in an integer.\n";
}

// Function to display the result of each expression
void Exercise27()
{
    cout << "unsigned long ul1 = 3, ul2 = 7"
            "(a) ul1 & ul2:\n"
            "ul1       = 0000 0000  0000 0000  0000 0000  0000 0011 BitwiseAND\n"
            "ul2       = 0000 0000  0000 0000  0000 0000  0000 0111\n"
            "ul1 & ul2 = 0000 0000  0000 0000  0000 0000  0000 0011 = 3\n";
    cout << "unsigned long ul1 = 3, ul2 = 7"
            "(a) ul1 | ul2:\n"
            "ul1       = 0000 0000  0000 0000  0000 0000  0000 0011 BitwiseOR\n"
            "ul2       = 0000 0000  0000 0000  0000 0000  0000 0111\n"
            "ul1 | ul2 = 0000 0000  0000 0000  0000 0000  0000 0111 = 7\n";
    cout << "unsigned long ul1 = 3, ul2 = 7"
            "(a) ul1 && ul2:\n"
            "ul1       = 0000 0000  0000 0000  0000 0000  0000 0011 AND\n"
            "ul2       = 0000 0000  0000 0000  0000 0000  0000 0111\n"
            "ul1 | ul2 = 0000 0000  0000 0000  0000 0000  0000 0001 = True = 1\\n";
    cout << "unsigned long ul1 = 3, ul2 = 7"
            "(a) ul1 || ul2:\n"
            "ul1       = 0000 0000  0000 0000  0000 0000  0000 0011 OR\n"
            "ul2       = 0000 0000  0000 0000  0000 0000  0000 0111\n"
            "ul1 | ul2 = 0000 0000  0000 0000  0000 0000  0000 0001 = True = 1\n";
    unsigned long ul1 = 3, ul2 = 7;
    cout << "ul1 = " << bitset<sizeof(unsigned long) * 8>(ul1) << '\t' << ul1 << '\n';
    cout << "ul1 = " << bitset<sizeof(unsigned long) * 8>(ul2) << '\t' << ul2 << '\n';
    cout << "ul1 = " << bitset<sizeof(unsigned long) * 8>(ul1 & ul2) << '\t' << (ul1 & ul2) << '\n';
    cout << "ul1 = " << bitset<sizeof(unsigned long) * 8>(ul1 | ul2) << '\t' << (ul1 | ul2) << '\n';
    cout << "ul1 = " << bitset<sizeof(unsigned long) * 8>(ul1 && ul2) << '\t' << (ul1 && ul2) << '\n';
    cout << "ul1 = " << bitset<sizeof(unsigned long) * 8>(ul1 || ul2) << '\t' << (ul1 || ul2) << '\n';
}

// Function to print size of each built-in types
void Exercise28()
{
    cout << "int: " << sizeof(int) << '\n';
    cout << "char: " << sizeof(char) << '\n';
    cout << "double: " << sizeof(double) << '\n';
    cout << "float: " <<  sizeof(float) << '\n';
    cout << "wide char: " <<  sizeof(wchar_t) << '\n';
    cout << "16bit char: " <<  sizeof(char16_t) << '\n';
    cout << "32bit char: " <<  sizeof(char32_t) << '\n';
    cout << "long: " <<  sizeof(long) << '\n';
    cout << "long long: " <<  sizeof(long long) << '\n';
}

// Predict output of following code
void Exercise29()
{
    int x[10], *p;
    cout << sizeof(x) / sizeof(*x) << '\n'; // 40 bytes / 4 bytes = 10
    cout << sizeof(p) / sizeof(*p) << '\n'; // size of pointer (8 bytes) / size of int (4 bytes)
}

// Function to parenthesize the expressions
void Exercise30()
{
    cout << "(a) sizeof(x) + y\n";
    cout << "(b) sizeof(p->mem[i])\n";
    cout << "(c) sizeof(a) < b\n";
    cout << "(d) sizeof(f())\n";
}

// Function to explain the result using post-fix and re-writing loop to use post-fix
void Exercise31()
{
    // Initialization
    vector<int> ivec;
    for (int i = 0; i < 21; ++i) ivec.push_back(i);

    // Pre-fix loop
    int count = 20;
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --count)
        ivec[ix] = count;
    
    for (vector<int>::size_type i = 0; i < ivec.size(); ++i) cout << ivec[i] << '\n';
    cout << "Using prefix will increment and then return the incremented value. Postfix will return the original value and then increment it which "
            " is a heavier operation.\n";

    count = 20;
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, --count)
        ivec[ix] = count;
    
    for (vector<int>::size_type i = 0; i < ivec.size(); ++i) cout << ivec[i] << '\n';
}

// Function to explain the loop
void Exercise32()
{
    cout << "constexpr int size = 5;\n"
            "int ia[size] = {1, 2, 3, 4, 5};\n"
            "for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {} // loop body\n";
    cout << "This loop initializes an integer ptr to the first address of the array and increments pointer 5 times from the current address location.\n"
            "It also initializes an integer to 0, and increments it until ix is 4. If either of them become false, then the loop terminates.\n";
}

// Function to explain the following expression: someValue ? ++x, ++y : --x, --y;
void Exercise33()
{
    cout << "if the boolean value of someValue is non zero then it will increment the value of `x` and `y` and decrement it otherwise.\n";
}

// Function to explain the conversion taking place in the expressions
void Exercise34()
{
    cout << "(a) if (fval) -> the float value is truncated to an int value and then to bool. If the int value is nonzero, its true and false otherwise.\n";
    cout << "(b) dval = fval + ival; -> ival is converted to float value which is then converted to double value\n";
    cout << "(c) dval + ival * cval -> cval is converted to int and then multiplied to ival. Then the result is converted to a double and added to dval\n";
}

// Function to identify any implicit conversions
void Exercise35()
{
    char cval; int ival = 11; unsigned int ui = 10; float fval; double dval;
    cout << "(a) cval = 'a' + 3; -> 'a' is being converted to int and then added by 3 and the result is casted back to char type.\n"
            "'a' ASCII value is 97 and hence, 97 + 3 = 100 and therefore, expected value of cval is 'd'\n";
    cout << "(b) fval = ui - ival * 1.0; -> the result of (ui - ival) is converted to double and then multiplied by 1.0 followed by casting to float\n";
    cout << "(c) dval = ui * fval; -> ui is converted to float and then multiplied and then the result is casted to double.\n";
    cout << "(d) cval = ival + fval + dval; -> ival is converted to float then added to fval and the result is converted to double and added to dval. "
            "Then the result is truncated to an int which represents the symbol according to the ASCII character.\n";
    cval = 'a' + 3;
    cout << cval << '\n';
    
    fval = ui - ival * 1.0; // expected value -1.00
    // Print to 2 decimal places
    cout << fixed;
    cout << setprecision(2);
    cout << fval << '\n';
    
    dval = ui * fval; // expected: 10 * -1.0 = -10.00
    cout << dval << '\n';

    cval = ival + fval + dval; // expected: 11 + (-1.00) + (-10.00) = 0 which is NULL
    cout << cval << '\n';
}

// Function to do integrat multiplication
void Exercise36()
{
    int i = 2; double d = 3.8;
    i *= (int)d;
    cout << i << '\n';
}

// Function to rewrite old style casts to named cast
void Exercise37()
{
    int i = 0;
    double d = 0;
    std::string str("some string");
    const std::string *ps = &str;
    char c = 'c';
    char *pc = &c;
    void *pv;

    //pv = (void*)ps;
    pv = static_cast<void *>(const_cast<std::string *>(ps));
    //pv = const_cast<std::string *>(ps);  // Also work.

    //i = int(*pc);
    i = static_cast<int>(*pc);

    //pv = &d;
    pv = static_cast<void *>(&d);

    //pc = (char*) pv;
    pc = static_cast<char *>(pv);
    // Credit: https://github.com/jaege/Cpp-Primer-5th-Exercises/blob/master/ch4/4.37.cpp
}

// Function to explain the expression
void Exercise38()
{
    cout << "double slope = static_cast<double>(j/i)\n";
    cout << "This expression casts the result of (j/i) to double and then assign it to slope.\n";
}
