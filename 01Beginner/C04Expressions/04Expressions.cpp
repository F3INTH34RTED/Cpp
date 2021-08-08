#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

void Dummy()
{
    vector<int> ivec = {1, 2, 3, 4, 5};
    vector<int>::const_iterator iter = ivec.cbegin();
    while (iter != ivec.cend())
        cout << *(++iter) << '\n';
}

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

//
void Exercise19()
{

}

//
void Exercise20()
{

}

//
void Exercise21()
{

}

//
void Exercise22()
{

}

//
void Exercise23()
{

}

//
void Exercise24()
{

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
