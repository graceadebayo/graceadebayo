#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Expense {\
string category;
string description;
double amont;
};

vector<Expense> expenses;

//Function to add pa new expense
void  addExpense() {
    Expense e;
    cout <<"\nEnter catergory (e. g Food, Transport, Data):";
    cin >> e.category;
    cout << "Enter description: ";
    cin.ignore();
    getline(cin, e.description);
    cout << "Enter amount: ";
    cin >> e.amont;

expenses.push_back(e);

// Save to file
ofstream file("expenses.txt", ios::app);
file << e.category << "," << e.description << "," << e.amont << endl;
file.close();

cout << "✔ Expense added successfully!\n";

}


// Function to view all expenses
void viewExpenses() {

    cout << "\n------  Expense List ------\n";
    double total = 0;
    ifstream file ("expenses.txt");
    string category, discription;
    double amount;

    while (file >> ws && getline(file, category, ',') &&
    getline(file, discription, ',') && 
    file >> amount) {
        cout << "Category: " << category << " | Description: " << discription << " | Amount: $" << amount << endl;
        total += amount;
    }

     file.close();
    cout << "----------------------------\n";
    cout << "💰 Total Spent: $" << total << "\n";
}

int main() {
    int choice;
    cout << "==============================\n";
    cout << "  PERSONAL EXPENSE TRACKER\n";
    cout << "==============================\n";

    while (true) {
        cout << "\n1. Add Expense\n2. View Expenses\n3. Exit\nChoose an option: ";
        cin >> choice;

        if (choice == 1) addExpense();
        else if (choice == 2) viewExpenses();
        else if (choice == 3) {
            cout << "👋 Goodbye! Keep tracking your spending wisely!\n";
            break;
        } else cout << "Invalid option. Try again.\n";
    }

    return 0;

}