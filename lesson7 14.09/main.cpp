#include <iostream>
#include "Point.h"
using namespace std;

int main() {
  Date d1(7, 5, 2005);
  d1.Print();
  Date d2(1, 2, 2012);
  d2.Print();
   Date date;
    date.Print();

    date++;
    date.Print();

    date += 5;
    date.Print();

    date--;
    date.Print();

    date -= 10;
    date.Print();

    return 0;
}