/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: haley
 *
 * Created on February 11, 2018, 2:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    double amountDue;
    double amountPaid;
    double amountPaidPennies;
    double amountDuePennies;
    int differenceChange;
    int wholeDollars;
    int changeRemaining; // change remaining after subtracting whole dollars
    int amountQuarters;
    int changeRemaining2; // change remaining after subtracting quarters
    int amountDimes;
    int changeRemaining3; // change remaining after subtracting dimes
    int amountNickels;
    int changeRemaining4; // change remaining after subtracting nickels
    int amountPennies;
    
    cout << "Please enter the amount due: ";
    cin >> amountDue;
    
    cout << "Please enter the amount paid: ";
    cin >> amountPaid; 
    
    // Take inputs and compute value in pennies
    amountDuePennies = amountDue * 100;
    amountPaidPennies = amountPaid * 100;
    
    // Compute difference between two values to get change due (in pennies)
    differenceChange = amountPaidPennies - amountDuePennies;
    
    // Calculate whole dollar value and subtract from balance
    wholeDollars = differenceChange / 100;
    changeRemaining = differenceChange - (wholeDollars * 100);
    
    // Calculate number of quarters, dimes, nickels, and pennies in change
    amountQuarters = changeRemaining % 4;
    changeRemaining2 = changeRemaining - (amountQuarters * 25);
    
    amountDimes = changeRemaining2 % 3;
    changeRemaining3 = changeRemaining2 - (amountDimes * 10);
    
    amountNickels = changeRemaining3 % 2;
    changeRemaining4 = changeRemaining3 - (amountNickels * 5);
    
    amountPennies = changeRemaining4 % 5; 
    
    // Output what amounts of what coins are due back to customer
    cout << "The change due to the customer is " << wholeDollars << " dollars, " << amountQuarters << " quarters, " << amountDimes << " dimes, " << amountNickels << " nickels, " << amountPennies << " pennies." << endl;
       
    return 0;
}

