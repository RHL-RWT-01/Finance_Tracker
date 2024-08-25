//
// Created by Rahul on 8/25/2024.
//

#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

#include <string>

using namespace std;

class Expense {
public:
    Expense(const string& cat, double amt, const string& dt);

    string category;
    double amount;
    string date;
};

#endif // DATASTRUCTURES_H
