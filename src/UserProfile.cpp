//
// Created by Rahul on 8/24/2024.
//

#include "UserProfile.h"

UserProfile::UserProfile(const string& nm, double inc, double goal, const string& csvFile)
    : name(nm), income(inc), savingsGoal(goal), csvHandler(csvFile) {
    expenses = csvHandler.readExpenses(); // Load existing expenses from CSV
}

void UserProfile::addExpense(const Expense& expense) {
    expenses.push_back(expense);
    csvHandler.writeExpense(expense); // Save the new expense to CSV
}

double UserProfile::calculateTotalExpenses() const {
    double total = 0;
    for (const auto& expense : expenses) {
        total += expense.amount;
    }
    return total;
}
