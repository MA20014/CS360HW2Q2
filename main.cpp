#include <iostream>

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) {
        month = (m >= 1 && m <= 12) ? m : 1;
        day = d;
        year = y;
    }

    void setMonth(int m) {
        month = (m >= 1 && m <= 12) ? m : 1;
    }

    int getMonth() const {
        return month;
    }

    void setDay(int d) {
        day = d;
    }

    int getDay() const {
        return day;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() const {
        return year;
    }

    void displayDate() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};

int main() {
    // Creating a Date object with valid values
    Date date1(2, 15, 2024);

    // Displaying the initial date
    std::cout << "Initial Date:" << std::endl;
    date1.displayDate();

    // Testing set and get functions
    date1.setMonth(5);
    date1.setDay(20);
    date1.setYear(2025);
    std::cout << "\nAfter Updating:" << std::endl;
    std::cout << "Month: " << date1.getMonth() << std::endl;
    std::cout << "Day: " << date1.getDay() << std::endl;
    std::cout << "Year: " << date1.getYear() << std::endl;

    // Displaying the updated date
    std::cout << "\nUpdated Date:" << std::endl;
    date1.displayDate();

    // Creating a Date object with an invalid month
    std::cout << "\nCreating Date with Invalid Month:" << std::endl;
    Date date2(15, 20, 2026);
    date2.displayDate(); // Month should be automatically set to 1

    return 0;
}
