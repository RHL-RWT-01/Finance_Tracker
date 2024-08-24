//
// Created by Rahul on 8/24/2024.
//

#include <iostream>
#include <string>
#include "DataStructures.h"

int main() {
    UserProfile user("Rahul", 5000, 1000);

    std::string category;
    double amount;
    std::string date;
    char moreExpenses;

    do {
        std::cout << "Enter expense category: ";
        std::cin >> category;
        std::cout << "Enter amount: ";
        std::cin >> amount;
        std::cout << "Enter date (YYYY-MM-DD): ";
        std::cin >> date;

        Expense exp(category, amount, date);
        user.addExpense(exp);

        std::cout << "Add another expense? (y/n): ";
        std::cin >> moreExpenses;

    } while (moreExpenses == 'y' || moreExpenses == 'Y');

    std::cout << "Total Expenses: " << user.calculateTotalExpenses() << std::endl;

    return 0;
}
