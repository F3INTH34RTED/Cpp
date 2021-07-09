#include <iostream>
#include "Sales_item.h"

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

void Program1_CountConsecutiveRecurringNumbers();

void Exercise17();
void Exercise18();
void Exercise19();
void Exercise20();
void Exercise21();
void Exercise22();
void Exercise23();
void Exercise24();
void Exercise25();

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

    // Program1_CountConsecutiveRecurringNumbers();

    // Exercise17();
    // Exercise18();
    // Exercise19();
    // Exercise20();
    // Exercise21();
    // Exercise22();
    // Exercise23();
    // Exercise24();
    // Exercise25();

    return 0;
}

// Function to check whether the program compiles successfully and discusses the file naming convention.
void Exercise01()
{
    cout << "The compiler file naming convention is fileName.cpp\nThe program successfully compiles.\n";  
}

// Function to discuss on how to check the value returned by the program on exit using command prompt or CMD.
void Exercise02()
{
    cout << "On command prompt (CMD) go to the path and run the exe application on CMD and then type \"echo \%ERRORLEVEL\%\" which will return the value that was returned "
    "by the program. 0 indicates that the program executed successfully whereas non-zero value indicates that there was some error in the program.\n";
}

// Function to print hello world.
void Exercise03()
{
    cout << "Hello, World.\n";
}

// Function to multiply two values.
void Exercise04()
{
    int x, y;
    cout << "Enter two values: ";
    cin >> x >> y;
    cout << "The product of " << x << " and " << y << " is " << x * y << '\n';
}

// Function to add two values and write cout code result in multiple lines.
void Exercise05()
{
    int x, y;
    cout << "Enter two values: ";
    cin >> x >> y;
    cout << "The sum of ";
    cout << x << " and ";
    cout << y << " is ";
    cout << x + y << '\n';
}

// Function to add two values and to discuss the legality of code fragment.
void Exercise06()
{
    /*
    The following code fragment is illegal because there is a semi-colon at the end of first, second and third line which ends the statement on first line, but the second
    and third lines do not start with a `cout`.
    std::cout << "The sum of " << v1;
                << " and " << v2;
                << " is " << v1 + v2 << std::endl;
    The code aims to add 2 values.
    */
   int x, y;
   cout << "Enter two values: ";
   cin >> x >> y;
   cout << "The sum of " << x
        << " and " << y
        << " is " << x + y << std::endl;
}

// Function that shows 1 incorrectly nested comment
void Exercise07()
{
    cout << "/*This is */ an incorrectly nested comment.*/ */\n";
}

// Function to discuss which statement is legal/illegal.
void Exercise08()
{
    cout << "1. std::cout << \"/*\"; is legal. \n";
    cout << "2. std::cout << \"*/\"; is legal. \n";
    cout << "3. std::cout << /* \"*/\" */; is illegal. \n";
    cout << "4. std::cout << /* \"*/\" /* \"/*\" */; is illegal. \n";
}

// Function to sum numbers from 50 to one hundred.
void Exercise09()
{
    int number = 50, total = 0;
    while (number <= 100)
        total += number++;
    cout << "The sum from 50 to 100 is: " << total << '\n';
}

// Function to print from 10 down to 0.
void Exercise10()
{
    int number = 10;
    while (number >= 0)
        cout << number-- << '\n';
}

// Function to print all numbers within a range where the start and end values are entered by the user.
void Exercise11()
{
    int startRange, endRange;
    cout << "Enter two numbers: ";
    cin >> startRange >> endRange;
    while (endRange >= startRange)
        cout << endRange-- << '\n';
}

// Function to discuss the output of for loop
void Exercise12()
{
    // This loop iterates from -100 to 100 and accumulates the value of `i` to the current value of `sum`. The value of sum will be -100 as it will not add 100 to the sum.
    int sum = 0;
    for (int i = -100; i < 100; ++i)
        sum += i;
    cout << sum << '\n';
}

// Function that re-wrote exercise 9, 10, and 11 in for-loop.
void Exercise13()
{
    // 9. For loop to sum the number from 50 to 100
    int total = 0;
    for (int i = 50; i <= 100; ++i)
        total += i;
    cout << "Sum from 50 - 100 is: " << total << "\n\n\n";

    // 10. For loop to print numbers from 10 down to 0.
    for (int i = 10; i >= 0; --i)
        cout << i << '\n';
    cout << "\n\n";
    // 11. Print numbers within the range specified by the user.
    int startRange, endRange;
    cout << "Enter start and end range: ";
    cin >> startRange >> endRange;
    for (int i = startRange; i <= endRange; ++i)
        cout << i << '\n';
}

// Function to discuss the advantages and disadvantages between for loop and while loop.
void Exercise14()
{
    cout << "There are no advantages and disadvantages in using either in terms of space and time complexity. However, a while loop is generally used when the number of iterations"
    " are unknown and for loops are generally used when number of iterations are known. However, they can be used interchangeably. It all boils down to coding style and preference.\n";
}

// Function to discuss common errors.
void Exercise15()
{
    cout << "1. std::cout << \"Read each file.\" << std::endl: (ERROR: Used a colon and not a semi-colon to terminate the statement)\n";
    cout << "2. std::cout << Update master. << std::endl; (ERROR: Update master is not in double quotes or in the case that update and master are variables then an output stream"
    " operator between the two variables is missing)\n";
    cout << "3. std::cout << \"Write new master\" std::endl; (ERROR: Output stream operator missing between the string literal and endl keyword.\n";
}

// Function to find the sum of 'n' numbers entered by the user.
void Exercise16()
{
    int number = 1, total = 0;
    while (number != 0)
    {
        cout << "Enter a number (0 to quit): ";
        cin >> number;
        total += number;
    }
    cout << "The final sum of all numbers entered is: " << total << '\n';
}

// Function to count consecutive recurring numbers based on user input.
void Program1_CountConsecutiveRecurringNumbers()
{
    int currentValue = 0, value = 0; // current value will keep the repeating numbers and value will hold a new number.
    cout << "Enter a series of numbers (0 to exit): \n";
    if (cin >> currentValue) // Read the first number and check if its valid.
    {
        int counter = 1;
        while (cin >> value && value != 0) // Read all the remaining numbers while checking their validity.
        {
            if (value == currentValue) counter++;
            else
            {
                cout << currentValue << " occurs " << counter << " times.\n";
                currentValue = value;
                counter = 1;
            }
        }
        cout << currentValue << " occurs " << counter << " times.\n";
    }
}

// Function to discuss the result in program 1 if all the values are equal and when all values are distinct.
void Exercise17()
{
    cout << "When all values are equal, it will proceed to display the number of times that value has been repeated.\n";
    cout << "When there are no duplicated values, then the program will always display that each value only occurs 1 time.\n";
}

// Function 1 to test the program 1 output when all values are equal and when all values are distinct.
void Exercise18()
{
    cout << "42 42 42 42 42 42 42 42 42 42 0 (Enter) -> 42 occurs 10 times.\n";
    cout << "1 2 3 4 5 6 7 8 9 10 (Enter) -> 1 occurs 1 times, 2 occurs 1 times .... , 10 occurs 1 times.\n";
}

// Function to handle user input error in exercise 9, 10 and 11
void Exercise19()
{
    // 9. Program to sum the numbers from 50 to 100.
    int startRange = 50, endRange = 100;
    if (startRange < endRange)
    {
        int total = 0;
        while(startRange <= endRange) total += startRange++;
        cout << "Sum from 50 - 100 is: " << total << "\n\n\n";
    }

    // 10. Program to print the numbers from 10 down to 0.
    endRange = 10, startRange = 0;
    if (endRange > startRange)
    {
        while (endRange >= startRange) cout << endRange-- << '\n';
        cout << "\n\n";
    }

    // 11. Program to print the numbers from a given range by user.
    cout << "Enter start and end range: ";
    cin >> startRange >> endRange;
    if (startRange < endRange)
    {
        while (startRange <= endRange) cout << startRange++ << '\n';
        cout << "\n\n";
    }
    else if (startRange > endRange)
    {
        while (startRange >= endRange) cout << startRange-- << '\n';
        cout << "\n\n";
    }
    else if (startRange == endRange) cout << endRange << '\n';
}

// Function to read sales item book transactions and print it to the standard output.
void Exercise20()
{
    int number;
    cout << "How many book sales transaction do you wish to record? ";
    cin >> number;
    for (int i = 0; i < number; ++i)
    {
        Sales_item item;
        cout << "Enter book details (ISBN quantity price): ";
        cin >> item;
        cout << item << '\n';
    }
}

// Function to read 2 sales item objects with same isbn and produces their sum.
void Exercise21()
{
    Sales_item item1, item2;
    cout << "Enter book item 1 details: ";
    cin >> item1;
    cout << "Enter book item 2 details: ";
    cin >> item2;
    if (item1.isbn() == item2.isbn())
        cout << "The sum of two book records are: " <<  item1 + item2;
    else
        cout << "The ISBN of two books did not match.\n";
}

// Function to read several transactions for the same isbn and display the sum of all transactions read.
void Exercise22()
{
    Sales_item total;
    cout << "Enter book details: ";
    if (cin >> total) // Make sure that the value are valid
    {
        Sales_item item;
        int number;
        cout << "How many transactions to record? ";
        cin >> number;
        for (int i = 0; i < number; ++i)
        {
            cout << "Enter book record: ";
            cin >> item;
            if (item.isbn() == total.isbn()) total += item;
            else break;
        }
        cout << "Total: " << total << '\n';
    }
}

// Function to count the consecutive recurring sales items with the same isbn.
void Exercise23() 
{
    Sales_item currentItem, newItem;
    if (cin >> currentItem) // Read the first item
    {
        int counter = 1;
        while (cin >> newItem)
        {
            if (currentItem.isbn() == newItem.isbn()) ++counter;
            else
            {
                cout << currentItem.isbn() << " occurs " << counter << " time(s).\n";
                currentItem = newItem;
                counter = 1;
            }
        }
        cout << currentItem.isbn() << " occurs " << counter << " time(s).\n";
    }
}

// Function to display the input and output from exercise 23.
void Exercise24() 
{
    cout << "Input: abc 1 2\nabc 2 1\n def 3 4\ndef 4 3";
    cout << "Output: abc occurs 2 time(s).\ndef occurs 2 time(s).";
}

// Function to compute the total books sold.
void Exercise25()
{
    Sales_item total;
    if (cin >> total)
    {
        Sales_item transactions;
        while (cin >> transactions)
        {
            if (total.isbn() == transactions.isbn()) total += transactions;
            else
            {
                cout << total << '\n';
                total = transactions;
            }
        }
        cout << total << '\n';
    }
    else
    {
        std::cerr << "No data?!\n";
        exit(-1);
    }
}
