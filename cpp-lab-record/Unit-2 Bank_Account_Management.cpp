#include <iostream>
#include <cstring>
using namespace std;

class Account {
private:
    int accountNumber;
    char holderName[50];
    double balance;
    static int accountCount;

public:

    inline Account() {
        accountNumber = 0;
        strcpy(holderName, "NoName");
        balance = 0.0;
        accountCount++;
    }


    inline Account(int accNum, const char* name, double bal) {
        accountNumber = accNum;
        strcpy(holderName, name);
        balance = bal;
        accountCount++;
    }


    ~Account() {
        cout << "Destructor called for Account Number: " << accountNumber << endl;
        accountCount--;
    }


    inline void setAccount(int accNum, const char* name, double bal) {
        accountNumber = accNum;
        strcpy(holderName, name);
        balance = bal;
    }

    inline void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    inline bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
            return true;
        }
        else {
            cout << "Insufficient balance!" << endl;
            return false;
        }
    }

    inline void display() const {
        cout << "Account Number: " << accountNumber 
             << ", Holder Name: " << holderName 
             << ", Balance: $" << balance << endl;
    }

    inline int getAccountNumber() const {
        return accountNumber;
    }


    static int getAccountCount() {
        return accountCount;
    }
};


int Account::accountCount = 0;


void printAccount(Account acc) {
    cout << "Account info (from function): ";
    acc.display();
}


Account createAccount(int accNum, const char* name, double bal) {
    Account temp(accNum, name, bal);
    return temp;
}

int main() {
    const int MAX_ACCOUNTS = 3;

    
    Account accounts[MAX_ACCOUNTS];

    
    accounts[0].setAccount(1001, "John Doe", 1500.50);
    accounts[1].setAccount(1002, "Jane Smith", 2500.75);
    accounts[2] = createAccount(1003, "Alice Johnson", 3000.00); 

    cout << "\nAll Accounts:" << endl;
    for (int i = 0; i < MAX_ACCOUNTS; i++) {
        accounts[i].display();
    }

    cout << "\nTotal accounts: " << Account::getAccountCount() << endl;

    
    cout << "\nPerforming transactions on account 1001:" << endl;
    accounts[0].deposit(500.0);
    accounts[0].withdraw(200.0);
    accounts[0].withdraw(2000.0); 

    
    
    printAccount(accounts[1]);

    


    return 0;
}
