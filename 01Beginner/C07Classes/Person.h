#ifndef PERSON
#define PERSON

#include <string>
/*OLD Person -> STRUCT
struct Person
{
    std::string name, address;
    std::string getName() const;
    std::string getAddress() const;

    Person() = default;
    Person(const std::string &s1) : name(s1) {}
    Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) {}
    Person(std::istream &is);
};
*/
/*NEW Person -> Class*/
class Person
{
    private:
    std::string name, address;
    
    public:
    std::string getName() const;
    std::string getAddress() const;
    void setName(const std::string &s);
    void setAddress(const std::string &s);

    Person() = default;
    Person(const std::string &s1) : name(s1) {}
    Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) {}
    Person(std::istream &is);

    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &read(std::ostream &is, Person &person);
};

std::string Person::getName() const {return name;}
std::string Person::getAddress() const {return address;}
void Person::setName(const std::string &s) {name = s;}
void Person::setAddress(const std::string &s) {address = s;}

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << "Name: " << person.getName() << '\n';
    os << "Address: " << person.getAddress() << '\n';
    return os;
}

Person::Person(std::istream &is) {read(is, *this);}

#endif