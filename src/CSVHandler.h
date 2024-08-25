//
// Created by Rahul on 8/25/2024.
//

#ifndef CSVHANDLER_H
#define CSVHANDLER_H

#include <string>
#include <vector>
#include "DataStructures.h"

using namespace std;

class CSVHandler {
public:
    CSVHandler(const string& filename);
    void writeExpense(const Expense& expense);
    vector<Expense> readExpenses();

private:
    string filename;
};

#endif // CSVHANDLER_H
