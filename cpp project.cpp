#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// ==========================================
// BANK ACCOUNT STRUCTURE
// ==========================================

struct Account
{
    int accountNumber;
    string customerName;
    int age;
    string phone;
    string address;
    string accountType;
    double balance;
};

// ==========================================
// GLOBAL VECTOR
// ==========================================

vector<Account> accounts;

// ==========================================
// FUNCTION DECLARATIONS
// ==========================================

void createAccount();
void displayAllAccounts();
void searchAccount();
void depositMoney();
void withdrawMoney();
void checkBalance();
void updateAccount();
void deleteAccount();
void transactionHistory();
void saveData();
void loadData();
void mainMenu();

// ==========================================
// CREATE ACCOUNT
// ==========================================

void createAccount()
{
    Account a;

    cout << "\n====================================\n";
    cout << "          CREATE ACCOUNT\n";
    cout << "====================================\n";

    cout << "Enter Account Number: ";
    cin >> a.accountNumber;

    // Check duplicate account number
    for (const auto &acc : accounts)
    {
        if (acc.accountNumber == a.accountNumber)
        {
            cout << "\nAccount number already exists!\n";
            return;
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Customer Name: ";
    getline(cin, a.customerName);

    cout << "Enter Age: ";
    cin >> a.age;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Phone Number: ";
    getline(cin, a.phone);

    cout << "Enter Address: ";
    getline(cin, a.address);

    cout << "Enter Account Type (Savings/Current): ";
    getline(cin, a.accountType);

    cout << "Enter Initial Deposit: ";
    cin >> a.balance;

    if (a.balance < 0)
    {
        cout << "\nBalance cannot be negative.\n";
        return;
    }

    accounts.push_back(a);

    cout << "\nAccount created successfully!\n";
}

// ==========================================
// DISPLAY ALL ACCOUNTS
// ==========================================

void displayAllAccounts()
{
    cout << "\n====================================\n";
    cout << "          ALL ACCOUNTS\n";
    cout << "====================================\n";

    if (accounts.empty())
    {
        cout << "No accounts available.\n";
        return;
    }

    cout << left
         << setw(12) << "Account No"
         << setw(20) << "Name"
         << setw(8) << "Age"
         << setw(15) << "Phone"
         << setw(15) << "Type"
         << setw(12) << "Balance"
         << endl;

    cout << string(82, '-') << endl;

    for (const auto &a : accounts)
    {
        cout << left
             << setw(12) << a.accountNumber
             << setw(20) << a.customerName
             << setw(8) << a.age
             << setw(15) << a.phone
             << setw(15) << a.accountType
             << setw(12) << fixed << setprecision(2) << a.balance
             << endl;
    }
}

// ==========================================
// SEARCH ACCOUNT
// ==========================================

void searchAccount()
{
    int number;

    cout << "\nEnter Account Number: ";
    cin >> number;

    for (const auto &a : accounts)
    {
        if (a.accountNumber == number)
        {
            cout << "\n====================================\n";
            cout << "         ACCOUNT DETAILS\n";
            cout << "====================================\n";

            cout << "Account Number : " << a.accountNumber << endl;
            cout << "Customer Name  : " << a.customerName << endl;
            cout << "Age            : " << a.age << endl;
            cout << "Phone          : " << a.phone << endl;
            cout << "Address        : " << a.address << endl;
            cout << "Account Type   : " << a.accountType << endl;
            cout << "Balance        : Rs. "
                 << fixed << setprecision(2)
                 << a.balance << endl;

            return;
        }
    }

    cout << "\nAccount not found!\n";
}

// ==========================================
// DEPOSIT MONEY
// ==========================================

void depositMoney()
{
    int number;
    double amount;

    cout << "\nEnter Account Number: ";
    cin >> number;

    for (auto &a : accounts)
    {
        if (a.accountNumber == number)
        {
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "\nInvalid deposit amount!\n";
                return;
            }

            a.balance += amount;

            cout << "\nDeposit successful!\n";
            cout << "New Balance: Rs. "
                 << fixed << setprecision(2)
                 << a.balance << endl;

            return;
        }
    }

    cout << "\nAccount not found!\n";
}

// ==========================================
// WITHDRAW MONEY
// ==========================================

void withdrawMoney()
{
    int number;
    double amount;

    cout << "\nEnter Account Number: ";
    cin >> number;

    for (auto &a : accounts)
    {
        if (a.accountNumber == number)
        {
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "\nInvalid withdrawal amount!\n";
                return;
            }

            if (amount > a.balance)
            {
                cout << "\nInsufficient balance!\n";
                return;
            }

            a.balance -= amount;

            cout << "\nWithdrawal successful!\n";
            cout << "Remaining Balance: Rs. "
                 << fixed << setprecision(2)
                 << a.balance << endl;

            return;
        }
    }

    cout << "\nAccount not found!\n";
}

// ==========================================
// CHECK BALANCE
// ==========================================

void checkBalance()
{
    int number;

    cout << "\nEnter Account Number: ";
    cin >> number;

    for (const auto &a : accounts)
    {
        if (a.accountNumber == number)
        {
            cout << "\nCustomer Name : "
                 << a.customerName << endl;

            cout << "Account Type  : "
                 << a.accountType << endl;

            cout << "Current Balance: Rs. "
                 << fixed << setprecision(2)
                 << a.balance << endl;

            return;
        }
    }

    cout << "\nAccount not found!\n";
}

// ==========================================
// UPDATE ACCOUNT
// ==========================================

void updateAccount()
{
    int number;

    cout << "\nEnter Account Number to Update: ";
    cin >> number;

    for (auto &a : accounts)
    {
        if (a.accountNumber == number)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter New Customer Name: ";
            getline(cin, a.customerName);

            cout << "Enter New Age: ";
            cin >> a.age;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter New Phone Number: ";
            getline(cin, a.phone);

            cout << "Enter New Address: ";
            getline(cin, a.address);

            cout << "\nAccount updated successfully!\n";

            return;
        }
    }

    cout << "\nAccount not found!\n";
}

// ==========================================
// DELETE ACCOUNT
// ==========================================

void deleteAccount()
{
    int number;

    cout << "\nEnter Account Number to Delete: ";
    cin >> number;

    for (auto it = accounts.begin(); it != accounts.end(); ++it)
    {
        if (it->accountNumber == number)
        {
            accounts.erase(it);

            cout << "\nAccount deleted successfully!\n";

            return;
        }
    }

    cout << "\nAccount not found!\n";
}

// ==========================================
// TRANSACTION HISTORY
// ==========================================

void transactionHistory()
{
    cout << "\n====================================\n";
    cout << "        TRANSACTION HISTORY\n";
    cout << "====================================\n";

    cout << "\nTransaction History module is ready.\n";
    cout << "In the next version, deposits and withdrawals\n";
    cout << "will be stored with date and time.\n";
}

// ==========================================
// SAVE DATA TO FILE
// ==========================================

void saveData()
{
    ofstream file("bank_accounts.txt");

    if (!file)
    {
        cout << "\nError opening file!\n";
        return;
    }

    for (const auto &a : accounts)
    {
        file << a.accountNumber << "|"
             << a.customerName << "|"
             << a.age << "|"
             << a.phone << "|"
             << a.address << "|"
             << a.accountType << "|"
             << a.balance << "\n";
    }

    file.close();

    cout << "\nAccount data saved successfully!\n";
}

// ==========================================
// LOAD DATA FROM FILE
// ==========================================

void loadData()
{
    ifstream file("bank_accounts.txt");

    if (!file)
    {
        return;
    }

    accounts.clear();

    Account a;
    string separator;

    while (file >> a.accountNumber)
    {
        file.ignore();

        getline(file, a.customerName, '|');
        file >> a.age;
        file.ignore();

        getline(file, a.phone, '|');
        getline(file, a.address, '|');
        getline(file, a.accountType, '|');

        file >> a.balance;

        accounts.push_back(a);
    }

    file.close();
}

// ==========================================
// MAIN MENU
// ==========================================

void mainMenu()
{
    int choice;

    do
    {
        cout << "\n\n";
        cout << "==============================================\n";
        cout << "             BANK MANAGEMENT SYSTEM\n";
        cout << "==============================================\n";

        cout << "1.  Create Account\n";
        cout << "2.  Display All Accounts\n";
        cout << "3.  Search Account\n";
        cout << "4.  Deposit Money\n";
        cout << "5.  Withdraw Money\n";
        cout << "6.  Check Balance\n";
        cout << "7.  Update Account\n";
        cout << "8.  Delete Account\n";
        cout << "9.  Transaction History\n";
        cout << "10. Save Data\n";
        cout << "11. Exit\n";

        cout << "==============================================\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAccount();
            break;

        case 2:
            displayAllAccounts();
            break;

        case 3:
            searchAccount();
            break;

        case 4:
            depositMoney();
            break;

        case 5:
            withdrawMoney();
            break;

        case 6:
            checkBalance();
            break;

        case 7:
            updateAccount();
            break;

        case 8:
            deleteAccount();
            break;

        case 9:
            transactionHistory();
            break;

        case 10:
            saveData();
            break;

        case 11:
            saveData();
            cout << "\nThank you for using Bank Management System!\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 11);
}

// ==========================================
// MAIN FUNCTION
// ==========================================

int main()
{
    loadData();

    mainMenu();

    return 0;
}