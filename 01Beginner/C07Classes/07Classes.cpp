#include <iostream>
#include <string>

#include "Sales_Data.h"
#include "Person.h"

class Y;

class X
{
    Y *y = nullptr;
};

class Y {
    X x;
};

using std::cerr;
using std::cin;
using std::cout;
using std::string;

void Dummy()
{
    X *x;
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
void Exercise57();
void Exercise58();

int main(int arg, char **argv)
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

    return 0;
}

//
void Exercise01()
{
    // OLD Sales_Data
    // Sales_Data total;
    // cout << "Enter book number, units sold and revenue or 0 to quit: ";
    // if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    // {
    //     if (total.bookNo == "-1" || total.units_sold == 0 || total.revenue == 0)
    //         return;
    //     Sales_Data bookItem;
    //     cout << "Enter book number, units sold and revenue or 0 to quit: ";
    //     while (cin >> bookItem.bookNo >> bookItem.units_sold >> bookItem.revenue)
    //     {
    //         if (total.bookNo == "-1" || total.units_sold == 0 || total.revenue == 0)
    //             return;
    //         else if (total.bookNo == bookItem.bookNo)
    //         {
    //             total.units_sold += bookItem.units_sold;
    //             total.revenue += bookItem.revenue;
    //             cout << total.bookNo << "'s details:\n";
    //             cout << "Units sold: " << total.units_sold << '\n';
    //             cout << "Revenue: " << total.revenue << '\n';
    //         }
    //         else
    //         {
    //             cout << total.bookNo << "'s details:\n";
    //             cout << "Units sold: " << total.units_sold << '\n';
    //             cout << "Revenue: " << total.revenue << '\n';
    //             total.bookNo = bookItem.bookNo;
    //             total.units_sold = 0;
    //             total.revenue = 0;

    //             cout << "Encountered new book number. Changed to new book number: " << total.bookNo << '\n';

    //             cout << total.bookNo << "'s details:\n";
    //             cout << "Units sold: " << total.units_sold << '\n';
    //             cout << "Revenue: " << total.revenue << '\n';
    //             total = bookItem;
    //         }
    //         cout << "Enter book number, units sold and revenue: ";
    //     }
    // }
    // else
    //     cerr << "No data.\n";
}

//
void Exercise02()
{
    // struct Sales_Data
    // {
    //     string bookNo;
    //     unsigned int units_sold = 0;
    //     double revenue;

    //     string isbn() const; // This method is not allowed to change the values of any data members
    //     Sales_Data& combine(const Sales_Data&);
    //     double averagePrice() const;
    // };

    // string Sales_Data::isbn() const {return bookNo;}
    // Sales_Data& Sales_Data::combine(const Sales_Data& rhs)
    // {
    //     units_sold += rhs.units_sold;
    //     revenue += rhs.revenue;
    //     return *this;
    // }
}

//
void Exercise03()
{
    // OLD Sales_Data
    // Sales_Data total;
    // cout << "Enter book number, units sold and revenue or enter 0 to exit: ";
    // if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    // {
    //     if (total.bookNo == "0" || total.units_sold == 0 || total.revenue == 0)
    //         return;
    //     cout << "Enter book number, units sold and revenue or enter 0 to exit: ";
    //     Sales_Data bookItem;
    //     while (cin >> bookItem.bookNo >> bookItem.units_sold >> bookItem.revenue)
    //     {
    //         if (bookItem.bookNo == "0" || bookItem.units_sold == 0 || bookItem.revenue == 0)
    //             return;
    //         else if (total.isbn() == bookItem.isbn())
    //         {
    //             total.combine(bookItem);
    //             cout << total.bookNo << "'s details:\n";
    //             cout << "Units sold: " << total.units_sold << '\n';
    //             cout << "Revenue: " << total.revenue << '\n';
    //         }
    //         else
    //         {
    //             cout << total.bookNo << "'s details:\n";
    //             cout << "Units sold: " << total.units_sold << '\n';
    //             cout << "Revenue: " << total.revenue << '\n';

    //             total.bookNo = bookItem.bookNo;
    //             total.units_sold = bookItem.units_sold;
    //             total.revenue = bookItem.revenue;

    //             cout << "Encountered new book number. Changed to new book number: " << total.bookNo << '\n';

    //             cout << total.bookNo << "'s details:\n";
    //             cout << "Units sold: " << total.units_sold << '\n';
    //             cout << "Revenue: " << total.revenue << '\n';
    //             total = bookItem;
    //         }
    //         cout << "Enter book number, units sold and revenue: ";
    //     }
    // }
    // else
    //     cerr << "No data entered!\n";
}

//
void Exercise04()
{
    // struct Person
    // {
    //     string name, address;
    // };
}

//
void Exercise05()
{
    // struct Person
    // {
    //     string name, address;
    //     string getName() const;
    //     string getAddress() const;
    // };

    // string Person::getName() const {return name;}
    // string Person::getAddress() const {return address;}
    /*
    Yes, these methods must be constant because their purpose is to return these back to the function caller and not to change the value.
    */
}

//
void Exercise06()
{
    // Interface
    // Sales_Data add(Sales_Data &lhs, Sales_Data &rhs);

    // Implementation
    // Sales_Data Sales_Data::add(Sales_Data &lhs, Sales_Data &rhs)
    // {
    //     Sales_Data sum = lhs;
    //     sum.combine(rhs);
    //     return sum;
    // }

    // std::istream &read(std::istream &is, Sales_Data &item)
    // {
    //     is >> item.bookNo >> item.units_sold >> item.revenue;
    //     return is;
    // }

    // std::ostream &print(std::ostream &os, const Sales_Data &item)
    // {
    //     os << item.isbn() << "'s details:\n";
    //     os << "Units sold: " << item.units_sold << '\n';
    //     os << "Revenue: " << item.revenue << '\n';
    //     os << "Average: " << item.averagePrice() << '\n';
    //     return os;
    // }
}

//
void Exercise07()
{
    // OLD Sales_Data
    // Sales_Data total;
    // cout << "Enter book number, units sold and revenue or enter 0 to exit: ";
    // if (read(cin, total))
    // {
    //     if (total.isbn() == "0" || total.units_sold == 0 || total.revenue == 0)
    //         return;
    //     cout << "Enter book number, units sold and revenue or enter 0 to exit: ";
    //     Sales_Data bookItem;
    //     while (read(cin, bookItem))
    //     {
    //         if (bookItem.isbn() == "0" || bookItem.units_sold == 0 || bookItem.revenue == 0)
    //             return;
    //         else if (total.isbn() == bookItem.isbn())
    //         {
    //             total.combine(bookItem);
    //             print(cout, total);
    //         }
    //         else
    //         {
    //             print(cout, total);

    //             total.bookNo = bookItem.bookNo;
    //             total.units_sold = bookItem.units_sold;
    //             total.revenue = bookItem.revenue;

    //             cout << "Encountered new book number. Changed to new book number: " << total.bookNo << '\n';

    //             print(cout, total);
    //         }
    //         cout << "Enter book number, units sold and revenue: ";
    //     }
    // }
    // else
    //     cerr << "No data entered!\n";
}

//
void Exercise08()
{
    // in read function the item is not constant because it needs to change the values
    // in print function the item is constant becasue it should not change the values
}

//
void Exercise09()
{
    // std::istream &read(std::istream &is, Person &person)
    // {
    //     is >> person.name >> person.address;
    //     return is;
    // }

    // std::ostream &print(std::ostream &os, const Person &person)
    // {
    //     os << "Name: " << person.getName() << '\n';
    //     os << "Address: " << person.getAddress() << '\n';
    //     return os;
    // }
}

//
void Exercise10()
{
    // if(read(read(cin, data1), data2)) basically reads user input into data 1 and then assigns data 1 value to data 2.
    // then the if condition validates the user input after assigning the data 1 value to data 2.
}

//
void Exercise11()
{
    // Constructors
    // struct Sales_Data
    // {
    //     Sales_Data() = default;
    //     Sales_Data(const std::string &s) : bookNo(s) {}
    //     Sales_Data(const std::string &s, unsigned int n, double r) : bookNo(s), units_sold(n), revenue(r) {}
    //     Sales_Data(std::istream &is);
    // };
    // Sales_Data::Sales_Data(std::istream &is) {read(is, *this);}
    // Sales_Data sd1;                                               // Sales_Data()
    // Sales_Data sd2("Book number only");                           // Sales_Data(const std::string &s)
    // Sales_Data sd3("Book number, units sold, and price", 30, 40); // Sales_Data(const std::string &s, unsigned int n, double r)
    // Sales_Data sd4(cin);                                          // Sales_Data(std::istream &is);
    // print(cout, sd1);
    // print(cout, sd2);
    // print(cout, sd3);
    // print(cout, sd4);
}

//
void Exercise12()
{
    // struct Sales_Data
    // {
    //     // Data Members
    //     std::string bookNo;
    //     unsigned int units_sold = 0;
    //     double revenue;

    //     // Constructors
    //     Sales_Data() = default;
    //     Sales_Data(const std::string &s) : bookNo(s) {}
    //     Sales_Data(const std::string &s, unsigned int n, double r) : bookNo(s), units_sold(n), revenue(r) {}
    //     Sales_Data(std::istream &is) {read(is, *this);}

    //     // Methods
    //     std::string isbn() const; // This method is not allowed to change the values of any data members
    //     Sales_Data &combine(const Sales_Data &);
    //     double averagePrice() const;
    //     Sales_Data add(Sales_Data &lhs, Sales_Data &rhs);
    // };
}

//
void Exercise13()
{
    // Sales_Data total(cin);
    // if (cin)
    // {
    //     Sales_Data trans(cin);
    //     while (cin)
    //     {
    //         if (total.isbn() == trans.isbn())
    //             total.combine(trans);
    //         else
    //         {
    //             print(cout, total);
    //             total = trans;
    //         }
    //         print(cout, total);
    //     }
    // }
    // else
    //     cerr << "No data!\n";
}

//
void Exercise14()
{
    // Sales_Data() : bookNo(""), units_sold(0), revenue(0) {}
}

//
void Exercise15()
{
    // Person() = default;
    // Person(const std::string &s1) : name(s1) {}
    // Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) {}
    // Person(std::istream &is);
}

//
void Exercise16()
{
    // There is no constraint on where and how often an access specifier may appear inside a class definition.
    // A class may contain zero or more access specifiers, each kind of access specifiers can appears multiple times.
    // There is no constraint on the sequence of access specifiers too.

    // The constructors and member functions that are part of the interface should be defined after a public specifier.
    // The data members and member functions that are part of the implementation should be defined after a private specifier.
}

//
void Exercise17()
{
    // In a class the default access specifier is private and for struct is public.
}

//
void Exercise18()
{
    // encapsulation is the separation of implementation (private specifier) from interface (public specifier).
    // It hides the implementation details of a type.
    // (In C++, encapsulation is enforced by putting the implementation in the private part of a class)
    // Important advantages:
    // - User code cannot inadvertently corrupt the state of an encapsulation object.
    // - The implementation of an encapsulated class can change over time without requiring changes in user-level code.
}

//
void Exercise19()
{ 
    // friend is a mechanism by which a class grants access to its nonpublic members. They have the same rights as members.

    // Pros:

    // the useful functions can refer to class members in the class scope without needing to explicitly prefix them with the class name.
    // you can access all the nonpublic members conveniently.
    // sometimes, more readable to the users of class.

    // Cons:

    // lessens encapsulation and therefore maintainability.
    // code verbosity, declarations inside the class, outside the class.
}

//
void Exercise20()
{
    // friend is a mechanism by which a class grants access to its nonpublic members. They have the same rights as members.

    // Pros:

    // the useful functions can refer to class members in the class scope without needing to explicitly prefix them with the class name.
    // you can access all the nonpublic members conveniently.
    // sometimes, more readable to the users of class.
    // Cons:

    // lessens encapsulation and therefore maintainability.
    // code verbosity, declarations inside the class, outside the class.
}

//
void Exercise21()
{
    // NEW Sales_Data
    Sales_Data total;
    cout << "Enter book number, units sold and revenue or enter 0 to exit: ";
    if (read(cin, total))
    {
        if (total.isbn() == "0" || total.getUnitsSold() == 0 || total.getRevenue() == 0)
            return;
        cout << "Enter book number, units sold and revenue or enter 0 to exit: ";
        Sales_Data bookItem;
        while (read(cin, bookItem))
        {
            if (bookItem.isbn() == "0" || bookItem.getUnitsSold() == 0 || bookItem.getRevenue() == 0)
                return;
            else if (total.isbn() == bookItem.isbn())
            {
                total.combine(bookItem);
                print(cout, total);
            }
            else
            {
                print(cout, total);

                total.setIsbn(bookItem.isbn());
                total.setUnitsSold(bookItem.getUnitsSold());
                total.setRevenue(bookItem.getRevenue());

                cout << "Encountered new book number. Changed to new book number: " << total.isbn() << '\n';

                print(cout, total);
            }
            cout << "Enter book number, units sold and revenue: ";
        }
    }
    else
        cerr << "No data entered!\n";
}

//
void Exercise22()
{
    // class Person
    // {
    //     private:
    //     std::string name, address;
        
    //     public:
    //     std::string getName() const;
    //     std::string getAddress() const;
    //     void setName(const std::string &s);
    //     void setAddress(const std::string &s);

    //     Person() = default;
    //     Person(const std::string &s1) : name(s1) {}
    //     Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) {}
    //     Person(std::istream &is);

    //     friend std::istream &read(std::istream &is, Person &person);
    //     friend std::ostream &read(std::ostream &is, Person &person);
    // };

    // std::string Person::getName() const {return name;}
    // std::string Person::getAddress() const {return address;}
    // void Person::setName(const std::string &s) {name = s;}
    // void Person::setAddress(const std::string &s) {address = s;}

    // std::istream &read(std::istream &is, Person &person)
    // {
    //     is >> person.name >> person.address;
    //     return is;
    // }

    // std::ostream &print(std::ostream &os, const Person &person)
    // {
    //     os << "Name: " << person.getName() << '\n';
    //     os << "Address: " << person.getAddress() << '\n';
    //     return os;
    // }

    // Person::Person(std::istream &is) {read(is, *this);}

}

//
void Exercise23()
{
    // #ifndef SCREEN_H
    // #define SCREEN_H

    // #include <iostream>
    // #include <string>

    // class Screen
    // {
    //     private:
    //     int cursor = 0, height = 0, width = 0;
    //     std::string contents;
    // };

    // #endif
}

//
void Exercise24()
{
    // public:
    // Screen() = default;
    // Screen(int h, int w) : height(h), width(w), contents(h * w, ' ') {}
    // Screen(int h, int w, char c) : height(h), width(w), contents(h * w, c) {}
}

//
void Exercise25()
{
    // Yes, because all the data members of Screen are built-in types or string, which can rely on synthesized versions for copy and assignment.
}

//
void Exercise26()
{
    // inline double Sales_Data::averagePrice() { return (revenue != 0 ? revenue / units_sold : 0); }
}

//
void Exercise27()
{
    // #ifndef SCREEN_H
    // #define SCREEN_H

    // #include <string>
    // #include <iostream>

    // class Screen {
    // public:
    //     using pos = std::string::size_type;

    //     Screen() = default;
    //     Screen(pos ht, pos wd):height(ht), width(wd), contents(ht*wd, ' '){ }
    //     Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){ }

    //     char get() const { return contents[cursor]; }
    //     char get(pos r, pos c) const { return contents[r*width+c]; }
    //     inline Screen& move(pos r, pos c);
    //     inline Screen& set(char c);
    //     inline Screen& set(pos r, pos c, char ch);

    //     const Screen& display(std::ostream &os) const { do_display(os); return *this; }
    //     Screen& display(std::ostream &os) { do_display(os); return *this; }

    // private:
    //     void do_display(std::ostream &os) const { os << contents; }

    // private:
    //     pos cursor = 0;
    //     pos height = 0, width = 0;
    //     std::string contents;
    // };

    // inline Screen& Screen::move(pos r, pos c)
    // {
    //     cursor = r*width + c;
    //     return *this;
    // }

    // inline Screen& Screen::set(char c)
    // {
    //     contents[cursor] = c;
    //     return *this;
    // }

    // inline Screen& Screen::set(pos r, pos c, char ch)
    // {
    //     contents[r*width+c] = ch;
    //     return *this;
    // }

    // #endif
}

//
void Exercise28()
{
    // It would end up returning a new object to the function caller and would not update the values and therefore, the second call to 
    // display would not print `#`
}

//
void Exercise29()
{
    // #with '&'
    // XXXXXXXXXXXXXXXXXXXX#XXXX
    // XXXXXXXXXXXXXXXXXXXX#XXXX
    //                 ^^^
    // # without '&'
    // XXXXXXXXXXXXXXXXXXXX#XXXX
    // XXXXXXXXXXXXXXXXXXXXXXXXX
    //                 ^^^
}

//
void Exercise30()
{
//Pros

// - more explicit

// - less scope for misreading

// - can use the member function parameter which name is same as the member name.

// Cons

// - more to read

// - sometimes redundant
}

//
void Exercise31()
{
    // class Y;

    // class X
    // {
    //     Y *y = nullptr;
    // };

    // class Y {
    //     X x;
    // };
}

//
void Exercise32()
{
    // #ifndef SCREEN_H
    // #define SCREEN_H
    // #include <vector>
    // #include <string>
    // #include <iostream>

    // class Screen;

    // class Window_mgr {
    // public:
    //     using ScreenIndex = std::vector<Screen>::size_type;
    //     inline void clear(ScreenIndex);
    // private:
    //     std::vector<Screen> screens;
    // };

    // class Screen {
    //     friend void Window_mgr::clear(ScreenIndex);
    // public:
    //     using pos = std::string::size_type;

    //     Screen() = default; // 1
    //     Screen(pos ht, pos wd):height(ht), width(wd), contents(ht*wd, ' '){ } // 2
    //     Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){ } // 3

    //     char get() const { return contents[cursor]; }
    //     char get(pos r, pos c) const { return contents[r*width+c]; }
    //     inline Screen& move(pos r, pos c);
    //     inline Screen& set(char c);
    //     inline Screen& set(pos r, pos c, char ch);

    //     const Screen& display(std::ostream &os) const { do_display(os); return *this; }
    //     Screen& display(std::ostream &os) { do_display(os); return *this; }

    // private:
    //     void do_display(std::ostream &os) const { os << contents; }

    // private:
    //     pos cursor = 0;
    //     pos height = 0, width = 0;
    //     std::string contents;
    // };

    // inline void Window_mgr::clear(ScreenIndex i)
    // { 
    //     if (i >= screens.size()) return;    // judge for out_of_range.
    //     Screen &s = screens[i];
    //     s.contents = std::string(s.height * s.width, ' ');
    // }

    // inline Screen& Screen::move(pos r, pos c)
    // {
    //     cursor = r*width + c;
    //     return *this;
    // }

    // inline Screen& Screen::set(char c)
    // {
    //     contents[cursor] = c;
    //     return *this;
    // }

    // inline Screen& Screen::set(pos r, pos c, char ch)
    // {
    //     contents[r*width+c] = ch;
    //     return *this;
    // }
}

//
void Exercise33()
{
    // Screen::pos Screen::size() const
    // {
    //     return height*width;
    // }
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

//
void Exercise57()
{
}

//
void Exercise58()
{
}