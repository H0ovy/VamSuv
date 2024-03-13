#include <iostream>

using namespace std;

class Date {
    public:
        Date (int dd, int mm, int yy) { d = dd; m = mm; y = yy; };          // constructor
        Date& add_year(int n);                                              // add n years
        void add_month(int n);                                              // add n months
        void add_day(int n);                                                // add n days
        int print_month() const;
        int print_year() const;
    private:
        int d, m, y;
};

Date& Date::add_year(int n)     //proper variant
{
    y += n; 
    return *this;
}

void Date::add_day(int n)
{
    d += n; 
}

void Date::add_month(int n)
{
    m += n; 
}

int Date::print_month() const
{
    return m;
}

int Date::print_year() const
{
    return y;
}

int main() {
    Date dx {25, 3, 2011}; 
    cout<< dx.print_month() <<"\n";
    dx.add_year(5).add_month(9);
    cout<< dx.print_year() <<"\n";
    cout<< dx.print_month() <<"\n";
}