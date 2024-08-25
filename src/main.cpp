//
// Created by Rahul on 8/24/2024.
//

#include <iostream>
#include "UserProfile.h"

using namespace std;

int main() {
    // Create a UserProfile object, passing "expenses.csv" as the CSV filename
    UserProfile user("Rahul", 5000.0, 1000.0, "expenses.csv");

    char choice;
    do {
        string category, date;
        double amount;

        // Prompt user for expense details
        cout << "Enter expense category: ";
        cin >> category;
        cout << "Enter amount: ";
        cin >> amount;
        cout << "Enter date (YYYY-MM-DD): ";
        cin >> date;


        Expense expense(category, amount, date);
        user.addExpense(expense);


        cout << "Add another expense? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

        cout << "Total Expenses: " << user.calculateTotalExpenses() << endl;

    return 0;
}
