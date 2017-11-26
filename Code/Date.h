#pragma once

#include "Classes.h"

class Date
{
public:
	typedef unsigned int Day;
	typedef unsigned int Month;
	typedef unsigned int Year;
	struct InvalidDate {
		Day day;
		Month month;
		Year year;
		InvalidDate(Date date):
			day(date.day), month(date.month), year(date.year) {}
	};

private:
	Day day;
	Month month;
	Year year;

	static bool validDate(const Date& date);
	static string string_month(Month month);

public:
	/**
	 * @brief Returns the number of days of the given month in the given year
	 * @param month 
	 * @param year
	 * @return the number of days of the given month in the given year
	 */  
	static unsigned int numberOfDaysInMonth(Month month, Year year);

	/**
	 * @brief Returns the number of days in a given year
	 * @param year
	 * @return the number of days in a given year
	 */ 
	static unsigned int numberOfDaysInYear(Year year);

	/**
	 * @brief Received the necessary attributes to create a Date object.
	 * @param d the day
	 * @param m the month
	 * @param y the year
	 */ 
	Date(Day d, Month m, Year y);
	
	/**
	 * @brief Received a formated string and creates a Date object.
	 * @param s A string in the form DD-MM-YY
	 */ 
	Date(string s);

	/**
	 * @brief Creates a date with attributes set to 0.
	 */ 
	Date();

	/**
	 * @brief Gets the day of the Date object.
	 * @return the day attribute.
	 */ 
	Day getDay() const;

	/**
	 * @brief Gets the month of the Date object.
	 * @return the month attribute.
	 */ 
	Month getMonth() const;

	/**
	 * @brief Gets the year of the Date object.
	 * @return the year attribute.
	 */ 
	Year getYear() const;

	/**
	 * @brief Changes the day attribute.
	 * @param d the new day.
	 * @return true if successful (valid date), false if not.
	 */ 
	bool setDay(Day d);

	/**
	 * @brief Changes the month attribute.
	 * @param m the new month.
	 * @return true if successful (valid date), false if not.
	 */ 
	bool setMonth(Month m);

	/**
	 * @brief Changes the year attribute.
	 * @param y the new year.
	 * @return true if successful (valid date), false if not.
	 */ 
	bool setYear(Year y);

	/**
	 * @brief Creates a string with DD-MM-YYYY format
	 * @return the date in string format.
	 */ 
	std::string write() const;

	/**
	 * @brief Increments the date.
	 * 
	 * Incrementes the Date object, checking for all cases 
	 * (incrementing the day may also mean incremening month and/or year)
	 * 
	 * @return the already incremented date.
	 */ 
	Date& operator++();

	/**
	 * @brief Increments the date.
	 * 
	 * Incrementes the Date object, checking for all cases 
	 * (incrementing the day may also mean incremening month and/or year)
	 * 
	 * @return the already incremented date.
	 */ 
	Date operator++(int);
	friend Date operator+(const Date& date, unsigned int days);
	friend bool operator==(const Date& lhs, const Date& rhs);
	friend bool operator!=(const Date& lhs, const Date& rhs);
	friend bool operator<(const Date& lhs, const Date& rhs);
	friend bool operator>(const Date& lhs, const Date& rhs);
	friend bool operator<=(const Date& lhs, const Date& rhs);
	friend bool operator>=(const Date& lhs, const Date& rhs);

	friend ostream & operator<<(ostream & o, const Date & d);
};

enum class M :unsigned int {
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
};

Date operator+(const Date& date, unsigned int days);

struct InvalidDate {
	Date::Day day;
	Date::Month month;
	Date::Year year;
	InvalidDate(Date date) :
		day(date.getDay()), month(date.getMonth()), year(date.getYear()) {}
};