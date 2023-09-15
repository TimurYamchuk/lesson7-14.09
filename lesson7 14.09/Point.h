#include<iostream>
using namespace std;
class Date{
int day; 
int month; 
int year;
public:
Date();
Date(int d, int m, int y);
int GetDay() const; 
int GetMonth() const; 
int GetYear() const; 
    void SetDay(int d);
    void SetMonth(int m);
    void SetYear(int y);
    void Print() const;
    Date& operator--(int);
    Date& operator++(int);
    Date& operator+=(int a);
    Date& operator-=(int a);


};