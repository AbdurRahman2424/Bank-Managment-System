#include "BANK.h"
#include <iostream>
#include <iomanip>
#include "BANK.h"
using namespace std;

BANK::BANK():Balance(0),Pincode(0)
{
}

bool BANK::CreateAccount() {

    cin.ignore();
    cout << "Enter Customer Name:  ";
    cin.getline(CustomerName, 20);
    do {
        cout << "Enter Customer 4-digit pincode (only use integers): ";
        cin >> Pincode;

        if (Pincode < 1000 || Pincode > 9999) { // Check if not a 4-digit number
            cout << "Invalid Pincode! Please enter a 4-digit number.\n";
        }
    } while (Pincode < 1000 || Pincode > 9999);
    do {
        cout << "Please deposit at least 500 to create an account: ";
        cin >> Balance;

        if (Balance < 500) {
            cout << "Amount less than Five Hundred!!!\a\n";
            cout << "Account cannot be created\n";
        }

    } while (Balance < 500); // Repeat until Balance >= 500

    return true; // Account creation can proceed

}

void BANK::ShowData() {

    cout << " Name: "<<setw(10)<<left << CustomerName << endl;
    cout << "Pincode: " << setw(10) << left << Pincode << endl;
    cout << "Balance: " << setw(10) << left << '$' << Balance << "\n";



}

int BANK::GetcustomerId() const {
    return Pincode;
}

void BANK::Modify() {
    cout << "\n\n\t***Enter New Data***" << endl;
    cin.ignore();
    cout << "Enter New Customer Name:  ";
    cin.getline(CustomerName, 20);
    cout << "Enter NEW Customer 4 digit pincode (only use integers): ";
    cin >> Pincode;
}

void BANK::showAll() {


    cout << left << setw(15) << CustomerName
        << setw(16) << Pincode
        << setw(3) << "$ "  <<Balance <<endl;
        

}

void BANK::AddDeposit()
{
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    Balance += amount;

}

void BANK::Withdraw()
{
    double amount;
    cout << "Enter amount to Withdraw: ";
    cin >> amount;
    if (amount > Balance)
    {
        cout << "insufficient Balance\a";
        return;
    }
    Balance -= amount;
    cout << "Remaining amount: " << Balance<<endl;
}
