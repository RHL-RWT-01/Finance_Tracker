//
// Created by Rahul on 8/24/2024.
//
#include "DataStructures.h"

// Constructor for Expense class
Expense::Expense(const std::string& cat, double amt, const std::string& dt)
    : category(cat), amount(amt), date(dt) {}

// Constructor for UserProfile class
UserProfile::UserProfile(const std::string& nm, double inc, double goal)
    : name(nm), income(inc), savingsGoal(goal) {}

// Method to add an expense to the user profile
void UserProfile::addExpense(const Expense& expense) {
    expenses.push_back(expense);
}

// Method to calculate the total expenses of the user profile
double UserProfile::calculateTotalExpenses() const {
    double total = 0;
    for (const auto& exp : expenses) {
        total += exp.amount;
    }
    return total;
}

