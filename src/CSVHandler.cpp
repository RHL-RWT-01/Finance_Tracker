//
// Created by Rahul on 8/25/2024.
//

#include "CSVHandler.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

CSVHandler::CSVHandler(const string& filename) : filename(filename) {}

void CSVHandler::writeExpense(const Expense& expense) {
    ofstream file;
    file.open(filename, ios_base::app);
    if (file.is_open()) {
        file << expense.category << "," << expense.amount << "," << expense.date << "\n";
        file.close();
    } else {
        cerr << "Unable to open file for writing: " << filename << endl;
    }
}

vector<Expense> CSVHandler::readExpenses() {
    vector<Expense> expenses;
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string category, date, amountStr;
            double amount;

            getline(ss, category, ',');
            getline(ss, amountStr, ',');
            getline(ss, date, ',');

            amount = stod(amountStr);

            Expense expense(category, amount, date);
            expenses.push_back(expense);
        }
        file.close();
    } else {
        cerr << "Unable to open file for reading: " << filename << endl;
    }
    return expenses;
}

