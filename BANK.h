#pragma once

constexpr auto  RED_TEXT = "\033[31m";
    constexpr auto RESET_COLOR = "\033[30m";
class BANK {
    
    char CustomerName[20];
    double Balance;
    int Pincode;
public:
    //these functions will perform actions on single instances of customers 

    BANK();
    bool CreateAccount();
    void ShowData();
    int GetcustomerId()const;
    void Modify();
    void showAll();
    void AddDeposit();
    void Withdraw();

};