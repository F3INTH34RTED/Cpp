#include <iostream>
#include <typeinfo>

using std::cout;
using std::cin;

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

    return 0;
}

// Function that discusses the differences between datatypes.
void Exercise01()
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

// Function to calculate mortgage and discuss datatype for principal, rate, and number of months.
void Exercise02()
{
    cout << "P = Principal loan amount.\ni = Monthly interest rate.\nn = Number of months requires to repay the loan.\n";
    cout << "Mortgage Payment = P * (i * ((i + 1) ^ n)) / (((i + 1) ^ n) - 1).\n";
    cout << "Principal loan amount will be a double datatype because loan amount can have decimal values and require double precision floating point.\n";
    cout << "Monthly interest rate can be float datatype which is a single precision type and it is enough to be precise enough for monthly interest rate. However, in the formula, "
    " the interest rate would have to be casted to a double data type. Hence, it is best to use double datatype as it is more precise than necessary but would reduce the tedious work"
    " for casting multiple times.\n";
    cout << "Number of months required to repay the loan will be an short unsigned integer if space is an issue. Otherwise, unsigned integer is preferred because the compiler is more"
    " optimized to handle integers as compared to short integers.\n\n\n";
}

// Function to discuss the output of the following code.
void Exercise03()
{
/*  unsigned u = 10, u2 = 42;
    cout << "1. " << u2 - u << "\n2. " << u - u2 << '\n';
    int i = 10, i2 = 42;
    cout << "3. " << i2 - i << "\n4. " << i - i2 << '\n';
    cout << "5. " << i - u << "\n6. " << u - i << "\n\n"; */
    cout << "Expected Output:\n";
    cout << "1. 32\n2. -32 which will be wrapped around to some large positive value.\n3. 32\n4. -32\n5. 0\n6. 0\n\n";
}

// Function to display the output of the code and compare it with the predictions made in Exercise 3
void Exercise04()
{
    unsigned u = 10, u2 = 42;
    cout << "Observed Output:\n";
    cout << "1. " << u2 - u << "\n2. " << u - u2 << '\n';
    int i = 10, i2 = 42;
    cout << "3. " << i2 - i << "\n4. " << i - i2 << '\n';
    cout << "5. " << i - u << "\n6. " << u - i << "\n\n";
}

// Function to determine the type of each literal
void Exercise05()
{
    cout << "(a) 'a' is a character, L'a' is wide character, \"a\" is a char string literal, L\"a\" is a wide char string literal\n";
    cout << "(b) 10 is an integer, 10u is an unsigned inteeger, 10L is a long integer, 10uL is an unsigned long integer, 012 is octal, 0xC is hexadecimal.\n";
    cout << "(c) 3.14 is double, 3.14f is a float, 3.14L is a long double.\n";
    cout << "(d) 10 is an integer, 10u is an unsigned integer, 10. is a double, 10e-2 is a double.\n";
}

// Function to discuss the different between the definitions.
void Exercise06()
{
    cout << "The difference is that in the first initialization, 9 and 7 are integer values whereas in the second initialization, 9 and 7 are octal values.\n";
}

// Function to discuss the type of values the literals represent.
void Exercise07()
{
    cout << "(a) Expected value of \\145 is 'e' and '\\012 is newline. Therefore, the value must be \"Who goes with Fergus?\\n\"\nObserved Output: ";
    cout << "Who goes with F\145rgus?\012";
    cout << "(b) Expected value 31.4 and the type is long double.\nObserved Output: " << 3.14e1L << '\n';
    cout << "(c) Expected Value 1024 and the type is float.\nObserved Output: " << 1024.0f << '\n';
    cout << "(d) Expected Value 3.14 and the type is long double.\nObserved Output: " << 3.14L << '\n';
}

// Function to use escape sequences to print.
void Exercise08()
{
    // 2M
    cout << "2M\n";
    // 2    M
    cout << "2\tM\n";
}

// Function to discuss illegal definitions
void Exercise09()
{
    cout << "(a) Error: Need to create a variable before being used. Cannot use and create varaiable at the same statement. The correct way would be:\n"
    "int input_value;\n"
    "cin >> input_value\n";
    cout << "(b) Error: The value of i will lose it's information since this is an array.\nThe correct way would be double i = 3.14 or int i = 3";
    cout << "(c) Error: Wage needs to be declared before being used. The correct way would be double salary = 9999.99, wage = 9999.99\n";
    cout << "(d) i will be 3.\n";
}

// Function to predict the initial value
void Exercise10()
{
    cout << "global int is some garbage value, local int is some garbage value, and local string will only have 1 terminating character.\n";
}

// Function to discuss whether a statement is a definition, declaration or both.
void Exercise11()
{
    cout << "(a) definition\n(b) declaration and definition\n(c) declaration\n";
}

// Function to discuss the validity of identifiers.
void Exercise12()
{
    cout << "(a) Invalid\n(b)Valid\n(c)Invalid\n(d)Invalid\n(e)Valid\n";
}

// Function to predict the value of 'j'
void Exercise13()
{
    cout << "int i = 42;\n"
            "int main()\n"
            "{\n"
            "    int i = 100;\n"
            "    int j = i;\n"
            "}\n";
    cout << "j = 100.\n";
}

// Function to discuss whether the program is legal, if yes then what would be the output?
void Exercise14()
{
    cout << "int i = 100, sum = 0;\n"
            "for(int i = 0; i != 10; ++i)\n"
            "    sum +=i\n"
            "cout << i << \" \" << sum << \'n;\n";
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    cout << "Expected Sum = 45\nObserved Sum = " << sum << '\n';
}

// Function to discuss invalid definitions
void Exercise15()
{
    cout << "(a) Valid (but the value will be truncated to 1.\n"
            "(b) Invalid, cannot refer to a literal.\n"
            "(c) Valid\n"
            "(d) Invalid, must be initialized\n";
}

// Function to discuss invalid definitions and predict outcome if valid.
void Exercise16()
{
    cout << "(a) r2 changes the value stored at the memory address. Hence, d's value will also change from 0 to 3.14159.\n"
            "(b) r2 changes the value from 3.14159 to 0.\n"
            "(c) i's value remains 0, because at (b) the value of r2 was changed to 0.\n"
            "(d) r1 is 0, because the value of r2 was changed to 0 in (b)\n";
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14159; // d = 3.14159    r2 = 3.14159
    cout << "d = " << d << "\tr2 = " << r2 << '\n';
    r2 = r1; // d = 0   r2 = 0
    cout << "d = " << d << "\tr2 = " << r2 << '\n';
    i = r2; // i = 0    r1 = 0
    cout << "i = " << i << "\tr1 = " << r1 << '\n';
    r1 = d; // i = 0    r1 = 0
    cout << "i = " << i << "\tr1 = " << r1 << '\n';
}

// Function to predict the output of the code
void Exercise17()
{
    cout << "int i, &ri = i;\n"
            "i = 5; ri = 10;\n"
            "cout << i << \" \" << ri << endl;\n\n";
    cout << "Expected Output: 10 10\n\n";

    int i, &ri = i;
    i = 5; ri = 10;
    cout << "Observed Output: " << i << " " << ri << "\n\n";
}

// Function to change the value of pointer and the value to which the pointer points.
void Exercise18()
{
    int i = 10, j = 20;
    int *intPtr = &i;
    cout << *intPtr << '\n';
    intPtr = &j; // Changed the value of pointer
    cout << *intPtr << '\n';

    *intPtr += i;
    cout << "*intPtr = " << *intPtr << "\tj = " << j << "\n\n";
}

// Function to change the value of pointer and the value to which the pointer points.
void Exercise19()
{
    cout << "Pointer is in itself a variable that holds the address of another variable. Hence, a pointer points to the address of another variable. Due to this reason, a pointer"
            " can remain uninitialized, however that it not recommended.\nReferences are not variables but aliases, and therefore, they refer to the same address and due to this,"
            " references need to be initialized.\n";
}

// Function to discuss the output of the following program.
void Exercise20()
{
    int i = 42, *p1 = &i;
    *p1 *= *p1;
    cout << "Expected Outcome: 1764\nObserved Outcome: " << *p1 << '\n';
}

// Function to discuss whether definitions are legal or not and explain them.
void Exercise21()
{
    cout << "(a) Invalid, a double pointer cannot point to an integer.\n"
            "(b) Invalid, the integer pointer must point to an address or a reference.\n"
            "(c) Valid, it points to the address of 'i'\n";
}

// Function to explain the following code
void Exercise22()
{
    cout << "Assuming p is a pointer to an integer.\nif (p) -> If p points to an object or not. If `p` is uninitialized, then the condition will be false.\n"
            "if(*p), by dereferncing, if the value of `i` is 0 then the condition will return false and true otherwise if the value of `i` is a non-zero.\n";
}

// Function to discuss whether a pointer can detect that it is pointing to a valid object or not.
void Exercise23()
{
    cout << "It is not possible to detect whether a pointer is poining to a valid object as mentioned in the forum:\n"
            "https://stackoverflow.com/questions/17202570/c-is-it-possible-to-determine-whether-a-pointer-points-to-a-valid-object/17202622#17202622\n";
}

// Function to discuss why p is legal and lp is illegal.
void Exercise24()
{
    int i = 42;
    void *p = &i;
    // long *lp = &i;
    cout << "The void pointer can point to any type of address because it of type void. However a long pointer has dedicated a certain amount of bytes in the memory and expects "
            "to point to an address that has the same amount of bytes. Therefore, long pointer is illegal and void pointer is legal.\n";
}

// Function to determine the type and value of each of the following variables.
void Exercise25()
{
    cout << "(a) ip is a pointer to an int, &r refers to the address of the pointer, and the value of r is the address to which the pointer is pointing to.\n"
            "(b) i is of type integer, ip is a null pointer.\n"
            "(c) ip is an integer pointer, ip2 is an integer.\n";
}

// Function to discuss illegal statements
void Exercise26()
{
    cout << "(a) Invalid, a constant must be initialized.\n"
            "(b) Valid.\n"
            "(c) Valid\n"
            "(d) ++cnt is valid but ++sz is invalid because a value of a constant cannot be changed.\n";
}

// Function to discuss illegal initializations
void Exercise27()
{
    cout << "(a) &r = 0 is illegal because it needs to reference a variable as this reference does not preceed with the keyword 'const'\n";
    cout << "(b) Legal\n";
    cout << "(c) &r = 0 is illegal because it needs to reference a variable as this reference does not preceed with the keyword 'const'\n";
    cout << "(d) Legal\n";
    cout << "(e) Legal\n";
    cout << "(f) Illegal, must be initialized\n";
    cout << "(g) Legal\n";
}

// Function to discuss illegal initializations
void Exercise28()
{
    cout << "(a) int *const cp is illegal because it must be initialized to another pointer or a memory address\n";
    cout << "(b) int *const p2 is illegal because it must be initialized to another pointer or a memory address\n";    
    cout << "(c) const int ic is illegal because it must be initialized to an integer variable or a literal\n";
    cout << "(d) const int *const p3 is illegal because it must be initialized to another pointer or a memory address\n";
    cout << "(e) const int *p is illegal because it must be initialized to another pointer or a memory address\n";
}

// Function to discuss illegal assignments
void Exercise29()
{
    cout << "(a) An integer variable referring to a const variable is legal. However, the constant variable was not initialized and hence, this assignment will be illegal\n";
    cout << "(b) An interger pointer can equal a constant pointer to a constant int. However, p3 was not initialized which makes this assignment illegal\n";
    cout << "(c) const int ic was not initialized and hence, this assignment is illegal\n";
    cout << "(d) const int ic was not initialized and hence, this assignment is illegal\n";
    cout << "(e) A constant variable must be declared and assigned in the same statement. Any assignments after the decalaration would yield an error\n";
    cout << "(f) Same problem as '(e)'. It needs to be defined and assigned in the same statement\n";
}

// Top / Low level constant
void Exercise30()
{
    cout << "const int v2 = 0 is a top level const\tint v1 = v2 has no constants so top/low level consts are not applicable in this declaration\n";
    cout << "int *p1 = &v1 does not have any constants\t&r1 = v1 has no constants\n";
    cout << "const int *p2 = &v2 is a pointer to a constant integer and hence, it can change the value it is pointing to. Therefore, it is a low level constant\n";
    cout << "const int *const p3 = &i is a constant pointer to a constant int and hence, the left side is low level while right side is top level const\n";
}

// Function to discuss whether assignment are legal and how top level and low level const applies in each case
void Exercise31()
{
    cout << "r1 = v2 is legal because it changes the value of v1 to the value stored at v2\n";
    cout << "p1 = p2 is illegal because p1 is not a constant whereas p2 is a constant.\n";
    cout << "p2 = p1 is legal because it is a low level constant\n";
    cout << "p1 = p3 is illegal because p3 is a low and top level constant, and hence we cannot use a non const pointer to point to a low level const.\n";
    cout << "p2 = p3 is legal because p2 and p3 are both pointing to a constant integer.\n";
}

// Function do discuss whether the code is illegal or not
void Exercise32()
{
    cout << "Code:\n"
    "int null = 0, *p = null;\n";
    cout << "This code is illegal because:\n"
    "1. null is a reserved keyword in C++ and hence cannot name an identifier as `null`\n"
    "2. null is basically an integer literal `0` and hence, we cannot use an integer datatype to initialize an integer pointer.\n"
    "The correct code would be:\n"
    "int i = 0, *p = nullptr;\n";
}