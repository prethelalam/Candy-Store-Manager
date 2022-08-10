#include <iostream>
#include <string>
#include <fstream>
#include "CandyStoreManager.h"

using namespace std;

void StoreCustomerInfo(string Name, char Sex, float Weight, int Age, double Money, bool IsLactoseIntolerant) {
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

// Grab the customer name in the customer.txt file and return it as a string.
string GetCustomerName() {
    fstream customer;
    string Name;
    customer.open("customer.txt", ios::in); // this is opening the file
    if (customer.is_open()){
        getline(customer, Name);
        getline(customer, Name);
        getline(customer, Name);
    }
    else
    {
        cout << "Error: File not found.\n";
    }
    customer.close();
    return Name;
}
// Grab the customer's sex in the customer.txt file and return it as a char
char GetCustomerSex() {
    fstream customer;
    string Sex;
    char sex;
    customer.open("customer.txt", ios::in);
    if (customer.is_open()){
        getline (customer, Sex);
        getline (customer, Sex);
        getline (customer, Sex);
        getline (customer, Sex);
        sex = Sex[0];
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return sex; 
}

// Grab the customer's weight in the customer.txt file and return it as a float.
float GetCustomerWeight() {
    fstream customer;
    string Weight;
    float weight; //defining a float to be used later
    customer.open("customer.txt",ios::in);
    if (customer.is_open()){
        getline (customer, Weight);
        getline (customer, Weight);
        getline (customer, Weight);
        getline (customer, Weight);
        getline (customer, Weight);
        weight = stof(Weight); //using stof to convert a string into a float
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return weight;
}

// Grab the Customer's age from the customer.txt file and return it as an int.
int GetCustomerAge() {
    fstream customer;
    string Age;
    int age;
    customer.open("customer.txt",ios::in);
    if (customer.is_open()){
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        getline (customer, Age);
        age = stoi(Age);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return age;
}

// Grab the amount of money the customer has spent in the customer.txt file and return it as a float.
double GetMoneySpentByCustomer() {
    fstream customer;
    string MoneySpentByCustomer;
    double money;
    customer.open("customer.txt", ios::in);
    if (customer.is_open()){
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        getline (customer, MoneySpentByCustomer);
        money = stod(MoneySpentByCustomer);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    customer.close();
    return money;
}

// Grab whether or not the customer is lactose intolerant from the customer.txt file and return it as a bool.
bool IsLactoseIntolerant() {
    fstream customer;
    string IsLactoseIntolerant;
    bool lactoseIntolerant;
    customer.open("customer.txt", ios::in);
    if (customer.is_open()){
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
        getline(customer,IsLactoseIntolerant);
    }
    else{
        cout << "Error: file not found.\n";
    }
    customer.close();
    return lactoseIntolerant;
}

// The cost of storage is a function that mimics how much storage it would take to save all the customer's information.
// This storage is determined by the data type it takes to store the customer's information in your program. Specifically,
double GetCostOfStorage() {
    double ByteMultiplier = 2.5, TotalNumberOfBytes;
    string name = GetCustomerName();
    char sex = GetCustomerSex();
    float weight = GetCustomerWeight();
    int age = GetCustomerAge();
    double money = GetMoneySpentByCustomer();
    bool intolerant = IsLactoseIntolerant();

    TotalNumberOfBytes = sizeof(string) + sizeof(char) + sizeof(float) + sizeof(int) + sizeof(double) + sizeof(bool);

    cout << "\n";
    cout << "The cost of storage is " << TotalNumberOfBytes * ByteMultiplier << " bytes" << endl;
    cout << "\n";

    return 0.0;
}

/* Part 3 - Update Customer Info in the file */
void UpdateCustomerInfo(string Name, char Sex, float Weight, int Age, double Money, bool IsLactoseIntolerant) {
    StoreCustomerInfo(Name, Sex, Weight, Age, Money, IsLactoseIntolerant);
    return;
}

/* Part 4a - Updating your inventory */
//Creating Normal Inventory in a text file
void CreateNormalInventory (int Snickers, int StarBursts, int KitKats) {
    fstream Normal;
    Normal.open("Normal_Inventory.txt", ios::out);
    if (Normal.is_open())
    {
        Normal << Snickers << endl;
        Normal << StarBursts << endl;
        Normal << KitKats << endl;
    }
    Normal.close();
    return;
}

//Creating Diet Inventory in a text file
void CreateDietInventory (int Lollipops, int Butterscotch, int AlmondJoys) {
    fstream Diet;
    Diet.open("Diet_Inventory.txt", ios::out);
    if (Diet.is_open())
    {
        Diet << Lollipops << endl;
        Diet << Butterscotch << endl;
        Diet << AlmondJoys << endl;
    }
    Diet.close();
    return;
}

// Resetting all the quantities of candies back in the NORMAL inventory back to 20
void RestockNormalInventory(int RestockSnickers, int RestockStarBursts, int  RestockKitKats) {
    int snickers = GetNumSnickers(), starbursts = GetNumStarbursts(), kitkats = GetNumKitkats();
    if (snickers <= 5 || starbursts <= 5 || kitkats <= 5)
    {
        CreateNormalInventory(RestockSnickers, RestockStarBursts, RestockKitKats);
    }
    return;
}

// Resetting all the quantities of candies back in the DIET inventory back to 20
void RestockDietInventory(int RestockLollipops, int RestockButterscotch, int RestockAlmondJoys) {
    int lollipops = GetNumLollipops() , butterscotch = GetNumButterscotch(), almondJoys = GetNumAlmondJoys();
    if (lollipops <= 5 || butterscotch <= 5 || almondJoys <= 5)
    {
        CreateDietInventory(RestockLollipops, RestockButterscotch, RestockAlmondJoys);
    }
    return;
}

// Updating the quantities of the candies in the Normal inventory.
void UpdateNormalInventory(int UpdateAMTSnickers, int UpdateAMTStarBursts, int  UpdateAMTKitKats) { 
    CreateNormalInventory(UpdateAMTSnickers, UpdateAMTStarBursts, UpdateAMTKitKats);
    return;
}

// Updating the quantities of the candies in the Diet inventory.
void UpdateDietInventory(int UpdateAMTLollipops, int UpdateAMTButterscotch, int UpdateAMTAlmondJoys) { 
    CreateDietInventory(UpdateAMTLollipops, UpdateAMTButterscotch, UpdateAMTAlmondJoys);
    return;
}

/* Part 4b - Getting quantities from your inventory */

//Getting snickers quantity from normal text file and returning as an integer
int GetNumSnickers() {
    fstream Normal;
    string Snickers;
    int snickers;
    Normal.open("Normal_Inventory.txt", ios::in);
    if (Normal.is_open())
    {
        getline(Normal, Snickers);
        snickers = stoi(Snickers);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    Normal.close();
    return snickers;
}

//Getting starbursts quantity from normal text file and returning as an integer
int GetNumStarbursts() {
    fstream Normal;
    string Starbursts;
    int starbursts;
    Normal.open("Normal_Inventory.txt", ios::in);
    if (Normal.is_open())
    {
        getline(Normal, Starbursts);
        getline(Normal, Starbursts);
        starbursts = stoi(Starbursts);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    Normal.close();
    return starbursts;
}

//Getting kitkats quantity from normal text file and returning as an integer
int GetNumKitkats() {
    fstream Normal;
    string KitKats;
    int kitkats;
    Normal.open("Normal_Inventory.txt", ios::in);
    if (Normal.is_open())
    {
        getline (Normal, KitKats);
        getline (Normal, KitKats);
        getline (Normal, KitKats);
        kitkats = stoi(KitKats);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    Normal.close();
    return kitkats;
}

//Getting lollipops quantity from diet text file and returning as an integer
int GetNumLollipops() {
    fstream Diet;
    string Lollipops;
    int lollipops;
    Diet.open("Diet_Inventory.txt", ios::in);
    if (Diet.is_open())
    {
        getline(Diet, Lollipops);
        lollipops = stoi(Lollipops);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    Diet.close();
    return lollipops;
}

//Getting butterscotch quantity from diet text file and returning as an integer
int GetNumButterscotch() {
    fstream Diet;
    string Butterscotch;
    int butterscotch;
    Diet.open("Diet_Inventory.txt", ios::in);
    if (Diet.is_open())
    {
        getline(Diet, Butterscotch);
        getline(Diet, Butterscotch);
        butterscotch = stoi(Butterscotch);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    Diet.close();
    return butterscotch;
}

//Getting almondjoys quantity from diet text file and returning as an integer
int GetNumAlmondJoys() {
    fstream Diet;
    string AlmondJoys;
    int almondjoys;
    Diet.open("Diet_Inventory.txt", ios::in);
    if (Diet.is_open())
    {
        getline(Diet, AlmondJoys);
        getline(Diet, AlmondJoys);
        getline(Diet, AlmondJoys);
        almondjoys = stoi(AlmondJoys);
    }
    else
    {
        cout << "Error: file not found.\n";
    }
    Diet.close();
    return almondjoys;
}

/* Part 5 - Putting it all together. Displaying and taking in the customer's order */

// This function (GreetCustomer) will greet the customer
void GreetCustomer(string customer_name) {
    cout << "Hello " << customer_name << "! Welcome to WorryFree Candee!\n";
}

//This function (AskIfReturningCustomer) will ask if customer is an existing customer
void AskIfReturningCustomer() {
    cout << "Are you a returning customer? (y/n)\n";
}

// This function (SayWelcomeBack) welcomes back the existing customer
void SayWelcomeBack(string customer_name) {
    cout << "Welcome back " << customer_name << "! Based on our records, here is the menu that we've chosen for you...\n";
}

// This function (WelcomeNewCustomer) welcomes the customer
void WelcomeNewCustomer (string customer_name) {
    cout << "Well, welcome to WorryFree Candy " << customer_name << "! We're looking forward to working with you! First, let's get some information about you before we move on...\n";
    cout << "\n";
}

// This function (HandleNewCustomerForInformation) is going to ask the customer about the name, sex, weight, age, and whether or not they're lactose intolerant. (for new customers only)
void HandleNewCustomerInformation() {
    //Get customers name
    string customer_first_name, customer_last_name;
    

    cout << "What is your first name?:\n";
    cin >> customer_first_name;
    cout << "\n";
    cout << "What is your last name?:\n";
    cin >> customer_last_name;
    string customer_name = customer_first_name + customer_last_name;
    cout << "\n"; 

    //Getting customers sex
    char customer_sex;
    cout << "What do you identify as? (M, F, O)?:\n";
    cin >> customer_sex;
    cout << "\n"; 
    
    //Getting customers weight
    float customer_weight;
    cout << "What is your weight? Please make sure to round to the nearest tenth: \n";
    cin >> customer_weight;
    cout << "\n"; 

    //Getting customers age
    int customer_age;
    cout << "What is your age (in years?): \n";
    cin >> customer_age;
    cout << "\n"; // added for formatting

    //Initializing a boolean variable named "is_lactose_intolerant" with the value of false
    bool is_lactose_intolerant = false;

    //Ask the customer if they are lactose intolerant. If the customer answers "y", I will assign the "is_lactose_intolerant" variable a value of true. Otherwise, I will assign the "is_lactose_intolerant" variable a value of false.

    char decision; 
    cout << "Are you lactose intolerant? (y/n):\n";
    cin >> decision;
    cout << "\n"; 
    if (decision == 'y')
        {
            is_lactose_intolerant = true;
        }
        else
        {
            is_lactose_intolerant = false;
        } 
    
    //is_lactose_intolerant = (decision == 'y'); //== is basically like a boolean expression (another way of writing the if statement above)

    //Initializing a double variable named "money_spent_by_customer" with a value of 0.0 . This is to represent that the customer has not spent any money on candy yet, since they are a new customer.
    double money_spent_by_customer = 0.0;

    //Calling StoreCustomerInfo with all the variables you created in the lines above.
    StoreCustomerInfo(customer_name, customer_sex, customer_weight, customer_age, money_spent_by_customer, is_lactose_intolerant);

    cout << "Thank you for joining WorryFree Candy! We have recorded your information.\n";
    cout << "\n";
}

//This function (ShouldDisplayNormalMenu) is going to be used by YOU (the programmer) to decide whether you should display the normal menu or the diet menu. It will NOT do any PRINTING, but it will RETURN a value.
//The function will return a boolean value. Booleans can only be two values: true or false.
//This function will check the amount of money that the customer has spent so far on candy by using your GetMoneySpentByCustomer function.
//If the customer has spent LESS THAN $25 on candy, you should return true. Otherwise, you should return false.
bool ShouldDisplayNormalMenu() {
    //initializing a double variable called "money_spent_by_customer" with the value of a call to GetMoneySpentByCustomer
    double money_spent_by_customer = GetMoneySpentByCustomer();

    //writing an if statement that checks if "money_spent_by_customer" is less than 25. If it is less than 25, return true. Otherwise, return false.
    if (money_spent_by_customer < 25)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//This function (DisplayNormalMenu) is going to display the normal menu for candies. 
void DisplayNormalMenu() {
    cout << "For you, here is our finest selection of normal candies! Please select the number associated with the candy you want to buy. \n";
    cout << "\n";
    cout << "1. Snickers ($5 each)\n";
    cout << "2. Starburst ($3 each)\n";
    cout << "3. KitKats ($4 each)\n";
}

//This function (HandleNormalMenuCandyChoice) is going to be called AFTER you call "DisplayNormalMenu".
//This function will ask the customer to input their candy choice, and then ask the customer for the amount of candy that they want.
void HandleNormalMenuCandyChoice() {
    //Which candy the customer wants
    string candy_choice;

    cout << "Which candy would you like (1, 2, 3)?:\n";
    cin >> candy_choice;

    if (candy_choice != "1" && candy_choice != "2" && candy_choice != "3") //|| is or, && is and
    {
        cout << "unhandled input. exiting.\n";
        return;
    }

    //The amount of candies the customer wants
    int amount_of_candies;

    cout << "How many would you like?:\n";
    cin >> amount_of_candies;

    //initializing a double variable named "price_of_candy" with a value of -1.0
    double price_of_candy = -1.0; //this is like the werid thing from the data types worksheet (random storage of numbers with data types) 

    if (candy_choice == "1")
    {
        price_of_candy = 5.0;
    }
    else if (candy_choice == "2")
    {
        price_of_candy = 3.0;
    }
    else if (candy_choice == "3")
    {
        price_of_candy = 4.0;
    } 

    //now I am going to check our inventory based off the candy they selected.
    if (candy_choice == "1")
    {
        //if in here, the customer selected they want a Snickers. we're going to check how many snickers are remaining in our inventory.
        int num_snickers_in_inventory = GetNumSnickers();

        if (num_snickers_in_inventory > amount_of_candies)
        {
        int UpdatedSnickers = num_snickers_in_inventory - amount_of_candies;
        int total = price_of_candy * amount_of_candies; 
        double UpdatedMoneyInAccount = GetMoneySpentByCustomer() + total;
    
        UpdateNormalInventory(UpdatedSnickers, GetNumStarbursts(), GetNumKitkats());
        UpdateCustomerInfo(GetCustomerName(), GetCustomerSex(), GetCustomerWeight(), GetCustomerAge(), UpdatedMoneyInAccount, IsLactoseIntolerant());

        cout << "\n";
        cout << "Thanks! Your total was: $" << total << ". Your information has been updated!\n";
        }
        else
        {
            cout << "\n";
            cout << "Sorry, we don't have enough candy!\n";
        }
    }
    else if (candy_choice == "2")
    {
        int num_starbursts_in_inventory = GetNumStarbursts();

        if (num_starbursts_in_inventory > amount_of_candies)
        {
            int UpdatedStarbursts = num_starbursts_in_inventory - amount_of_candies;
            int total = price_of_candy * amount_of_candies;
            double UpdatedMoneyInAccount = GetMoneySpentByCustomer() + total;

            UpdateNormalInventory(GetNumSnickers(), UpdatedStarbursts, GetNumKitkats());
            UpdateCustomerInfo(GetCustomerName(), GetCustomerSex(), GetCustomerWeight(), GetCustomerAge(), UpdatedMoneyInAccount, IsLactoseIntolerant());
            
            cout << "\n";
            cout << "Thanks! Your total was: $" << total << ". Your information has been updated!\n";
        }
        else
        {
            cout << "\n";
            cout << "Sorry, we don't have enough candy!\n";
        }
    }
    else if (candy_choice == "3")
    {
        int num_kitkats_in_inventory = GetNumKitkats();

        if (num_kitkats_in_inventory > amount_of_candies)
        {
            int UpdatedKitkats = num_kitkats_in_inventory - amount_of_candies;
            int total = price_of_candy * amount_of_candies;
            double UpdatedMoneyInAccount = GetMoneySpentByCustomer() + total;

            UpdateNormalInventory(GetNumSnickers(), GetNumStarbursts(), UpdatedKitkats);
            UpdateCustomerInfo(GetCustomerName(), GetCustomerSex(), GetCustomerWeight(), GetCustomerAge(), UpdatedMoneyInAccount, IsLactoseIntolerant());
            
            cout << "\n";
            cout << "Thanks! Your total was: $" << total << ". Your information has been updated!\n";
        }
        else
        {
            cout << "\n";
            cout << "Sorry, we don't have enough candy!\n";
        }
    } 
}



//This function (DisplayDietMenu) is going to display the diet menu for candies.
void DisplayDietMenu() {
    cout << "For you, here is our finest selection of diet candies! Please select the number associated with the candy you want to buy. \n";
    cout << "1. Lollipops ($2 each)\n";
    cout << "2. Butterscotch ($1 each)\n";
    cout << "3. Almondjoys ($1 each)\n";
}

//This function (HandleDietMenuCandyChoice) is going to be called AFTER you call "DisplayDietMenu".
//This function will ask the customer to input their candy choice, and then ask the customer for the amount of candy that they want.
void HandleDietMenuCandyChoice() { //follow what you did for normal. but finish normal first
    //Asking customer what candy they want
    string candy_choice;

    cout << "Which candy would you like (1, 2, 3)?:\n";
    cin >> candy_choice;

    if (candy_choice != "1" && candy_choice != "2" && candy_choice != "3") //|| is or, && is and
    {
        cout << "unhandled input. exiting.\n";
        return;
    }

    //asking customer how many candies they want
    int amount_of_candies;

    cout << "How many would you like?:\n";
    cin >> amount_of_candies;

    // initialize a double variable named "price_of_candy" with a value of -1.0
    double price_of_candy = -1.0;

    if (candy_choice == "1")
    {
        price_of_candy = 2.0;
    }
    else if (candy_choice == "2")
    {
        price_of_candy = 1.0;
    }
    else if (candy_choice == "3")
    {
        price_of_candy = 1.0;
    } 

    //now I am going to check our inventory based off the candy they selected. for example, if they selected lollipops, we need to make sure we have enough snickers to sell the customer
    if (candy_choice == "1")
    {
        // if we're in here, the customer selected they want a Snickers. we're going to check how many snickers are remaining in our inventory.
        int num_lollipops = GetNumLollipops();

        if (num_lollipops > amount_of_candies)
        {
        int UpdatedLollipops = num_lollipops - amount_of_candies;
        int total = price_of_candy * amount_of_candies; 
        double UpdatedMoneyInAccount = GetMoneySpentByCustomer() + total;
            
        UpdateDietInventory(UpdatedLollipops, GetNumButterscotch(), GetNumAlmondJoys());
        UpdateCustomerInfo(GetCustomerName(), GetCustomerSex(), GetCustomerWeight(), GetCustomerAge(), UpdatedMoneyInAccount, IsLactoseIntolerant());

        cout << "\n";
        cout << "Thanks! Your total was: $" << total << ". Your information has been updated!\n";
        }
        else
        {
            cout << "\n";
            cout << "Sorry, we don't have enough candy!\n";
        }

    }
    else if (candy_choice == "2")
    {
        int num_butterscotch = GetNumButterscotch();

        if (num_butterscotch > amount_of_candies)
        {
        int UpdatedButterscotch = num_butterscotch - amount_of_candies;
        int total = price_of_candy * amount_of_candies; 
        double UpdatedMoneyInAccount = GetMoneySpentByCustomer() + total;
            
        UpdateDietInventory(GetNumLollipops(), UpdatedButterscotch, GetNumAlmondJoys());
        UpdateCustomerInfo(GetCustomerName(), GetCustomerSex(), GetCustomerWeight(), GetCustomerAge(), UpdatedMoneyInAccount, IsLactoseIntolerant());

        cout << "\n";
        cout << "Thanks! Your total was: $" << total << ". Your information has been updated!\n";
        }
        else
        {
            cout << "\n";
            cout << "Sorry, we don't have enough candy!\n";
        }
    }
    else if (candy_choice == "3")
    {
        int num_almondjoy = GetNumAlmondJoys();

        if (num_almondjoy > amount_of_candies)
        {
        int UpdatedAlmondJoy = num_almondjoy - amount_of_candies;
        int total = price_of_candy * amount_of_candies; 
        double UpdatedMoneyInAccount = GetMoneySpentByCustomer() + total;
            
        UpdateDietInventory(GetNumLollipops(), GetNumLollipops(), UpdatedAlmondJoy);
        UpdateCustomerInfo(GetCustomerName(), GetCustomerSex(), GetCustomerWeight(), GetCustomerAge(), UpdatedMoneyInAccount, IsLactoseIntolerant());

        cout << "\n";
        cout << "Thanks! Your total was: $" << total << ". Your information has been updated!\n";
        }
        else
        {
            cout << "\n";
            cout << "Sorry, we don't have enough candy!\n";
        }
    } 
}

//Part 6 - Combining everything into a coherent program
void StartCandyManager() {
    //Imagine a customer just walked in! Get there information
    string customer_name;

    cout << "Hello! What is your name?\n";
    cout << "\n";
    getline(cin, customer_name); // cin >> customer_name; //this doesn't print the full name (just first name)
    cout << "\n";

    //Greeting customer with their name
    GreetCustomer(customer_name);

    //Asking if customer is an existing customer
    char answer = 'y';
    AskIfReturningCustomer();
    cin >> answer;
    cout << "\n";

    //Displaying welcome back if returning customer or welcome new customer if they are new and taking in their information
    if (answer == 'y')
    {
    SayWelcomeBack(customer_name);
    cout << "\n";
    }
    else
    {
    WelcomeNewCustomer(customer_name);
    HandleNewCustomerInformation();
    }

    //Display normal menu or diet menu based on how much customer has spent. remember that you have implemented this logic in the ShouldDisplayNormalMenu function.
    //So if should display normal menu is true then display the normal menu and let customer choose their candy and if false then display the diet menu and let them choose their candy
    if (ShouldDisplayNormalMenu() == true)
    {
        DisplayNormalMenu();
        HandleNormalMenuCandyChoice();
    }
    else
    {
        DisplayDietMenu();
        HandleDietMenuCandyChoice();
    } 
        cout << "\n";
        cout << "Thank you for shopping at WorryFree Candee. Come back soon!\n";
}

int main() {
    int RestockKitKats = 20, RestockSnickers = 20, RestockStarBursts = 20;
    RestockNormalInventory(RestockSnickers, RestockStarBursts, RestockKitKats);

    int RestockLollipops = 20, RestockButterscotch = 20, RestockAlmondJoys = 20;
    RestockDietInventory(RestockLollipops, RestockButterscotch, RestockAlmondJoys);

    StartCandyManager();
}
