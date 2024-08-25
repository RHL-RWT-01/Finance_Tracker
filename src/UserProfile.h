//
// Created by Rahul on 8/24/2024.
//

#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <string>
#include <vector>
#include "DataStructures.h"
#include "CSVHandler.h"

using namespace std;

class UserProfile {
public:
    // Constructor that includes CSV filename
    UserProfile(const string& nm, double inc, double goal, const string& csvFile);

    void addExpense(const Expense& expense);
    double calculateTotalExpenses() const;

private:
    string name;
    double income;
    double savingsGoal;
    vector<Expense> expenses;
    CSVHandler csvHandler; // CSVHandler instance to handle CSV operations
};

#endif // USERPROFILE_H
