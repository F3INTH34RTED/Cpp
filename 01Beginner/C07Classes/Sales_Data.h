#ifndef SALES_DATA
#define SALES_DATA

#include <iostream>
#include<string>

/*
OLD SALES DATA -> STRUCT
struct Sales_Data
{
    // Data Members
    std::string bookNo;
    unsigned int units_sold = 0;
    double revenue;

    // Constructors
    Sales_Data() = default;
    Sales_Data(const std::string &s) : bookNo(s) {}
    Sales_Data(const std::string &s, unsigned int n, double r) : bookNo(s), units_sold(n), revenue(r) {}
    Sales_Data(std::istream &is);
    
    // Methods
    std::string isbn() const; // This method is not allowed to change the values of any data members
    Sales_Data &combine(const Sales_Data &);
    double averagePrice() const;
    Sales_Data add(Sales_Data &lhs, Sales_Data &rhs);
    std::istream &read(std::istream &is, Sales_Data &item); // these are friend functions and they can access private data members
    std::ostream &print(std::ostream &os, const Sales_Data &item);
};

std::string Sales_Data::isbn() const { return bookNo; }

Sales_Data &Sales_Data::combine(const Sales_Data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_Data::averagePrice() const { return (revenue != 0 ? revenue / units_sold : 0); }

Sales_Data Sales_Data::add(Sales_Data &lhs, Sales_Data &rhs)
{
    Sales_Data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_Data &item) // item is not constant because it needs to be changed
{
    is >> item.bookNo >> item.units_sold >> item.revenue;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_Data &item) // item is constant because the values in `item` should not be changed
{
    os << item.isbn() << "'s details:\n";
    os << "Units sold: " << item.units_sold << '\n';
    os << "Revenue: " << item.revenue << '\n';
    os << "Average: " << item.averagePrice() << '\n';
    return os;
}

Sales_Data::Sales_Data(std::istream &is) {read(is, *this);}

#endif
*/
/*
NEW SALES DATA -> CLASS
*/
class Sales_Data
{
    // Data Members
    std::string bookNo;
    unsigned int units_sold = 0;
    double revenue;
    
    public:
    // Constructors
    Sales_Data() = default;
    Sales_Data(const std::string &s) : bookNo(s) {}
    Sales_Data(const std::string &s, unsigned int n, double r) : bookNo(s), units_sold(n), revenue(r) {}
    Sales_Data(std::istream &is);
    
    // Methods
    std::string isbn() const; // This method is not allowed to change the values of any data members
    unsigned int getUnitsSold() const;
    double getRevenue() const;

    void setIsbn(const std::string &s);
    void setUnitsSold(unsigned u);
    void setRevenue(double r);

    Sales_Data &combine(const Sales_Data &);
    double averagePrice() const;
    Sales_Data add(Sales_Data &lhs, Sales_Data &rhs);
    friend std::istream &read(std::istream &is, Sales_Data &item); // these are friend functions and they can access private data members
    friend std::ostream &print(std::ostream &os, const Sales_Data &item);
};

std::string Sales_Data::isbn() const { return bookNo; }
unsigned int Sales_Data::getUnitsSold() const {return units_sold;}
double Sales_Data::getRevenue() const {return revenue;}

void Sales_Data::setIsbn(const std::string &s) { bookNo = s; }
void Sales_Data::setUnitsSold(unsigned u) { units_sold = u; }
void Sales_Data::setRevenue(double r) { revenue = r; }

Sales_Data &Sales_Data::combine(const Sales_Data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline double Sales_Data::averagePrice() const { return (revenue != 0 ? revenue / units_sold : 0); }

Sales_Data Sales_Data::add(Sales_Data &lhs, Sales_Data &rhs)
{
    Sales_Data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_Data &item) // item is not constant because it needs to be changed
{
    is >> item.bookNo >> item.units_sold >> item.revenue;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_Data &item) // item is constant because the values in `item` should not be changed
{
    os << item.isbn() << "'s details:\n";
    os << "Units sold: " << item.units_sold << '\n';
    os << "Revenue: " << item.revenue << '\n';
    os << "Average: " << item.averagePrice() << '\n';
    return os;
}

Sales_Data::Sales_Data(std::istream &is) {read(is, *this);}

#endif