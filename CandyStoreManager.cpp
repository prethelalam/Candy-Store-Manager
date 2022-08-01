#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//PROJECT HAS NOT BEEN COMPLETED YET

void StoreCustomerInfo(string Name, char Sex, float Weight, int Age, double Money, bool IsLactoseIntolerant) {
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
// For each of these functions, you need to read the corresponding information in the customers.txt file and return it from the function
// For example, you should be able to do this in the main function: 
// string name = GetCustomerName();
// And receive the correct customer name from the GetCustomerName function. Rinse and repeat for every function in this part.

// Grab the customer name in the customer.txt file and return it as a string.
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
    return string();
}

// Grab the customer's sex in the customer.txt file and return it as a char
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
    return char();
}

// Grab the customer's weight in the customer.txt file and return it as a float.
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
    return float();
}

// Grab the Customer's age from the customer.txt file and return it as an int.
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
    return int();
}

// Grab the amount of money the customer has spent in the customer.txt file and return it as a float.
double GetMoneySpentByCustomer() {
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
    return double();
}

// Grab whether or not the customer is lactose intolerant from the customer.txt file and return it as a bool.
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
    return bool();
}

// The cost of storage is a function that mimics how much storage it would take to save all the customer's information. 
// This storage is determined by the data type it takes to store the customer's information in your program. Specifically,
// it is directly proportional to the amount of bytes required for each data type.
// Create a variable called "byteMultiplier" as a double and set its value to 2.5. Then, use the previous functions (GetCustomerName, GetCustomerSex, etc)
// to grab all the information stored in the file. Store these values in variables inside the GetCostOfStorage function.
// Then, using your knowledge of data types OR pre-written C++ functions (Google 'sizeof') to get the number of bytes it takes to store all of these
// variables. Then finally, compute the "cost of storage" by computing the expression: <total number of bytes> * <byte multiplier> and return it.
// HINT: the hardest part about this will be the string. if you can't figure it out, come to me for help.
double GetCostOfStorage() {
    double ByteMultiplier = 2.5;
    string name = GetCustomerName();
    char sex = GetCustomerSex();
    float weight = GetCustomerWeight();
    int age = GetCustomerAge();
    double money = GetMoneySpentByCustomer();
    bool intolerant = IsLactoseIntolerant();
    double TotalNumberOfBytes;

    TotalNumberOfBytes = sizeof(string) + sizeof(char) + sizeof (float) + sizeof(int) + sizeof(double) + sizeof(bool);

    cout << "\n";
    cout << "The cost of storage is " << TotalNumberOfBytes * ByteMultiplier << " bytes" << endl;
    cout << "\n";

    return 0.0;
}

/* ------------------------------------------- */

/* Part 3 - Update Customer Info in the file */

// Implement the functionality where, if you need to update a customer's information, then you should be able to call this UpdateCustomerInfo function
// and it should update the customer.txt file. You'll need to add parameters to the function.

void UpdateCustomerInfo(string Name, char Sex, float Weight, int Age, double Money, bool IsLactoseIntolerant) {
    cout << "Do you want to update the customers information? If yes, enter y.\n";
    char option;
    cin >> option;
        if (option == 'y')
    {
    cout << "\n";
    StoreCustomerInfo(Name, Sex, Weight, Age, Money, IsLactoseIntolerant);

    return;
    }
}
/* ------------------------------------------- */

/* Part 4 - Displaying and taking in the customer's order */
// Part 4 is all about displaying menus and taking in the customer's order. I've broken it down into 6 functions: 3 for displaying menus, 
// 1 for taking the customer's order, 1 for "serving" the customer, and 1 for calculating the price of the order and updating the customer's 
// file.

// In DisplayMenuForCustomer, we're going to display either a normal menu or a diet menu based on how much the customer has spent so far
// on candy. If the customer has spent less than $25 dollars on candy, display the normal menu. Otherwise, display the diet menu. 
// You can choose whichever function you want to implement first: If you want to implement the "DisplayNormalMenu" functions before this "DisplayMenuForCustomer"
// function, all good!
// Then, you're going to ask what candy the customer chooses and how many of the candy they want. Then, you're going to update the "MoneySpentOnCandies"
// field -- use the UpdateCustomerInfo function!
// Hello! Welcome to WorryFree Candee! The CandyShop where you don't have to worry about how much you're eating candy because we'll handle that for you!


void DisplayMenuForCustomer() {
    //orignially was trying to call displayNormalMenu and DisplayDietMenu function here but it didn't work so i created an if statement in int main
    return;
}

void DisplayNormalMenu() {
    cout << "Sour patch kids - $7\n";
    cout << "Sour skittles - $8\n";
    cout << "Sour patch straws - $9\n";
    cout << "\n";
    return;
}

void DisplayDietMenu() {
    cout << "King sized Cookies and Cream Hershey - $10\n";
    cout << "Buncha Crunch - $11\n";
    cout << "King sized gummy bears- $12\n";
    cout << "\n";
    return;
}

void TakeCustomerOrder() {
    int Spent;
    cout << "What would you like to purchase?\n";
    if (Spent <= 25)
    {
        cout << "\n";
        DisplayNormalMenu();
    }
    else 
    {
        cout << "\n";
        DisplayDietMenu(); //this menu won't appear for some reason
    }
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
// As a candy store, you also need to manage your inventory of candy. You have two types of candy: normal and diet
// Consequently, you'll manage two different inventories: a normal inventory (for all the normal candies) and a diet
// inventory (for all the diet candies). 
// Luckily, each inventory only has 3 types of candy
// For the normal inventory, you have: KitKats, Snickers, and Starburst
// For the diet inventory, you have: Lollipops, Butterscotch, and AlmondJoys

// You'll create two other text files, "normal_inventory.txt" and "diet_inventory.txt" to represent these inventories.
// I'm deliberately leaving the file structure unknown - you can choose how you want the file to look. The only constraint
// is that the inventory for each candy should be integers. You start out with 20 candies each.

// Your inventory will be updated whenever the customer places an order. That'll be done in subsequent steps.

// Create two text files, normal_inventory.txt and diet_inventory.txt.
// For the normal inventory, you have: KitKats, Snickers, and Starburst
// For the diet inventory, you have: Lollipops, Butterscotch, and AlmondJoys
// Each inventory starts out with 20 candies of each (so 20 kitkats, 20 snickers and 20 starbusts for normal inventory
// and 20 lollipops, 20 butterscotch, and 20 almondjoys for diet). I'm choosing to leave how you want the file to be
// formatted up to you. I'd recommend taking some inspiration from your customer.txt file - and you'll want to store integers of course.
void CreateInventories() {
    return;
}

// Reset all the quantities of candies back in the NORMAL inventory back to 20
void RestockNormalInventory() {
    return;
}

// Reset all the quantities of candies back in the DIET inventory back to 20
void RestockDietInventory() {
    return;
}

// Update the quantities of the candies in the Normal inventory.
// HINT: You'll have to add parameters.
void UpdateNormalInventory() {
    return;
}

// Update the quantities of the candies in the Diet inventory.
// HINT: You'll have to add parameters.
void UpdateDietInventory() {
    return;
}

/* ------------------------------------------- */

int main() {
    
/*  string name = "Prethel Alam";
    char sex = 'M';
    float weight = 156.23;
    int age = 23;
    int money = 100;
    bool isLactoseIntolerant = false;

    UpdateCustomerInfo(name, sex, weight, age, money, isLactoseIntolerant); */
    
    // How would you call StoreCustomerInfo using the variables instead of the literals? 

    //Part 1
    StoreCustomerInfo("Prethel Alam", 'M', 153.23, 23, 100.23, false);

    //Part 3
    UpdateCustomerInfo("Zeus Alam", 'M', 20.57, 3, 89.43, true);

    //Part 2
    GetCustomerName(); 

    GetCustomerSex();

    GetCustomerWeight();

    GetCustomerAge();

    GetMoneySpentByCustomer();

    IsLactoseIntolerant();

    GetCostOfStorage();

    //Part 4
    DisplayMenuForCustomer();{
        int Spent;
        cout << "************Customer Menu************\n";
        cout << "How much money are you spending on candy?\n";
        cin >> Spent;
        if (Spent <=25)
    {
        cout << "\n";
        cout << "Since you would like to spend less than $25. Here is the Normal Menu is below: \n";
        cout << "\n";
        DisplayNormalMenu();
    }
    else
    {
        cout << "\n";
        cout << "Since you would like to spend more than $25. Here is the Diet Menu is below: \n";
        cout << "\n";
        DisplayDietMenu(); 
    }
    }
    
    TakeCustomerOrder();
    

    
}
