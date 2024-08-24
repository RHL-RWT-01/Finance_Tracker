//
// Created by Rahul on 8/24/2024.
//

#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

#include <string>
#include <vector>

class Expense {
public:
    std::string category;
    double amount;
    std::string date;

    Expense(const std::string& cat, double amt, const std::string& dt); // Declaration only
};

class UserProfile {
public:
    std::string name;
    double income;
    std::vector<Expense> expenses;
    double savingsGoal;

    UserProfile(const std::string& nm, double inc, double goal); // Declaration only

    void addExpense(const Expense& expense); // Declaration only
    double calculateTotalExpenses() const; // Declaration only
};

#endif // DATASTRUCTURES_H

