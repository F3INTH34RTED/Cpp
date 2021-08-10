#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cin;
using std::cout;
using std::cerr;
using std::noskipws; // dont skip ws(whitespaces)
using std::runtime_error;
using std::string;
using std::vector;

int get_value()
{
    int x;
    while (cin >> x && x < 0)
        ;
    return x;
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

    return 0;
}

// Function to discuss what is null statement and when might it be useful
void Exercise01()
{
    cout << "A null statement is when there is a single semi-colon and nothing else. It is useful when a statement is required but not the program logic."
            "For example:\n"
            "while(cin >> age && age < 100);\n"
            "The semi-colon is a null statement.\n";
}

// Function to discuss what is a block and when might it be useful
void Exercise02()
{
    cout << "A block or compound statement is a group of code inside the opening `{` and closing `}` curly braces. It is used for grouping code together "
            "and defines of the code within the curly braces. It is used in funcitons, class methods, etc.\n";
}

// Function to use comma operator to rewrite while loop
void Exercise03()
{
    int sum = 0, val = 1;
    /* Original while loop
    while (val <= 10) {
        sum += val;
        ++val;
    }
    */
    while (val <= 10)
        sum += val, ++val;

    cout << sum << '\t' << val << '\n';
    cout << "It diminishes the readability of the code.\n";
}

// Function to explain the following examples and correct any problems
void Exercise04()
{
    cout << "(a) while(string::iterator iter != s.end()) {}\n"
            "There is no starting point mentioned and supposed to be like:\n"
            "string::iterator iter = s.begin();\n"
            "while(iter != s.end()) {\n\t++iter\n}\n";
    cout << "(b) while (bool status = find(word)) {}\n"
            "Cannot initialize inside the while loop brackets.\n"
            "bool status = 1;\n"
            "while(status = find(word)) {}\n"
            "if(!status)\n";
}

// Function to generate letter grade from numeric grade
void Exercise05()
{
    char grades[5] = {'F', 'D', 'C', 'B', 'A'};
    /*
    grade < 60 = F
    60 <= grade < 70 = D
    70 <= grade < 80 = C
    80 <= grade < 90 = B
    90 <= grade <= 100 = A
    */
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks < 60)
    {
        cout << "Grade: F\n";
        return;
    }
    if (marks == 100)
    {
        cout << "Grade: A++\n";
        return;
    }
    if (marks % 10 > 7)
        cout << "Grade: " << grades[(marks - 50) / 10] << "++\n";
    else if (marks % 10 < 4)
        cout << "Grade: " << grades[(marks - 50) / 10] << "--\n";
    else
        cout << "Grade: " << grades[(marks - 50) / 10] << '\n';
}

// // Function to generate letter grade from numeric grade using conditional operator
void Exercise06()
{
    char grades[5] = {'F', 'D', 'C', 'B', 'A'};
    /*
    grade < 60 = F
    60 <= grade < 70 = D
    70 <= grade < 80 = C
    80 <= grade < 90 = B
    90 <= grade <= 100 = A
    */
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks % 10 > 7)
        marks < 60 ? cout << "Grade: F\n" : marks == 100 ? cout << "Grade: A++\n"
                                                         : cout << "Grade: " << grades[(marks - 50) / 10] << "++\n";
    else if (marks % 10 < 4)
        marks < 60 ? cout << "Grade: F\n" : marks == 100 ? cout << "Grade: A++\n"
                                                         : cout << "Grade: " << grades[(marks - 50) / 10] << "--\n";
    else
        marks < 60 ? cout << "Grade: F\n" : marks == 100 ? cout << "Grade: A++\n"
                                                         : cout << "Grade: " << grades[(marks - 50) / 10] << "\n";
}

// Function to correct the errors in the code fragments
void Exercise07()
{
    /*
    (a) if (ival1 != ival2) ival1 = ival2;
        else ival1 = ival2 = 0;
    (b) if (ival < minval)
            minval = ival;
            occurs = 1;
    (c) if (int ival = get_value()) cout << "ival = " << ival << endl;
        if (!ival) cout << "ival = 0\n";
    (d) if (ival = 0) ival = get_value();
    */

    // a
    //    int ival1 = 2, ival2 = 2;
    //    if (ival1 != ival2) ival1 = ival2; // missing semi-colon
    //    else ival1 = ival2 = 0;
    //    cout << ival1 << '\t' << ival2 << '\n';

    //    //b
    //    int minval = -99, occurs = 0;
    //    if (ival1 < minval)
    //    { // missing compound statement or curly braces
    //        minval = ival1;
    //        occurs = 1;
    //    }

    //    // c
    //    int ival = get_value(); // needs to be created outside the if loop.
    //    if (ival) cout << "ival = " << ival << std::endl;
    //    if (!ival) cout << "ival = 0\n";

    //    // d
    //    if (ival == 0) ival = get_value(); // ival = 0 will always be false while the programmer might be interested in a comparison relational operator.
}

// Function to define what dangling else is
void Exercise08()
{
    cout << "When an else does not have a corresponding if-statement, then that else is a dangling else.\n";
}

// Function to count vowels using a series of if statements
void Exercise09()
{
    cout << "Enter character or '1' to quit:\n";
    char c;
    int vowels[6] = {0, 0, 0, 0, 0, 0};
    while (cin >> c && c != '1')
    {
        if (c == 'a' || c == 'A')
            ++vowels[0];
        else if (c == 'e' || c == 'E')
            ++vowels[1];
        else if (c == 'i' || c == 'I')
            ++vowels[2];
        else if (c == 'o' || c == 'O')
            ++vowels[3];
        else if (c == 'u' || c == 'U')
            ++vowels[4];
        else
            ++vowels[5];
    }
    cout << "         A: " << vowels[0] << '\n';
    cout << "         E: " << vowels[1] << '\n';
    cout << "         I: " << vowels[2] << '\n';
    cout << "         O: " << vowels[3] << '\n';
    cout << "         U: " << vowels[4] << '\n';
    cout << "Consonants: " << vowels[5] << '\n';
}

// Function to count vowels
void Exercise10()
{
    cout << "Enter character or '1' to quit:\n";
    char c;
    int vowels[5] = {0, 0, 0, 0, 0}, consonants = 0;
    while (cin >> c && c != '1')
    {
        switch (c)
        {
        case 'a':
        case 'A':
            ++vowels[0];
            break;
        case 'e':
        case 'E':
            ++vowels[1];
            break;
        case 'i':
        case 'I':
            ++vowels[2];
            break;
        case 'o':
        case 'O':
            ++vowels[3];
            break;
        case 'u':
        case 'U':
            ++vowels[4];
            break;
        default:
            ++consonants;
            break;
        }
    }
    cout << "         A: " << vowels[0] << '\n';
    cout << "         E: " << vowels[1] << '\n';
    cout << "         I: " << vowels[2] << '\n';
    cout << "         O: " << vowels[3] << '\n';
    cout << "         U: " << vowels[4] << '\n';
    cout << "Consonants: " << consonants << '\n';
}

// Function to count vowels, blank spaces, tabs and newlines
void Exercise11()
{
    cout << "Enter character or '1' to quit:\n";
    char c;
    int vowels[5] = {0, 0, 0, 0, 0}, consonants = 0, whitespaces = 0;
    while (cin >> noskipws >> c && c != '1')
    {
        switch (c)
        {
        case 'a':
        case 'A':
            ++vowels[0];
            break;
        case 'e':
        case 'E':
            ++vowels[1];
            break;
        case 'i':
        case 'I':
            ++vowels[2];
            break;
        case 'o':
        case 'O':
            ++vowels[3];
            break;
        case 'u':
        case 'U':
            ++vowels[4];
            break;
        case ' ':
        case '\t':
        case '\n':
            ++whitespaces;
            cout << whitespaces << '\n';
        default:
            ++consonants;
            break;
        }
    }
    cout << "          A: " << vowels[0] << '\n';
    cout << "          E: " << vowels[1] << '\n';
    cout << "          I: " << vowels[2] << '\n';
    cout << "          O: " << vowels[3] << '\n';
    cout << "          U: " << vowels[4] << '\n';
    cout << " Consonants: " << consonants << '\n';
    cout << "Whitespaces: " << whitespaces << '\n';
}

// Function to count the number of occurrences for `ff`, `fl`, and `fi` characters
void Exercise12()
{
    cout << "Enter character or '1' to quit:\n";
    char c, previous_char;
    int vowels[5] = {0, 0, 0, 0, 0}, two_char_sequences[3] = {0, 0, 0}, consonants = 0, whitespaces = 0;
    while (cin >> noskipws >> c && c != '1')
    {
        switch (c)
        {
        case 'a':
        case 'A':
            ++vowels[0];
            break;
        case 'e':
        case 'E':
            ++vowels[1];
            break;
        case 'i':
        case 'I':
            if (previous_char == 'f')
                ++two_char_sequences[2];
            ++vowels[2];
            break;
        case 'o':
        case 'O':
            ++vowels[3];
            break;
        case 'u':
        case 'U':
            ++vowels[4];
            break;
        case 'f':
            if (previous_char == 'f')
                ++two_char_sequences[0];
            break;
        case 'l':
            if (previous_char == 'f')
                ++two_char_sequences[1];
            break;
        case ' ':
        case '\t':
        case '\n':
            ++whitespaces;
            cout << whitespaces << '\n';
        default:
            ++consonants;
            break;
        }
        previous_char = c;
    }
    cout << "          A: " << vowels[0] << '\n';
    cout << "          E: " << vowels[1] << '\n';
    cout << "          I: " << vowels[2] << '\n';
    cout << "          O: " << vowels[3] << '\n';
    cout << "          U: " << vowels[4] << '\n';
    cout << "         ff: " << two_char_sequences[0] << '\n';
    cout << "         fl: " << two_char_sequences[1] << '\n';
    cout << "         fi: " << two_char_sequences[2] << '\n';
    cout << " Consonants: " << consonants << '\n';
    cout << "Whitespaces: " << whitespaces << '\n';
}

// Function to identfy and correct errors
void Exercise13()
{
    /* ERRORS:
    (a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
        char ch = next_text();
        switch(ch) {
            case 'a': aCnt++;
            case 'e': eCnt++;
            default: iouCnt++;
        }
    
    (b) unsigned index = some_value();
        switch (index) {
            case 1:
                int ix = get_value();
                ivec[ix] = index;
                break;
            default:
                ix = ivec.size() - 1;
                ivec[ix] = index;
        }

    (c) unsigned evenCnt = 0, oddCnt = 0;
        int digit = get_num() % 10;
        switch(digit) {
            case 1, 3, 5, 7, 9: oddCnt++ break;
            case 2, 4, 6, 8, 10: evenCnt++ break;
        }
    
    (d) unsigned ival = 512, jval = 1024, kval = 4026;
        unsigned buffsize;
        unsigned swt = get_bufCnt();
        switch(swt) {
            case ival:
                bufsize = ival * sizeof(int);
                break;
            case jval:
                bufsize = jval * sizeof(int);
                break;
            case kval:
                bufsize = kval * sizeof(int);
                break;
        }
    
    SOLUTIONS
    (a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
        char ch = next_text();
        switch(ch) {
            case 'a': aCnt++; break;
            case 'e': eCnt++; break;
            default: iouCnt++; break;
        }
    
    (b) unsigned index = some_value();
        int ix;
        switch (index) {
            case 1:
                ix = get_value();
                ivec[ix] = index;
                break;
            default:
                ix = ivec.size() - 1;
                ivec[ix] = index;
        }

    (c) unsigned evenCnt = 0, oddCnt = 0;
        int digit = get_num() % 10;
        switch(digit) {
            case 1: case 3: case 5: case 7: case 9: oddCnt++ break;
            case 2: case 4: case 6: case 8: case 10: evenCnt++ break;
        }
    
    (d) const unsigned ival = 512, jval = 1024, kval = 4026;
        unsigned buffsize;
        unsigned swt = get_bufCnt();
        switch(swt) {
            case ival:
                bufsize = ival * sizeof(int);
                break;
            case jval:
                bufsize = jval * sizeof(int);
                break;
            case kval:
                bufsize = kval * sizeof(int);
                break;
        }
    */
}

// Program to print the largest occuring word in a sentence
void Exercise14()
{
    cout << "Enter a sentence or -1 to quit:\n";
    string word, previousWord, maxOccuredWord;
    int maxCount = 0, wordCount = 1;
    while (cin >> word && word != "-1")
    {
        if (word == previousWord)
        {
            ++wordCount;
            continue;
        }
        if (wordCount > maxCount)
        {
            maxOccuredWord = previousWord;
            maxCount = wordCount;
        }
        wordCount = 1;
        previousWord = word;
    }
    cout << maxOccuredWord << " occured " << maxCount << " times\n";
}

// Function to explain loops and correct problems that are detected.
void Exercise15()
{
    /*ERRORS
    (a) for (int ix = 0; ix != sz; ++ix) {...}
        if (ix != sz) ....
    (b) int ix;
        for (ix != sz; ++ix) {...}
    (c) for (int ix = 0; ix != sz; ++ix, ++sz) {...}

    SOLUTIONS
    (a) int ix;
        for (ix = 0; ix != sz; ++ix) {...}
        if(ix != sz) ...
    
    (b) int ix;
        for (; ix != sz; ++ix) {...}
    
    (c) for (int ix = 0; ix != sz; ++ix) {...} or
        for (int ix = 0; ix != sz; --sz) {...} or
        for (int ix = 0; ix != sz; ++ix, --sz) {...} or
        for (int ix = 0; ix != sz; ix += 2, ++sz) {...}
        If the incrementation of ix is lesser or equal to the incrementation of sz then we will have an infinite loop
    */
}

// Function to discuss the use case of while loop vs for loop
void Exercise16()
{
    /*
    While loop is used when the number of iterations are unknown and for loop is used when the number of iterations are known. For example, while loop
    would typically be used when getting user input as we do not know at what attempt would the user enter a valid information. A for-loop loop will
    be used to print the elements of an array because we know how many times the loop would iteratate.
    If I could use only 1 loop, I would use for-loop as it helps to group the loop together as 1 body unlike the while loop.
    */
}

// Function to determine which vector is a prefix
void Exercise17()
{
    vector<int> v1 = {0, 1, 1, 2}, v2 = {0, 1, 1, 2, 3, 5};
    bool isPrefix = true;
    // Step 1 - compare 2 lengths
    if (v1.size() > v2.size())
    {
        for (vector<int>::const_iterator iter1 = v1.cbegin(), iter2 = v2.cbegin(); iter2 != v2.cend(); ++iter1, ++iter2)
        {
            if (*iter1 != *iter2)
            {
                isPrefix = false;
                break;
            }
        }
        isPrefix ? cout << "v2 is a prefix of v1\n" : cout << "v1 and v2 are not prefixes\n";
    }
    else
    {
        for (vector<int>::const_iterator iter1 = v1.cbegin(), iter2 = v2.cbegin(); iter1 != v1.cend(); ++iter1, ++iter2)
        {
            if (*iter1 != *iter2)
            {
                isPrefix = false;
                break;
            }
        }
        isPrefix ? cout << "v1 is a prefix of v2\n" : cout << "v1 and v2 are not prefixes\n";
    }
}

// Function to detect and explain loop errors
void Exercise18()
{
    /*
    ERRORS
    (a) do
            int v1, v2;
            cout << "Please enter 2 numbers to sum: ";
            if (cin >> v1 >> v2) cout << "Sum is: " << v1 + v2 << endl'
        while(cin);
    
    (b) do {...}
        while (int val = get_response());
    
    (c) do {int ival = get_response();}
        while(ival);
    
    SOLUTION
    (a) do {
            int v1, v2;
            cout << "Please enter 2 numbers to sum: ";
            if (cin >> v1 >> v2)
                cout << "Sum is: " << v1 + v2 << endl;
        } while (cin);

    (b) int ival;
        do {val = get_response();}
        while(val);

    (c) int ival;
        do {val = get_response();}
        while(val);
    */
}

// Function to compare two strings and report which is lesser than the other
void Exercise19()
{
    string s1, s2;
    do
    {
        cout << "Enter 2 strings or -1 to quit: ";
        cin >> s1 >> s2;
        s1 < s2 ? cout << "s1 is less than s2\n" : cout << "s2 is less than s1\n";
    } while (s1 != "-1" || s2 != "-1");
}

// Function to detect whether a word occurs twice in succession. If it does break and print the word or inform that no word was repeated.
void Exercise20()
{
    string word, previous_word;
    cout << "Enter text or -1 to quit: ";
    bool isFound = false;
    while (cin >> word && word != "-1")
    {
        if (word == previous_word)
        {
            isFound = true;
            break;
        }
        previous_word = word;
    }
    isFound ? cout << previous_word << " occurs twice in succession\n" : cout << "No word was repeated.\n";
}

// Function to detect whether a word starting with uppercase occurs twice in succession. If it does break and print the word or inform that no word was repeated.
void Exercise21()
{
    string word, previous_word;
    cout << "Enter text or -1 to quit: ";
    bool isFound = false;
    while (cin >> word && word != "-1")
    {
        if (word == previous_word && (toupper(word[0]) && toupper(previous_word[0])))
        {
            isFound = true;
            break;
        }
        previous_word = word;
    }
    isFound ? cout << previous_word << " occurs twice in succession\n" : cout << "No word was repeated.\n";
}

// Function to eliminate begin keyword from the example
void Exercise22()
{
    /*
    EXAMPLE
    begin:
        int sz = get_size();
        if (sz <= 0) goto begin;
    */
    int sz;
    while (cin >> sz && sz <= 0)
        ; // null statement
}

// Function to print the division result of 2 numbers
void Exercise23()
{
    int numerator, denominator;
    cout << "Enter two integers: ";
    cin >> numerator >> denominator;
    cout << numerator / denominator << '\n';
}

// Function to print the division result of 2 numbers and throwing an error when denominator is 0
void Exercise24()
{
    int numerator, denominator;
    cout << "Enter two integers: ";
    cin >> numerator >> denominator;
    if (denominator == 0)
        throw runtime_error("Denominator cannot be 0\n");
    cout << numerator / denominator << '\n';
}

// Function to print the division result of 2 numbers while handling the denominator using try-catch
void Exercise25()
{
    int numerator, denominator;
    cout << "Enter 2 integers: ";
    while (cin >> numerator >> denominator)
    {
        try
        {
            if (denominator == 0)
                throw runtime_error("Denominator cannot be 0\n");
            cout << numerator / denominator << '\n';
            break;
        }
        catch (runtime_error err)
        {
            cerr << err.what() << '\n';
            cout << "Please enter the 2 integers again: ";
        }
    }
}
