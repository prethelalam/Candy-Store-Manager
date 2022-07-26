#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//PROJECT HAS NOT BEEN COMPLETED YET

// These are comments - Use them liberally! Notice the two forward slashes at the beginning of the line. These
// tell the compiler that these lines are comments.

/* Part 1 - Storing customer info in the file (THIS JUST MEANS MAKING A TEXT FILE IN VS CODE) */

// In this part, you're only going to be focused on "taking in info" from the customer and writing it to a file.
// You have to implement 1 function - "StoreCustomerInfo". This function should take in the
// customer's information and then write it to a file named "customer.txt" in a very specific format.

// I have provided two other functions: GiveMeAnInteger and GiveMeMultipleThings
// These functions are to demonstrate how to "take in" information. For example, I can "pass or providing values for the parameters" information to the
// "GiveMeAnInteger" function - I've passed in 10, 17, and 12321. You can see how I passed in the information from the
// calls I've made to the "GiveMeAnInteger" function from the main function.

// IN ORDER TO COMPLETE PART 1 YOU NEED TO:
// 1) Call "GiveMeMultipleThings" from the main function with the values:
//      string = "Hey I'm the string"
//      char = 'M'
//      int = 123
//done!

// 2) Edit the "StoreCustomerInfo" function to "take in" the information from the customer.
//      (HINT 1) Try to see what's different between the GiveMeMultipleThings function and StoreCustomerInfo
    // StoreCustomerInfo should take in the customer's information (Name, Sex, Weight, Age, Money spent so far for candies
//done!

// 3) In the StoreCustomerInfo function, write the customer information to a file called "customers.txt".
// The "customers.txt" file should be in the same directory as your cpp code.
//done!

// 4) Verify that your code "overwrites" itself in the "customers.txt" file - by this I mean if you call the
// StoreCustomerInfo with information about the customer, then call it again with DIFFERENT information about the
// customer, the different information should overwrite the old information
//done!

// 5) Push your changes to Github!
//done!


// StoreCustomerInfo should take in the customer's information (Name, Sex, Weight, Age, Money spent so far for candies, IsLactoseIntolerant) and write it to a file named "customer.txt" with each field being on a new line.
// The file should look this afterwards:
// <NAME> (a string)
// <SEX> (a char: 'M', 'F', or 'O')
// <WEIGHT> (a float)
// <AGE> (an int)
// <MONEY SPENT SO FAR ON CANDY> (a float)
// <IS LACTOSE INTOLERANT> (a bool)
// Where the actual values are substituted in place of their name, and the PARENTHESIS ARE IGNORED
// So for example, a file COULD look like this:
// Dave
// M
// 150.7
// 45
// 23.41
// false


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

void GiveMeAnInteger(int my_integer) { //functions allow you to do some small behaviors, this jsut shows how to pass information. so this my_integer is like a placeholder where you dont have to keep creating changing the info manually each time. you can even put pancakes, or dogs instead of my_integer
    cout << "Inside the GiveMeAnInteger function.\n";
    cout << "The integer you gave me was: " << my_integer << "\n";
}

void GiveMeMultipleThings(int my_integer, char my_char, string my_string) { // this jsut shows how to pass information

    cout << "Inside the GiveMeMultipleThings function.\n";
    cout << "The integer you gave me was: " << my_integer << "\n";
    cout << "The character you gave me was: " << my_char << "\n";
    cout << "The string you gave me was: " << my_string << "\n";
}


int GetTheNumber7() {
    return 7;
}

int TakeInWeight () {
    return 189;
}

int Add10ToWeight (int myWeight) {
    return myWeight + 10;
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
    cout << "Hello, World!" << endl;
    cout << "I'm about to call GiveMeAnInteger:\n";
    GiveMeAnInteger(10); //this 10 is the integer on line 60. on line 159 i am doing a call to give the function GiveMeAnInteger a integer of 201. so, my integer inside the function has the value of 201 (so youre replacing my integer with 201, so my_integer is like a placeholder). so my_integer is like a varible naem, i even replaced it wiht pancakes and it still worked. the technical term for this is a parameter
    int myAge = 17;
    cout << "\n";

    GiveMeAnInteger(myAge); //so notice how this this is myage = 23. the my_integer on line 60 is jsut a place holder, so since you you pass myAge to the givemeaninteger function, it will call up myage
    int temp = 12321;
    cout << "\n";

    GiveMeAnInteger(temp);
    //parameter: 
    cout << "\n";

    GiveMeMultipleThings(123, 'M', "Hey I'm the string");
    cout << "\n";
    


    StoreCustomerInfo("Prethel Alam", 'M', 156.23, 23, 100, false);

    GetCustomerName(); 

    GetCustomerSex();

    GetCustomerWeight();

    GetCustomerAge();

    GetMoneySpentByCustomer();

    IsCustomerLactoseIntolerant();
    
}
