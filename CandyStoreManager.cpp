#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//PROJECT HAS NOT BEEN COMPLETED YET

void StoreCustomerInfo(string Name, char Sex, float Weight, int Age, int Money, bool IsLactoseTolerant) {
    fstream customer; //the fstream data type has a property of reading, writing, and working with files. 
    customer.open("customer.txt",ios::out); //ios::out is outputting information to the file
    if (customer.is_open()) 
    {
    customer << "Inside Store Customer Info.: \n";
    customer << "\n";
    customer << Name << endl;
    customer << Sex << endl;
    customer << Weight << endl;
    customer << Age << endl;
    customer << Money << endl;

    if (IsLactoseTolerant == true)
    {
        customer << "True" << endl; 
    }
    else
    {
        customer << "False" << endl;
    }
    customer.close();
    }
}
/* ------------------------------------------- */

/* Part 2 - Reading customer info from the file */

string GetCustomerName() {
    fstream customer;
    customer.open("customer.txt", ios::in); // this is opening the file
    if (customer.is_open()){
        string Name;
        getline(customer, Name);
        getline(customer, Name);
        getline(customer, Name);
        cout << "The customers name is " << Name << endl; 
    }
    else 
    {
        cout << "Error: File not found.\n";
    }
    customer.close();
    return " ";
}

char GetCustomerSex() {
    fstream customer;
    customer.open("customer.txt", ios::in);
    if (customer.is_open()){
        string Sex;
        getline (customer, Sex);
        getline (customer, Sex);
        getline (customer, Sex);
        getline (customer, Sex);
        cout << "The customers sex is " << Sex << endl;
    }
    else 
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return ' ';
}

float GetCustomerWeight() {
    fstream customer;
    customer.open("customer.txt",ios::in);
    if (customer.is_open()){
        string Weight;
        getline (customer, Weight);
        getline (customer, Weight);
        getline (customer, Weight);
        getline (customer, Weight);
        getline (customer, Weight);
        cout << "The customers weight is " << Weight << endl;
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return 0.0;
}

int GetCustomerAge() {
    fstream customer;
    customer.open("customer.txt",ios::in);
    if (customer.is_open()){
        string Age;
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        cout << "The customers age is " << Age << endl;
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return 0;
}

int GetMoneySpentByCustomer() {
    fstream customer;
    customer.open("customer.txt", ios::in);
    if (customer.is_open()){
        string MoneySpentByCustomer;
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        cout << "The customer spent $" << MoneySpentByCustomer << endl;
    }
    else 
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return 0.0;
}

bool IsCustomerLactoseIntolerant() {
    fstream customer;
    customer.open("customer.txt", ios::in);
    if (customer.is_open()){
        string IsCustomerLactoseIntolerant;
        getline(customer,IsCustomerLactoseIntolerant);
        getline(customer,IsCustomerLactoseIntolerant);
        getline(customer,IsCustomerLactoseIntolerant);
        getline(customer,IsCustomerLactoseIntolerant);
        getline(customer,IsCustomerLactoseIntolerant);
        getline(customer,IsCustomerLactoseIntolerant);
        getline(customer,IsCustomerLactoseIntolerant);
        getline(customer,IsCustomerLactoseIntolerant);
        cout << "Is the customer lactose intolerant? True is yes, False is no: " << IsCustomerLactoseIntolerant << endl;
    }
    else{
        cout << "Error: file not found.\n";
    }
    return false;
}

double GetCostOfStorage() {
    return 0.0;
}

/* ------------------------------------------- */

/* Part 3 - Update Customer Info in the file */

void UpdateCustomerInfo() {
    return;
}
/* ------------------------------------------- */

/* Part 4 - Displaying and taking in the customer's order */

void DisplayMenuForCustomer() { 
    int option;

    cout << "Select what you would like to do. \n";
    cout << "Add customer information, enter 1: \n";
    cout << "Read customer information, enter 2: \n";
    cout << "Update customer information, enter 3: \n";
    cin >> option;

    if (option==1)
    {
        cout << "Enter customer information.\n";
        cin >> option;
    }
    
    return;
}

void DisplayNormalMenu() {
    return;
}

void DisplayDietMenu() {
    return;
}

void TakeCustomerOrder() {
    return;
}

void ServeCustomerCandy() {
    return;
}

double CalculatePrice() {
    return 0.0;
}
/* ------------------------------------------- */

/* Part 5 - Updating your inventory */

void UpdateInventory() {
    return;
}

void UpdateNormalInventory() {
    return;
}

void UpdateDietInventory() {
    return;
}

/* ------------------------------------------- */

int main() {
    
    StoreCustomerInfo("Prethel Alam", 'M', 156.23, 23, 100, false);

    GetCustomerName(); 

    GetCustomerSex();

    GetCustomerWeight();

    GetCustomerAge();

    GetMoneySpentByCustomer();

    IsCustomerLactoseIntolerant();

//part 4
    DisplayMenuForCustomer();
    
}
