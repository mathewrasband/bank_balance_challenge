//
//  main.cpp
//  bank_balance_challenge
//
//  Created by Mathew Rasband on 4/5/21.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    
    double currentBalance = 0;
    double deposits       = 0;
    double withdrawals    = 0;
    string accountType    = "";
    
    cout << "Enter account you would like to see: " << endl;
    cin >> accountType;
    cout << "What is the starting balance? " << endl;
    cin >> currentBalance;
    cout << "How much would you like to deposit? " << endl;
    cin >> deposits;
    cout << "How much would you like to withdraw? " << endl;
    cin >> withdrawals;
    
    if (accountType == "checking" || accountType == "Checking") {
        currentBalance = currentBalance + deposits - withdrawals;
        cout << "Your current Checking account balance is $" << fixed << setprecision(2) << currentBalance << ". Thank you for visiting." << endl;
    }
    else if (accountType == "savings" || accountType == "Savings") {
        currentBalance = currentBalance + deposits - withdrawals;
        cout << "Your current Savings account balance is $" << fixed << setprecision(2) << currentBalance << ". Thank you for visiting." << endl;
    }
    else {
        cout << "Invalid account type entered." << endl;
        return 1;
    }
   
    return 0;
}
