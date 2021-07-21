#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::getline;
using std::strcpy;
using std::strcat;

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

void Program1_BinarySearchUsingIterators();


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
    
    // Program1_BinarySearchUsingIterators();
    
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
    
    return 0;
}

// Function to rewrite chapter 1 exercise 9, 10, and 11's code via 'using' declators
void Exercise01()
{
    // Chapter 1 Exercise 9
    int start = 50, end = 100, sum = 0;
    while (start <= end) sum += start++;
    cout << sum << '\n';

    // Chapter 1 Exercise 10
    end = 10;
    while (end >= 0) cout << end-- << '\n';

    // Chapter 1 Exercise 11
    cout << "Enter start range: ";
    cin >> start;
    cout << "Enter end range: ";
    cin >> end;
    if (end < start)
    {
        int temp = end;
        end = start;
        start = temp;
    }
    while (start <= end) cout << start++ << '\n';
}

// Function to read the standard input a line at a time and then a word at a time.
void Exercise02()
{
    string sentence, word;
    cout << "Enter sentences or enter -1 to quit: ";
    while (getline(cin, sentence) && sentence != "-1") cout << sentence;

    cout << "Enter words or enter -1 to quit: ";
    while ((cin >> word) && word != "-1") cout << word;
}

// Function to explain how whitespace characters are handled in the string input operator and in the getline function.
void Exercise03()
{
    cout << "The string input operator ignores all whitespace characters whereas the getling function does not ignore any whitespace character except for a new line.\n";
}

// Function to read 2 strings and report whether they are equal or the larger string and another to report whether the two strings have the same length or which length is longer.
void Exercise04()
{
    string sentence1, sentence2;
    cout << "Enter two sentences: ";
    getline(cin, sentence1);
    getline(cin, sentence2);
    cout << "Sentence 1: " << sentence1 << '\n';
    cout << "Sentence 2: " << sentence2 << '\n';
    
    // Report equal or larger string
    if (sentence1 == sentence2) cout << "Two sentences are equal!\n";
    else sentence1 > sentence2 ? cout << "Sentence 1 is larger than sentence 2\n" : cout << "Sentence 2 is larger than sentence 1\n";
    
    // Report equal or longer string
    if (sentence1.size() == sentence2.size()) cout << "The length of two sentences are equal!\n";
    else sentence1.size() > sentence2.size() ? cout << "Sentence 1 is longer than sentence 2\n" : cout << "Sentence 2 is longer than sentence 1\n";
}

// Function to concatenate multiple strings into one larger string. Separate sentence delimited by space.
void Exercise05()
{
    cout << "Enter words to form a sentence or -1 to quit: ";
    string word, sentence;
    while ((cin >> word) && (word != "-1")) sentence += word + ' ';
    cout << "Sentence is: " << sentence << '\n';

    word = "";
    cout << "The words in the sentence are:\n";
    for (vector<string>::size_type i = 0; i < sentence.size(); ++i)
    {
        if (sentence[i] == ' ')
        {
            cout << word << '\n';
            word = "";
            continue;
        }
        word += sentence[i];
    }
}

// Function to replace all character in a string to 'X' using ranged for loop
void Exercise06()
{
    string str = "this is a random string.";
    for (char &x : str) x = 'X';
    cout << str << '\n';
}

// Program to predict the output when loop control variable is of type 'char' and not 'char &'
void Exercise07()
{
    cout << "Prediction: The characters will not change.\n";
    string str = "this is a random string.";
    for (char x : str) x = 'X';
    cout << str << '\n';
}

// Program to rewrite exercise 6 using while and traditional for loop
void Exercise08()
{
    string str = "hello to cpp";
    string strToManipulate = str;
    size_t i = 0;
    while (i < strToManipulate.size())
    {
        strToManipulate[i] = 'X';
        ++i;
    }
    cout << strToManipulate << '\n';
    strToManipulate = str;
    for (i = 0; i < strToManipulate.size(); ++i) strToManipulate[i] = 'X';
    cout << strToManipulate << '\n';
    strToManipulate = str;
    for (char &x : strToManipulate) x = 'X';
    cout << strToManipulate << '\n';
    strToManipulate = str;
    cout << "Range based or traditional for loop is preferred over the while loop because the number of iterations are known and the variables are neatly scoped within the loops.\n";
}

// Function to discuss whether the program is valid.
void Exercise09()
{
    cout << "string s;\n"
    "cout << s[0] << endl;\n"
    "The program is not valid because the string is empty which will cause out of bounds error\n";
}

// Program to read a string and display the string without punctuations
void Exercise10()
{
    string sentence;
    cout << "Enter sentence/word: ";
    getline(cin, sentence);

    for (char x : sentence) if (!ispunct(x)) cout << x;
}

// Function to discuss the type of variable 'c' in the range based for loop
void Exercise11()
{
    cout << "Yes the following ranged based for loop is legal and the type of 'c' is char &\n";
}

// Function to discuss illegal vector definitions
void Exercise12()
{
    cout << "vector<vector<int>> ivec; is legal and it created a 2D array of integer vectors.\n";
    cout << "vector<string> svec = ivec; is illegal because the number of dimensions are not same and the type of vector is not the same.\n";
    cout << "vector<string> svec(10, \"null\"); is legal and initializes the vector with 10 null string literals\n";
}

// Function to predict the number of elements in each vector and their value
void Exercise13()
{
    cout << "(a) vector<int> v1; has no elements\n";
    cout << "(b) vector<int> v2(10); has 10 elements all default initialized to 0\n";
    cout << "(c) vector<int> v3(10, 42); has 10 elements all initialized to 42\n";
    cout << "(d) vector<int> v4{10}; has 1 element with the value 10\n";
    cout << "(e) vector<int> v5 {10, 42} has 2 elements 10 and 42\n";
    cout << "(f) vector<string> v6{10}; has 10 elements all default initialized to empty strings\n";
    cout << "(g) vector<string> v7{10, \"hi\"}; has 10 elements all initialized to \"hi\"\n";
}

// Program to read a sequence of integers and store the values in a vector
void Exercise14()
{
    vector<int> numbers;
    int number;
    cout << "Enter numbers or -1 to quit: ";
    while ((cin >> number) && (number != -1)) numbers.push_back(number);
    for (int num : numbers) cout << num << '\n';
}

// Function to read a sequence of strings and store the values in a vector
void Exercise15()
{
    vector<string> words;
    string word;
    cout << "Enter words or -1 to quit: ";
    while ((cin >> word) && (word != "-1")) words.push_back(word);
    for (string wrd : words) cout << wrd << '\n';
}

// Function to validate the prediction made in exercise 13
void Exercise16()
{
    vector<int> v1, v2(10), v3(10, 42), v4{10}, v5{10, 42};
    vector<string> v6{10}, v7{10, "hi"};
    cout << "Vector 1\n";
    for (int vec : v1) cout << vec << '\n';
    cout << "Vector 2\n";
    for (int vec : v2) cout << vec << '\n';
    cout << "Vector 3\n";
    for (int vec : v3) cout << vec << '\n';
    cout << "Vector 4\n";
    for (int vec : v4) cout << vec << '\n';
    cout << "Vector 5\n";
    for (int vec : v5) cout << vec << '\n';
    cout << "Vector 6\n";
    for (string vec : v6) vec.empty() ? cout << "Empty element!\n" : cout << vec << '\n';
    cout << "Vector 7\n";
    for (string vec : v7) cout << vec << '\n';
}

// Function to read words into a vector of strings and then change all words to uppercase and print 8 words per line
void Exercise17()
{
    string word;
    vector<string> words;
    cout << "Enter words or -1 to quit:\n";
    while ((cin >> word) && (word != "-1")) words.push_back(word);
    for (string &element : words)
        for (char &character : element) character = toupper(character);
    for (size_t i = 0; i < words.size(); ++i)
        (i + 1) % 8 == 0 ? cout << words[i] << '\n' : cout << words[i] << ' '; 
    // (i + 1) because when i = 0 then 0 % 8 = 0 and hence, it will go onto the new line after printing
    // the first word. But there must be 8 words per line and hence, we start the modulus operator from
    // i = 1;
}

// Function to discuss whether the following program is legal or not
void Exercise18()
{
    cout << "vector<int> ivec;\n"
    "ivec[0] = 42;\n"
    "This is illegal because the vector's size is 0. We must use ivec.push_back(42) to solve this problem.\n";
}

// Function to display 3 different ways to initialize 10 elements to 42
void Exercise19()
{
    vector<int> v1(10, 42), v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42}, v3;
    for (int i = 0; i < 10; ++i) v3.push_back(42);
    cout << "The preferred way is vector v1\n";
}

// Function to read set of integers and display sum of adjacent elements, then sum of first and last, second and second last and so on...
void Exercise20()
{
    int number;
    vector<int> numbers;
    cout << "Enter numbers or enter -1 to exit:\n";
    while ((cin >> number) && (number != -1)) numbers.push_back(number);

    int counter = 1;
    cout << "Print elements:\n";
    for (int num : numbers) cout << counter++ << ". " << num << '\n';

    cout << "Sum of adjacent elements:\n";
    for (vector<int>::size_type i = 0; i < numbers.size() - 1; ++i)
        cout << numbers[i] << " + " << numbers[i + 1] << " = " << numbers[i] + numbers[i + 1] << '\n';
    
    cout << "Sum of first and last, second and second last and so on:\n";
    for (size_t i = 0; i < (numbers.size() + 1) / 2; ++i)
        cout << numbers[i] << " + " << numbers[numbers.size() - i - 1] << " = " << numbers[i] + numbers[numbers.size() - i - 1] << '\n';
}

// Function to rewrite exercise 16 using iterators
void Exercise21()
{
    vector<int> v1, v2(10), v3(10, 42), v4{10}, v5{10, 42};
    vector<string> v6{10}, v7{10, "hi"};
    
    cout << "Vector 1 size: " << v1.size() << '\n';
    for (vector<int>::iterator iter = v1.begin(); iter != v1.end(); ++iter)
        cout << *iter << '\n';
    
    cout << "Vector 2 size: " << v2.size() << '\n';
    for (vector<int>::iterator iter = v2.begin(); iter != v2.end(); ++iter)
        cout << *iter << '\n';
    
    cout << "Vector 3 size: " << v3.size() << '\n';
    for (vector<int>::iterator iter = v3.begin(); iter != v3.end(); ++iter)
        cout << *iter << '\n';
    
    cout << "Vector 4 size: " << v4.size() << '\n';
    for (vector<int>::iterator iter = v4.begin(); iter != v4.end(); ++iter)
        cout << *iter << '\n';
    
    cout << "Vector 5 size: " << v5.size() << '\n';
    for (vector<int>::iterator iter = v5.begin(); iter != v5.end(); ++iter)
        cout << *iter << '\n';
    
    cout << "Vector 6 size: " << v6.size() << '\n';
    for (vector<string>::iterator iter = v6.begin(); iter != v6.end(); ++iter)
        iter->empty() ? cout << "Empty element!\n" : cout << *iter << '\n';
    
    cout << "Vector 7 size: " << v7.size() << '\n';
    for (vector<string>::iterator iter = v7.begin(); iter != v7.end(); ++iter)
        cout << *iter << '\n';
}

// Function to change the elements in `text` that correspond to the first paragraph to all uppercase and then print all contents
void Exercise22()
{
    vector<string> texts {"this is para 1","", "this is para 2","","this is para 3"};
    for(vector<string>::iterator iter = texts.begin(); iter != texts.end() && !iter->empty(); ++iter)
        for (char &character : *iter) character = toupper(character);
    
    for(vector<string>::const_iterator iter = texts.cbegin(); iter != texts.cend(); ++iter) cout << *iter << '\n';
}

// Function to assign each integer element a value that is twice its current value
void Exercise23()
{
    vector<int> ivec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Old elements:\n";
    for(vector<int>::const_iterator iter = ivec.cbegin(); iter != ivec.cend(); ++iter) cout << *iter << '\n';
    
    for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) *iter *= 2;
    
    cout << "New elements:\n";
    for(vector<int>::const_iterator iter = ivec.cbegin(); iter != ivec.cend(); ++iter) cout << *iter << '\n';
}

// Function to use binary search using iterators
void Program1_BinarySearchUsingIterators()
{
    vector<int> ivec;
    for (int i = 0; i < 200; ++i) ivec.push_back(i);

    int numberToSearch;
    cout << "Enter a number to search between 0 to 200: ";
    cin >> numberToSearch;

    // binary search
    vector<int>::const_iterator start = ivec.cbegin(), end = ivec.cend();
    vector<int>::const_iterator mid = start + (end - start)/2; // mid point of the vector
    bool numberFound = false;
    while (mid != end)
    {
        if (*mid == numberToSearch)
        {
            numberFound = true;
            break;
        }
        numberToSearch < *mid ? end = mid : start = mid + 1;
        mid = start + (end - start)/2;
    }
    numberFound ? cout << numberToSearch << " found at index " << numberToSearch << '\n' : cout << "Could not find the number.\n";
}

// Function to rewrite exercise 16, 17, 18, 19, and 20 using iterators
void Exercise24()
{
    cout << "Exercise 16:\n";
    vector<int> v1, v2(10), v3(10, 42), v4{10}, v5{10, 42};
    vector<string> v6{10}, v7{10, "hi"};
    cout << "Vector 1\n";
    for (vector<int>::const_iterator iter = v1.cbegin(); iter != v1.cend(); ++iter) cout << *iter << '\n';
    cout << "Vector 2\n";
    for (vector<int>::const_iterator iter = v2.cbegin(); iter != v2.cend(); ++iter) cout << *iter << '\n';
    cout << "Vector 3\n";
    for (vector<int>::const_iterator iter = v3.cbegin(); iter != v3.cend(); ++iter) cout << *iter << '\n';
    cout << "Vector 4\n";
    for (vector<int>::const_iterator iter = v4.cbegin(); iter != v4.cend(); ++iter) cout << *iter << '\n';
    cout << "Vector 5\n";
    for (vector<int>::const_iterator iter = v5.cbegin(); iter != v5.cend(); ++iter) cout << *iter << '\n';
    cout << "Vector 6\n";
    for (vector<string>::const_iterator iter = v6.cbegin(); iter != v6.cend(); ++iter) iter->empty() ? cout << "Empty element!\n" : cout << *iter << '\n';
    cout << "Vector 7\n";
    for (vector<string>::const_iterator iter = v7.cbegin(); iter != v7.cend(); ++iter) cout << *iter << '\n';
    
    cout << "\n\nExercise 17:\n";
    string word;
    vector<string> words;
    cout << "Enter words or -1 to quit:\n";
    while ((cin >> word) && (word != "-1")) words.push_back(word);
    for (vector<string>::iterator element = words.begin(); element != words.end(); ++ element)
        for (char &character : *element) character = toupper(character);
    for (size_t i = 0; i < words.size(); ++i)
        (i + 1) % 8 == 0 ? cout << words[i] << '\n' : cout << words[i] << ' ';
    
    cout << "\n\nExercise 18:\n";
    Exercise18();
    
    cout << "\n\nExercise 19:\n";
    Exercise19();
    
    cout << "\n\nExercise 20:\n";
    int number;
    vector<int> numbers;
    cout << "Enter numbers or enter -1 to exit:\n";
    while ((cin >> number) && (number != -1)) numbers.push_back(number);

    int counter = 1;
    cout << "Print elements:\n";
    for (vector<int>::const_iterator iter = numbers.cbegin(); iter != numbers.cend(); ++iter) cout << counter++ << ". " << *iter << '\n';

    cout << "Sum of adjacent elements:\n";
    for (vector<int>::const_iterator iter = numbers.cbegin(); iter != numbers.cend(); ++iter)
        cout << *iter << " + " << *(iter + 1) << " = " << *iter + *(iter + 1) << '\n';
    
    cout << "Sum of first and last, second and second last and so on:\n";
    vector<int>::const_iterator mid = numbers.cbegin() + (numbers.cend() - numbers.cbegin() + 1) / 2;
    for (vector<int>::const_iterator iter = numbers.cbegin(); iter != mid; ++iter)
        cout << *iter << " + " << *(numbers.cend() - (iter - numbers.cbegin()) - 1) << " = " << *iter + *(numbers.cend() - (iter - numbers.cbegin()) - 1) << '\n';
}

// Function to rewrite the grade clustering program from 3.3.3
void Exercise25()
{
    vector<int> gradesCluster(11);
    int grades;
    cout << "Enter grades or -1 to quit: ";
    while ((cin >> grades) && grades != -1) ++gradesCluster[grades / 10];
    cout << '\n';
    for (vector<int>::const_iterator iter = gradesCluster.cbegin(); iter != gradesCluster.cend(); ++iter) cout << *iter << '\t';
    cout << '\n';
}

// Function to discuss the reason for start + (end - start) / 2 instead of (start + end) / 2 in program 1
void Exercise26()
{
    cout << "When mid = start + (end - beg) / 2\n\n";
    cout << "Let array be {1, 2, 3, 4, 5} and element to search for be 1\n"
    "Start index = 0 and end index = 4 - Odd number of elements in total\n"
    "Mid point = 0 + (4-0/2) = 2 and search < mid\n"
    "Start index = 0 and end index = 2 - Odd number of elements in total\n"
    "Mid point = 0 + (2-0/2) = 1 and search < mid\n"
    "Start index = 0 and end index = 1 - Even number of elements in total\n"
    "Mid point = 0 + (1-0/2) = 0 and search = mid\n\n\n";

    cout << "Let array be {1, 2, 3, 4} and element to search for be 4\n"
    "Start index = 0 and end index = 3 - Even number of elements in total\n"
    "Mid point = 0 + (3-0/2) = 1 and search > mid\n"
    "Start index = 2 and end index = 3 - Even number of elements in total\n"
    "Mid point = 2 + (3-2/2) = 2 and search < mid\n"
    "Start index = 3 and end index = 3 - Odd number of elements in total\n"
    "Mid point = 3 + (3-3/2) = 3 and search = mid\n\n\n";

    cout << "When mid = (end - beg) / 2\n\n";
    cout << "Let array be {1, 2, 3, 4, 5} and element to search for be 1\n"
    "Start index = 0 and end index = 4 - Odd number of elements in total\n"
    "Mid point = 4-0/2 = 2 and search < mid\n"
    "Start index = 0 and end index = 2 - Odd number of elements in total\n"
    "Mid point = 2-0/2 = 1 and search < mid\n"
    "Start index = 0 and end index = 1 - Even number of elements in total\n"
    "Mid point = 1-0/2 = 0 and search = mid\n\n\n";

    cout << "Let array be {1, 2, 3, 4} and element to search for be 4\n"
    "Start index = 0 and end index = 3 - Even number of elements in total\n"
    "Mid point = 3-0/2 = 1 and search > mid\n"
    "Start index = 2 and end index = 3 - Odd number of elements in total\n"
    "Mid point = 3-2/2 = 0 and search < mid\n"
    "Start index = 1 and end index = 3 - Even number of elements in total\n"
    "Mid point = 3-1/2 = 1 and search > mid\n"
    "Start index = 2 and end index = 3 - Odd number of elements in total\n"
    "Mid point = 3-2/2 = 0 and search > mid\n";
    
    cout << "Logic Error: Leads to an infinite loop\n\n\n";
}

// Function to discuss what definitions are illegal.
void Exercise27()
{
    cout << 
    "(a) is illegal because buf_size is not constant\n"
    "(b) is legal because there is an integer literal\n"
    "(c) is legal\n"
    "(d) is illegal because in a string there is an extra null terminator character and hence \"fundamental\" actually has 12 character in total.\n";
}

// Function to predict the values in the following array
void Exercise28()
{
    cout <<
    "sa[10] has 10 elements with no value and default initialized to empty string.\n"
    "ia[10] has 10 elements all default initialized  to 0.\n"
    "sa2[10] is the same as sa[10].\n"
    "ia2[10] has 10 elements with some garbage value.\n";
}

// Function to list drawbacks of an array over vector
void Exercise29()
{
    cout << 
    "- The size of the array is fixed and must be known when defined.\n"
    "- Character array needs to leave space for null character at the end.\n"
    "- Arrays can not be copied or assigned as a whole.\n"
    "- Array can not be constructed with the same values like the constructor of vector when defined.\n"
    "- The size of array must be calculated when using (sometimes cannot be calculated at all) instead of calling a size() method.\n"
    "- Arrays are not dynamic and cannot expand once defined whereas a vector can grow or shrink in size.\n";
}

// Function to identify the indexing errors
void Exercise30()
{
    cout << "constexpr size_t array_size = 10;\n";
    cout << "int ia[array_size];\n";
    cout << "for(size_t ix = 1; ix <= array_size; ++ix) ia[ix] = ix;\n";
    cout << "When ix = array_size then ++ix will try to access out of bounds memory\n";
}

// Function to declare an integer of size 10 and assign values as its position in the array
void Exercise31()
{
    int x[10];
    for (size_t i = 0; i < 10; ++i) x[i] = i;
    for (size_t i = 0; i < 10; ++i) cout << x[i];
}

// Rewriting exercise 31 using vectors
void Exercise32()
{
    vector<int> x(10);
    for (int i = 0; i < 10; ++i) x[i] = i;
}

// Function to discuss the consequences if the scores array was not initialized
void Exercise33()
{
    cout << "If the scores array was not initialized then ++scores[grade/10] would increment some garbage value\n";
}

// Function to discuss the output of the code and whether the pointers p1 and p2 make this code legal
void Exercise34()
{
    cout << "int a[5] = {0, 1, 2, 3, 4};\n";
    cout << "int *p1 = a, *p2 = a;\n";
    cout << "cout << *p1 << '\\n';\n";
    cout << "cout << *p2 << '\\n';\n";
    cout << "p1 += p2 - p1;\n";
    cout << "cout << *p1 << '\\n';\n";
    cout << "cout << *p2 << '\\n';\n";
    cout << "The following code assigns the pointers p1 and p2 to the first element and then p1 += p2 - p1 will not change as the arithmetic nullifies everything\n";
}

// Function to set the elements of an array to 0.
void Exercise35()
{
    int a[5] = {0, 1, 2, 3, 4};
    int *p = a;
    for (int i = 0; i < 5; ++i) cout << a[i] << '\n';
    for (int i = 0; i < 5; ++i) *(p + i) = 0;
    for (int i = 0; i < 5; ++i) cout << a[i] << '\n';
}

// 
void Exercise36()
{
    int a[5] = {0, 1, 2, 3, 4}, b[5] = {0, 1, 2, 3, 4}, c[5] = {5, 4, 3, 2, 1};
    
    cout << "a = ";
    for (int i = 0; i < 5; ++i) cout << a[i] << '\t';
    cout << '\n';
    
    cout << "b = ";
    for (int i = 0; i < 5; ++i) cout << b[i] << '\t';
    cout << '\n';
    
    cout << "c = ";
    for (int i = 0; i < 5; ++i) cout << c[i] << '\t';
    cout << '\n';
    
    bool arrayEqual = true;
    for (int i = 0; i < 5; ++i)
    {
        if (a[i] != b[i])
        {
            arrayEqual = false;
            break;
        }
    }
    arrayEqual ? cout << "Array a and Array b are equal\n" : cout << "Array a and array b are not equal\n";

    arrayEqual = true;
    for (int i = 0; i < 5; ++i)
    {
        if (a[i] != c[i])
        {
            arrayEqual = false;
            break;
        }
    }
    arrayEqual ? cout << "Array a and Array c are equal\n" : cout << "Array a and array c are not equal\n";

    vector<int> d(5,4), e(5,4), f(5,6);
    
    cout << "Array d = ";
    for (int x : d) cout << x << '\t';
    cout << '\n';
    
    cout << "Array e = ";
    for (int x : e) cout << x << '\t';
    cout << '\n';
    
    cout << "Array f = ";
    for (int x : f) cout << x << '\t';
    cout << '\n';
    
    d == e ? cout << "Array d and Array e are equal\n" : cout << "Array d and array e are not equal\n";
    d == f ? cout << "Array d and Array f are equal\n" : cout << "Array d and array f are not equal\n";
}

// Function to predict the outcome of the following program
void Exercise37()
{
    cout << "const char ca[] = {'h','e','l','l','o'};\n";
    cout << "const char *cp = ca;\n";
    cout << "while (*cp) {\n";
    cout << "\tcout << *cp << endl;\n";
    cout << "\t++cp;\n}\n";
    cout << "This program will print all the characters. However since the while loop will execute until *cp = 0 which means that *cp need to be equal to a character whose integer corresponds"
    "to the value 0.\n";
    cout << "Therefore, there will be more gibbersih characters after hello\n";
    const char ca[] = {'h','e','l','l','o'}, *cp = ca;
    while (*cp)
    {
        cout << *cp;
        ++cp;
    }
}

// Function to discuss why adding two pointers would be meaningless
void Exercise38()
{
    cout << "Adding two pointers to an array would be meaningless because both those pointers would point to the first index whose value is 0, and 0. Therefore upon adding two pointer will still yield"
    " the first index\n";
}

// Funtion to compare two strings and c-style character strings
void Exercise39()
{
    string str1("hello"), str2("hello"), str3("cpp");
    str1 == str2 ? cout << "String 1 and 2 are equal\n" : cout << "String 1 and 2 are not equal\n";
    str1 == str3 ? cout << "String 1 and 3 are equal\n" : cout << "String 1 and 3 are not equal\n";
    
    char c1[6] = {'h','e','l','l','o','\0'}, c2[6] = {'h','e','l','l','o','\0'}, c3[4] = {'c','p','p','\0'};
    bool arrayEqual = true;
    if (sizeof(c1) == sizeof(c2))
    {
        for (size_t i = 0; i < sizeof(c1); ++i)
        {
            if(c1[i] != c2[i])
            {
                arrayEqual = false;
                break;
            }
        }
    }
    else arrayEqual = false;
    arrayEqual ? cout << "c1 and c2 are equal\n" : cout << "c1 and c2 are not equal\n";

    arrayEqual = true;
    if (sizeof(c1) == sizeof(c3))
    {
        for (size_t i = 0; i < sizeof(c1); ++i)
        {
            if(c1[i] != c2[i])
            {
                arrayEqual = false;
                break;
            }
        }
    }
    else arrayEqual = false;
    arrayEqual ? cout << "c1 and c3 are equal\n" : cout << "c1 and c3 are not equal\n";
}

// Function to declare 2 char arrays using string literals and then defining a third character array to hold the concat of 2 arrays using strcat and strcpy to copy the two arrays
void Exercise40()
{
    const char c1[] = "hello", c2[] = "cpp";
    char c3[sizeof(c1) + sizeof(c2)];
    strcpy(c3, c1);
    strcat(c3, c2);
    for (char c : c1) cout << c << '\t';
    cout << '\n';
    for (char c : c2) cout << c << '\t';
    cout << '\n';
    for (char c : c3) cout << c << '\t';
    cout << '\n';
}

// Function to initialize a vector using an integer array
void Exercise41()
{
    int ia[5] = {1, 2, 3, 4, 5};
    vector<int> iv(std::begin(ia), std::end(ia));
    for (const int i : iv) cout << i << '\t';
    cout << '\n';
}

// Function to copy a vector of int to an array of int
void Exercise42()
{
    vector<int> iv(3,4);
    int ia[3];
    for (int i = 0; i < 3; ++i) ia[i] = iv[i];
    for (int i : ia) cout << i << '\t';
    cout << '\n';
}

// Function to print elements of ia in 3 different ways
void Exercise43()
{
    int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int i : ia) cout << i << '\t';
    cout << '\n';

    for (int *i = std::begin(ia); i != std::end(ia); ++i) cout << *i << '\t';
    cout << '\n';

    for (size_t i = 0; i < sizeof(ia)/sizeof(int); ++i) cout << ia[i] << '\t';
    cout << '\n';
}

// Code to rewrite exercise 41 and 42 using type aliases
void Exercise44()
{
    // Exercise 41
    using integer_array_size5 = int[5];
    integer_array_size5 ia = {1, 2, 3, 4, 5};
    vector<int> iv(std::begin(ia), std::end(ia));
    for (const int i : iv) cout << i << '\t';
    cout << '\n';

    // Exercise 42
    typedef int integer_array_size3[3];
    vector<int> iv2(3,4);
    integer_array_size3 ia2;
    for (int i = 0; i < 3; ++i) ia2[i] = iv2[i];
    for (int i : ia2) cout << i << '\t';
    cout << '\n';
}

// Code to rewrite exercise 41 and 42 using auto
void Exercise45()
{
    // Exercise 41
    int ia[5] = {1, 2, 3, 4, 5};
    vector<int> iv(std::begin(ia), std::end(ia));
    for (auto i : iv) cout << i << '\t';
    cout << '\n';

    // Exercise 42
    vector<int> iv2(3,4);
    int ia2[3];
    for (auto i = 0; i < 3; ++i) ia2[i] = iv2[i];
    for (auto i : ia2) cout << i << '\t';
    cout << '\n';
}

