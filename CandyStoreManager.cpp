#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//PROJECT HAS NOT BEEN COMPLETED YET

void StoreCustomerInfo(string Name, char Sex, float Weight, int Age, int Money, bool IsLactoseIntolerant) {
    fstream customer; //the fstream data type has a property of reading, writing, and working with files. 
    customer.open("customer.txt",ios::out); //ios::out is outputting information to the file
    if (customer.is_open()) 
    {
    customer << "Inside Store Customer Info.: \n";
    customer << "\n";
    customer << "The customers name is " << Name << endl;
    customer << "The customers sex is " << Sex << endl;
    customer << "The customers weight is " << Weight << " pounds" << endl;
    customer << "The customers age is " << Age << endl;
    customer << "The customer spent $" << Money << endl;
    customer << "Customer is lactose intolerant: " << endl;

    if (IsLactoseIntolerant == true)
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
        cout << Name << endl; 
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
        cout << Sex << endl;
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
        cout << Weight << endl;
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
        cout << Age << endl;
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
        cout << MoneySpentByCustomer << endl;
    }
    else 
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return 0.0;
}

bool IsLactoseIntolerant() {
    fstream customer;
    customer.open("customer.txt", ios::in);
    if (customer.is_open()){
        string IsLactoseIntolerant;
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        cout << "Customer is lactose intorelant: " << IsLactoseIntolerant << endl;
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
    cout << "Do you want to update the customers information? If yes, enter 1.\n";
    int option;
    cin >> option;
    if (option == 1){
    fstream customer;
    customer.open("customer.txt",ios::out);
    if (customer.is_open()){
    //getline(customer, Name, l);
    StoreCustomerInfo("Zeus Alam", 'M', 20, 3, 89, true); 
    }
    }

    GetCustomerName(); 

    GetCustomerSex();

    GetCustomerWeight();

    GetCustomerAge();

    GetMoneySpentByCustomer();

    IsLactoseIntolerant();

//part 4
    DisplayMenuForCustomer();
    
}