#include <iostream>
#include "Point.h"

using namespace std;

 Date::Date(){
	day = 1;
	month = 1;
	year = 2000;
 }
int Date::GetDay() const{
	return day;
}
int Date::GetMonth() const{
	return month;
}
int Date::GetYear() const{
	return year;
}
    void Date::SetDay(int d) {
        if (d >= 1 && d <= 31) day = d;
    }

    void Date::SetMonth(int m) {
        if (m >= 1 && m <= 12) month = m;
    }

    void Date::SetYear(int y) {
        if (y >= 0) year = y;
    }
	  void Date::Print() const{
        cout << "Date: " << GetDay() << "." << GetMonth() << "." << GetYear() << endl;
    }
Date& Date:: operator--(int) {
        day--;
        if (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day = 31; 
        }
        return *this;
    }

   Date& Date:: operator++(int) {
        day++;
        if (day > 31) {
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
            day = 1;
        }
        return *this;
    }

    Date& Date:: operator+=(int a) {
        day += a;
        while (day > 31) {
            day -= 31;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    Date& Date:: operator-=(int a) {
        day -= a;
        while (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day += 31;
        }
        return *this;
    }


