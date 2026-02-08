/*
Personal Expense Calculator (C++)
Author: Minahil Amir
ADP IT Student (4th Semester), GCUF

Description:
This is a beginner-level C++ console application that calculates
the remaining balance after expenses. It demonstrates core concepts
including variables, data types, input/output, and arithmetic operators.
*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"\n=============================="<<endl;
    cout<<" PERSONAL EXPENSE CALCULATOR "<<endl;
    cout<<"=============================="<<endl;

    string name;
    double totalMoney;
    double expenses;
    double remainingBalance;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Enter your total money: ";
    cin>>totalMoney;

    cout<<"Enter your expenses: ";
    cin>>expenses;

    remainingBalance = totalMoney - expenses;

    cout<<"\n=============================="<<endl;
    cout<<"        EXPENSE REPORT        "<<endl;
    cout<<"=============================="<<endl;

    cout<<"Name              : "<<name<<endl;
    cout<<"Total Money       : "<<totalMoney<<endl;
    cout<<"Expenses          : "<<expenses<<endl;
    cout<<"Remaining Balance : "<<remainingBalance<<endl;

    cout<<"=============================="<<endl;
    cout<<"Thank you for using the app!"<<endl;

    return 0;
}
