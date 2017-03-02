/* Authors: Gustavo Gratacos: 801-13-2992
 *          Eddie Cabrera
 * Purpose: Declaration of MyDate class, which provides a
 *          representation of dates. 
 */

#ifndef _MYDATE
#define _MYDATE

#include <string>
using namespace std ; 

class MyDate
{
private:
    // The atributes of a date object
    int month, day, year ; 

    // Returns the number of elapsed days since October 15th, 1582
    int elapsed() const ;
    
public:
    // Constructor. A validation of the data must be made
    MyDate(int month, int date, int year) ; 

    // Default Constructor. Initializes the date to "00/00/0000".
    MyDate() ; 

    // Getter function for the month
    int getMonth() const ; 

    // Getter function for the day
    int getDay() const ; 

    // Setter function. A validation of the data must be made
    void set(int month, int day, int year) ; 

    // Returns the day of the week ("Monday", "Tuesday", ..., "Sunday")
    string dayOfWeek() const ; 

    // Returns the month of the year ("January", ...) 
    string getMonthStr() const ; 

    // Modifies this date, by adding num days to it. If num is positive, then 
    // the new date is chronologically after the original date. If num is 
    // negative, then the new date is chronologically before the original date
    void addDays(int num) ; 

    // Returns true if the year is a leap year, otherwise false
    bool isLeapYear() const ; 

    // Returns the number of days between this date and d. The result is a
    // positive integer if this date is chronologically after d. The result    
    // is a negative integer if this date is chronologically before d    
    int difference(const MyDate &d) const; 

    // Returns true if this date is different from d, otherwise false
    bool isDifferent(const MyDate &d) const; 
  
    // Returns true if this date is chronologically before d, otherwise false
    bool isBefore(const MyDate &d) const; 
         
    // Returns true if this date is chronologically after d, otherwise false
    bool isAfter(const MyDate &d) const; 
             
    // Returns a string that represents this date formatted as MM/DD/YYYY,    
    // e.g. "02/24/2016". Note that the month and the day must be represented
    // over two digits.
    string simpleRepre(); 

                   
    // Returns a string that represents this date with a nice format, e.g.,    
    // "February 24, 2016"    
    string niceRepre();
};

#endif
