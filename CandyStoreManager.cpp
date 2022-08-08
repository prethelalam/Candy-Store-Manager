#include <iostream>
#include <string>
#include <fstream>
//#include <vector>

//spaces after are where you input your code


using namespace std;

//PROJECT HAS NOT BEEN COMPLETED YET

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
// For each of these functions, you need to read the corresponding information in the customers.txt file and return it from the function
// For example, you should be able to do this in the main function:
// string name = GetCustomerName();
// And receive the correct customer name from the GetCustomerName function. Rinse and repeat for every function in this part.

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
    return sex; //having issues converting Sex back into a char
}

// Grab the customer's weight in the customer.txt file and return it as a float.
float GetCustomerWeight() {
    fstream customer;
    string Weight;
    float weight; //defining w to be a float to be used later
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
// it is directly proportional to the amount of bytes required for each data type.
// Create a variable called "byteMultiplier" as a double and set its value to 2.5. Then, use the previous functions (GetCustomerName, GetCustomerSex, etc)
// to grab all the information stored in the file. Store these values in variables inside the GetCostOfStorage function.
// Then, using your knowledge of data types OR pre-written C++ functions (Google 'sizeof') to get the number of bytes it takes to store all of these
// variables. Then finally, compute the "cost of storage" by computing the expression: <total number of bytes> * <byte multiplier> and return it.
// HINT: the hardest part about this will be the string. if you can't figure it out, come to me for help.
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
        cout << "Customer information has been updated.\n";
        cout << "\n";
        StoreCustomerInfo(Name, Sex, Weight, Age, Money, IsLactoseIntolerant);
    }
    else
    {
        cout << "\n";
        cout << "Customer information will not be updated:\n";
        cout << "\n";
    }
    return;
}
/* ------------------------------------------- */

/* Part 4a - Updating your inventory */

// As a candy store, you also need to manage your inventory of candy. You have two types of candy: normal and diet
// Consequently, you'll manage two different inventories: a normal inventory (for all the normal candies) and a diet
// inventory (for all the diet candies).
// Luckily, each inventory only has 3 types of candy
// For the normal inventory, you have: KitKats, Snickers, and Starburst
// For the diet inventory, you have: Lollipops, Butterscotch, and AlmondJoys

// You'll create two other text files, "normal_inventory.txt" and "diet_inventory.txt" to represent these inventories.

// Your inventory will be updated whenever the customer places an order. That'll be done in subsequent steps.

// Create two text files, normal_inventory.txt and diet_inventory.txt.
// For the normal inventory, you have: KitKats, Snickers, and Starburst
// For the diet inventory, you have: Lollipops, Butterscotch, and AlmondJoys
// Each inventory starts out with 20 candies of each (so 20 kitkats, 20 snickers and 20 starbusts for normal inventory
// and 20 lollipops, 20 butterscotch, and 20 almondjoys for diet). I'm choosing to leave how you want the file to be
// formatted up to you. I'd recommend taking some inspiration from your customer.txt file - and you'll want to store integers of course.

// TODO: please edit the files to only have the integer quantities of each candy written on a line
// For example, let's say you have 12 KitKats, 13 Snickers, and 14 Starbursts. Your file should look like this EXACTLY:
// File start (this should not be in the file, only including this to make things clear):
// 12
// 13
// 14
// File end (this should not be in the file, only including this to make things clear)
// To generalize, the normal_inventory.txt file should look like this:

// File start (this should not be in the file, only including this to make things clear):
// <kit kats amount>
// <snickers amount>
// <starbursts amount>
// File end (this should not be in the file, only including this to make things clear):

// PLEASE CHANGE THIS!!
void CreateNormalInventory (int Kitkats, int Snickers, int StarBursts) {
    fstream Normal;
    Normal.open("Normal_Inventory.txt", ios::out);
    if (Normal.is_open())
    {
        Normal << Kitkats << endl;
        Normal << Snickers << endl;
        Normal << StarBursts << endl;
    }
    Normal.close();
    return;
}

// TODO: please edit the files to only have the integer quantities of each candy written on a line
// For example, let's say you have 12 lollipops, 13 butterscotch, and 14 almondjoys. Your file should look like this EXACTLY:
// File start (this should not be in the file, only including this to make things clear):
// 12
// 13
// 14
// File end (this should not be in the file, only including this to make things clear)
// To generalize, the diet_inventory.txt file should look like this:

// File start (this should not be in the file, only including this to make things clear):
// <lollipops amount>
// <butterscotch amount>
// <almondjoy amount>
// File end (this should not be in the file, only including this to make things clear):

// PLEASE CHANGE THIS!!
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

// Reset all the quantities of candies back in the NORMAL inventory back to 20
void RestockNormalInventory(int RestockKitKats, int RestockSnickers, int RestockStarBursts) {
    int KitKats = 12, Snickers = 13, StarBursts = 14;
    if (KitKats <= 5)
    {
        if (Snickers <= 5)
        {
            if (StarBursts <= 5)
            {
        cout << "\n";
        cout << "Normal inventory has been restocked.\n";
        CreateNormalInventory(RestockKitKats, RestockSnickers, RestockStarBursts);
        cout << "\n";
    }
        }
    }
    else
    {
        cout << "Normal Inventory will not be restocked\n";
        cout << "\n";
    }
    return;
}

// Reset all the quantities of candies back in the DIET inventory back to 20
void RestockDietInventory(int RestockLollipops, int RestockButterscotch, int RestockAlmondJoys) {
    int Lollipops = 12, Butterscotch = 13, AlmondJoys = 14;
    if (Lollipops <= 5)
    {
        if (Butterscotch <= 5)
        {
            if (AlmondJoys <= 5)
            {
        cout << "\n";
        cout << "Diet inventory has been restocked.\n";
        CreateNormalInventory(RestockLollipops, RestockButterscotch, RestockAlmondJoys);
        cout << "\n";
    }
        }
    }
    else
    {
        cout << "Diet Inventory will not be restocked\n";
        cout << "\n";
    }
    return;
}

// Update the quantities of the candies in the Normal inventory.
//this is used when a customer buys some candy. so if a customer buys 5 snickers. then that means inventory will have 5 few snickers (15), so you have to update it with the new quanities for it to be 15.
// HINT: You'll have to add parameters.
void UpdateNormalInventory(int UpdateAMTKitKats, int UpdateAMTSnickers, int UpdateAMTStarBursts) { //update
    cout << "Would you like to update your normal inventory? If yes, enter y. If no, enter n.\n";
    char option;
    cin >> option;
    if (option == 'y'){ //i think i need a if statment to check wheather the inventory is less than 20 or not
        cout << "\n";
        cout << "Normal inventory has been updated.\n";
        CreateNormalInventory(UpdateAMTKitKats, UpdateAMTSnickers, UpdateAMTStarBursts);
        cout << "\n";
    }
    else{
        cout << "\n";
        cout << "Normal Inventory will not be updated\n";
        cout << "\n";
    }
    return;
}

// Update the quantities of the candies in the Diet inventory.
// HINT: You'll have to add parameters.
void UpdateDietInventory(int UpdateAMTLollipops, int UpdateAMTButterscotch, int UpdateAMTAlmondJoys) { //update
    cout << "Would you like to update your Diet inventory? If yes, enter y. If no, enter n.\n";
    char option;
    cin >> option;
    if (option == 'y'){ //i think i need a if statment to check wheather the inventory is less than 20 or not
        cout << "\n";
        cout << "Diet inventory has been updated.\n";
        CreateNormalInventory(UpdateAMTLollipops, UpdateAMTButterscotch, UpdateAMTAlmondJoys);
        cout << "\n";
    }
    else
    {
        cout << "\n";
        cout << "Diet Inventory will not be updated\n";
        cout << "\n";
    }
    return;
}
/* ------------------------------------------- */


/* Part 4b - Getting quantities from your inventory */

// Now that you have a dedicated normal inventory and a dedicated diet inventory, it's time to get that information from the inventory
// This part will be similar to how you got the customer's info from the customer.txt file. Essentially, you'll just be writing functions that
// get the quantities from either the normal inventory or the diet inventory

// In this function GetNumSnickers, get the number of snickers you have left in your normal inventory, and return the amount as an integer
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

// In this function GetNumKitkats, get the number of kitkats you have left in your normal inventory, and return the amount as an integer
int GetNumKitkats() {
    fstream Normal;
    string KitKats;
    int kitkats;
    Normal.open("Normal_Inventory.txt", ios::in);
    if (Normal.is_open())
    {
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

// In this function GetNumStarbursts, get the number of starbursts you have left in your normal inventory, and return the amount as an integer
int GetNumStarbursts() {
    fstream Normal;
    string Starbursts;
    int starbursts;
    Normal.open("Normal_Inventory.txt", ios::in);
    if (Normal.is_open())
    {
        getline(Normal, Starbursts);
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

// In this function GetNumLollipops, get the number of lollipops you have left in your diet inventory, and return the amount as an integer
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

// In this function GetNumButterscotch, get the number of butterscotch you have left in your diet inventory, and return the amount as an integer
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

// In this function GetNumAlmondJoys, get the number of almond joys you have left in your diet inventory, and return the amount as an integer
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

/* ------------------------------------------- */


/* Part 5 - Putting it all together. Displaying and taking in the customer's order */

// First, let's add some context to the project. I'm going to describe the project prompt below:

// Imagine you're now the owner of a hypothetical new candy shop, WorryFree Candee. The unique thing about your candy store is that you're very caring
// about your customers' health. You want your customers to keep coming back to your shop to buy your candy without worrying about their health, hence the
// name of the shop, "WorryFree" Candee. You keep your customers worry-free by keeping track of their visits to the candy shop - specifically, you keep track
// of their name, sex, weight, age, whether or not they're lactose intolerant, and *most importantly*, you keep track of how much money that the customer
// has spent so far in your candy shop.

// By keeping track of the amount that a customer has spent, you can keep the customer worry-free by offering a
// normal menu of candy if they HAVEN'T spent a lot of money, or a diet menu of candy if HAVE spent a lot of money. normal menu = spent less than $25 and diet menu = spent more than $25

// Your normal menu of candy has three items: Snickers ($5 each), Starburst ($3 each), and KitKats ($4 each).
// Your diet menu of candy has three items as well: lollipops ($2 each), butterscotch ($1 each), and almondjoys ($1 each).

// Now, as the owner of the store, you also have to keep track of the inventory of each of these candies since you only have a limited stock of each
// candy. As customers come in and order candy, you have to keep track of the changes in your inventory. Obviously, a customer shouldn't be able to order
// more candy than you currently have at the time, so you ALSO need to make sure that you have enough stock to fulfill a customer's order.

// And that's pretty much it for the prompt.

// In parts 1-3, you implemented storing the customer information - when someone "walks" in to your shop to place an order, you can either store their info
// (using StoreCustomerInfo), or you can read their information (using all your GetCustomerName, GetCustomerSex, etc functions), or you can
// update the customer's information (using UpdateCustomerInfo).

// In part 4a and 4b, you implement the inventory system. You can create an inventory, restock an inventory, and finally, you can update an inventory.
// You can also get all of the amounts of each candy (which you implemented in 4b)

// Now for Part 5, we're going to start displaying prompts and menus to simulate a customer walking in and ordering something off the menu.
// The prompts and menus that you will implement in this part will range from greeting the customer, to taking in the customers order, to refusing a customer's
// order if you don't have enough inventory for their order.

// I have created functions below (and I have edited the previous functions to add more clarity). Each of the functions that I have created below
// have descriptions of what each function should do. Please do not edit these descriptions! They will provide you with useful information.
// Furthermore, these functions should be implemented IN ORDER.


// This function (GreetCustomer) should ONLY print out (display to terminal) the following message:
// "Hello <customer name>! Welcome to WorryFree Candee!"
// This function should do NOTHING else except print that message out.
void GreetCustomer(string customer_name) {
    // print out the prompt below this line
    cout << "Hello " << customer_name << "! Welcome to WorryFree Candy!\n";
}

// This function (AskIfReturningCustomer) should ONLY print out the following message: "Are you a returning customer? (y/n)"
// DO NOT DO ANY INPUT HANDLING IN THIS FUNCTION. YOUR INPUT HANDLING SHOLD BE DONE IN MAIN.
// This function should do NOTHING else except print that message out.
void AskIfReturningCustomer() {
    // print out the prompt below this line
    cout << "Are you a returning customer? (y/n)\n";
}

// This function (SayWelcomeBack) should ONLY print out the following message: "Welcome back <customer name>! Based on our records, here is the menu
// that we've chosen for you..."
// DO NOT DO ANY INPUT HANDLING IN THIS FUNCTION. YOUR INPUT HANDLING SHOLD BE DONE IN MAIN.
// This function should do NOTHING else except print that message out.
void SayWelcomeBack(string customer_name) {
    // print out the prompt below this line
    cout << "Welcome back " << customer_name << "! Based on our records, here is the menu that we've chosen for you...\n";
}

// This function (WelcomeNewCustomer) should ONLY print out the following message: "Well, welcome to WorryFree Candy <customer_name>! We're looking
// forward to working with you! First, let's get some information about you before we move on..."
// DO NOT DO ANY INPUT HANDLING IN THIS FUNCTION. YOUR INPUT HANDLING SHOLD BE DONE IN MAIN.
void WelcomeNewCustomer (string customer_name) {
    // print out the prompt below this line
    cout << "Well, welcome to WorryFree Candy " << customer_name << "! We're looking forware to working with you! First, let's get some information about you before we move on...\n";
}

// This function (HandleNewCustomerForInformation) is going to ask the customer about the name, sex, weight, age, and whether or not they're lactose intolerant.
// You would only ask this information to a customer IF they're a NEW customer (otherwise, you'd already have the customer's information stored
// in your text file).
// You are going to prompt the following in ORDER:
// Ask for the customer's full name using the following prompt EXACTLY: "What is your full name?: "
// Ask for the customer's sex using the following prompt EXACTLY: "What do you identify as? (M, F, O)?: "
// Ask for the customer's weight in pounds, rounded to the nearest tenth if necessary, using the following prompt: "What is your weight? Please make sure to
// round to the nearest tenth: "
// Ask for the customer's age using the following prompt EXACTLY: "What is your age (in years?): "
// Ask if the customer is lactose intolerant using the following prompt EXACTLY: "Are you lactose intolerant? (y/n): "
// YOU ***SHOULD*** HANDLE INPUT INSIDE THIS FUNCTION.
// At the very end of the function, you will call StoreCustomerInfo with the new information and present
// the customer with a success message.
// The success message should read exactly as follows: "Thank you for joining WorryFree Candee! We have recorded your information."

void HandleNewCustomerInformation() {
    // Prompt the customer for their full name below this line. Store the customer's input in a variable named "customer_name"
    string customer_name;
    cout << "What is your full name?:\n";
    //cin >> customer_name;
    getline(cin, customer_name);
    cout << "customers name is " << customer_name << endl;
    cout << "\n"; // added for formatting 

    // Prompt the customer for their sex below this line. Store the customer's input in a variable named "customer_sex"
    char customer_sex;
    cout << "What do you identify as? (M, F, O)?:\n";
    cin >> customer_sex;
    cout << "customer sex is " << customer_sex << endl;
    cout << "\n"; // added for formatting
    
    // Prompt the customer for their weight below this line. Store the customer's input in a variable named "customer_weight"
    float customer_weight;
    cout << "What is your weight? Please make sure to round to the nearest tenth: \n";
    cin >> customer_weight;
    cout << "\n"; // added for formatting

    // Prompt the customer for their age below this line. Store the customer's input in a variable named "customer_age"
    int customer_age;
    cout << "What is your age (in years?): \n";
    cin >> customer_age;
    cout << "\n"; // added for formatting

    // Initialize a boolean variable named "is_lactose_intolerant" with the value of false
    bool is_lactose_intolerant = false;

    // Ask the customer if they are lactose intolerant using the prompt described above. If the customer answers "y", assign the "is_lactose_intolerant"
    // variable a value of true. Otherwise, assign the "is_lactose_intolerant" variable a value of false.
    char decision; //stuggling with this too (here to 661)
    cout << "Are you lactose intolerant? (y/n):\n";
    cin >> decision;
    cout << "\n"; // added for formatting
    if (decision == 'y')
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        } 

    // Initialize a double variable named "money_spent_by_customer" with a value of 0.0 . This is to represent that the customer has not spent any money
    // on candy yet, since they are a new customer.
    double money_spent_by_customer = 0.0;
    // Finally, call StoreCustomerInfo below this line with all the variables you created in the lines above.
    StoreCustomerInfo(customer_name, customer_sex, customer_weight, customer_age, money_spent_by_customer, is_lactose_intolerant);
    // Print out to the customer the sucess message described above. print it out below this line.
    cout << "Thank you for joining WorryFree Candy! We have recorded your information.\n";
}

// This function (ShouldDisplayNormalMenu) is going to be used by YOU (the programmer) to decide whether you should display the normal menu or the
// diet menu. It will NOT do any PRINTING, but it will RETURN a value.
// The function will return a boolean value. Booleans can only be two values: true or false.
// This function will check the amount of money that the customer has spent so far on candy by using your GetMoneySpentByCustomer function.
// If the customer has spent LESS THAN $25 on candy, you should return true. Otherwise, you should return false.
bool ShouldDisplayNormalMenu() {
    // initialize a double variable called "money_spent_by_customer" with the value of a call to GetMoneySpentByCustomer
    double money_spent_by_customer = GetMoneySpentByCustomer();
    // write an if statement that checks if "money_spent_by_customer" is less than 25. If it is less than 25, return true. Otherwise, return false.
    if (money_spent_by_customer < 25)
    {
        cout << "True"; //is this what you meant by it. after this is it supposed to display the normal menu? Im thinking no?
    }
    else
    {
        cout << "False"; //is this what you meant by it. after this is it supposed to display the diet menu? Im thinking no?
    }
    return money_spent_by_customer; //false; // <- YOU NEED TO CHANGE THIS TO RETURN TRUE OR FALSE BASED ON THE CUSTOMER AMOUNT!!!
}

// This function (DisplayNormalMenu) is going to display the normal menu for candies. There are 3 items on the normal menu:
// Snickers ($5 each), Starburst ($3 each), and KitKats ($4 each)
// You're going to display the menu EXACTLY as follows.
// First, print out: "For you, here is our finest selection of normal candies! Please select the number associated with the candy you want to buy. "
// Then print out: "1. Snickers ($5 each)"
// Then print out: "2. Starburst ($3 each)"
// Then print out: "3. KitKats ($4 each)"
// YOU ARE **NOT** GOING TO HANDLE ANY INPUT IN THIS FUNCTION. THE INPUT HANDLING WILL BE DONE IN THE "HandleNormalMenuCandyChoice" FUNCTION
void DisplayNormalMenu() {
    // print out the initial prompt
    cout << "For you, here is our finest selection of normal candies! Please select the number associated with the candy you want to buy. \n";

    // print out the snickers prompt
    cout << "1. Snickers ($5 each)\n";

    // print out the starburst prompt
    cout << "2. Starburst ($3 each)\n";

    // print out the kitkats prompt
    cout << "3. KitKats ($4 each)\n";
}

/// This function (HandleNormalMenuCandyChoice) is going to be called AFTER you call "DisplayNormalMenu".
// This function will ask the customer to input their candy choice, and then ask the customer for the amount of candy that they want.
// Based off the prices described for the normal menu candies and the candy choice that the customer selected, you'll be able to determine
// how much money the customer spent.
// For example, the customer inputs "1". 1 is associated with snickers on the normal menu, and snickers cost $5 each. Then you'll ask the customer how many candies they want. Let's say they want 3 candies. So you now know that they will spend $15 on candy. Then, you'll update the customer info (using your UpdateCustomerInfo function) with the new money they spent on candies.
// You'll also update your inventory to have 3 less snickers
// First, you'll prompt the customer for which candy they want EXACTLY as follows: "Which candy would you like (1, 2, 3)?: "
// Then, you'll prompt the customer for how many candies they want EXACTLY as follows: "How many would you like?: "
// Then, you'll check your inventory to make sure you have enough of the candy that they want
// If you don't have enough candy, then you'll prompt: "Sorry, we don't have enough candy!"
// Otherwise if you DO have enough candy, then you'll calculate how much the cost will be by using the (price per candy) * (amount of candies)
// Finally, you'll prompt to the customer: "Thanks! Your total was: <total>. Your information has been updated!"

void HandleNormalMenuCandyChoice() {
    // prompt the customer for which candy they want and store their answer in a string variable named "candy_choice"
    string candy_choice = "Which candy would you like (1, 2, 3)?:\n";// not sure what you mean by string candy_choice = "CHANGE THIS!!!"; is this what you meant?
    cout << candy_choice;
    cin >> candy_choice;

    // prompt the customer for the amount of candies that they want, and store their answer in an integer variable named "amount_of_candies"
    int amount_of_candies;
    cout << "How many would you like?:\n";
    cin >> amount_of_candies;

    // initialize a double variable named "price_of_candy" with a value of -1.0
    double price_of_candy = -1.0;

    // i've written this if statement for you that checks their candy choice. you'll write the corresponding code for each of these if statements
    if (candy_choice == "1")
    {
        // if we're in here, the customer selected they want a Snickers. assign "price_of_candy" a value of 5.0. do this below this comment
        price_of_candy = 5.0;
    }
    else if (candy_choice == "2")
    {
        // if we're in here, the customer selected they want a Starburst. assign "price_of_candy" a value of 3.0. do this below this comment
        price_of_candy = 3.0;
    }
    else if (candy_choice == "3")
    {
        // if we're in here, the customer selected they want a KitKat. assign "price_of_candy" a value of 4.0. do this below this comment
        price_of_candy = 4.0;

    } else { //shouldnt this else statement be right after line 721, after they select their candy choice?)

        // if we're in here, the customer input something that wasn't a 1, a 2, or a 3. we're not going to handle this, so we're just going to exit.
        cout << "unhandled input. exiting.\n";
        return;
    }

    // now we're going to check our inventory based off the candy they selected. for example, if they selected snickers, we need to make sure we
    // have enough snickers to sell the customer
    if (candy_choice == "1")
    {
        // if we're in here, the customer selected they want a Snickers. we're going to check how many snickers are remaining in our inventory.
        int num_snickers_in_inventory = GetNumSnickers();

        // now, if the number of snickers in the inventory is less than the "amount_of_candies", then you need to print
        // "Sorry, we don't have enough candy!"
        // otherwise, calculate the cost of the order, update the customers info with the new money spent on candy by taking what they previously spent
        // and add the cost of the current order, and then update the inventory.

        //so am i supposed to be adding stuff here?
        if (num_snickers_in_inventory > amount_of_candies)
        {
            int total = price_of_candy * amount_of_candies; //also shouldnt i have this = to something?
        }
        else
        {
            cout << "Sorry, we don't have enough candy!\n";
        }

    }
    else if (candy_choice == "2")
    {
        // if we're in here, the customer selected they want a Starburst. assign "price_of_candy" a value of 3.0. so this is calculating the cost of order
        price_of_candy = 3.0;

        // do the same thing as you did in snickers, but with starburst. so the comments from 614 -617. apply the same way but with starbursts
        
        // confused cause i think the lines numbers are diff. not sure what you want me to do here tbh
    }
    else if (candy_choice == "3")
    {
        // if we're in here, the customer selected they want a KitKat. assign "price_of_candy" a value of 4.0. do this below this comment
        // do the same thing as you did in snickers, but with kitkats.

        price_of_candy = 4.0;

        // confused cause i think the lines numbers are diff. not sure what you want me to do here tbh

    } else {

        // if we're in here, the customer input something that wasn't a 1, a 2, or a 3. we're not going to handle this, so we're just going to exit.
        cout << "unhandled input. exiting.\n";
        return;
    }
}
//from 730 - 801 im kinda confused as to whats going on



// This function (DisplayDietMenu) is going to display the diet menu for candies. There are 3 items on the diet menu:
// Lollipops ($2 each), Butterscotch ($1 each), and Almondjoys ($1 each)
// You're going to display the menu EXACTLY as follows.
// First, print out: "For you, here is our finest selection of diet candies! Please select the number associated with the candy you want to buy. "
// Then print out: "1. Lollipops ($2 each)"
// Then print out: "2. Butterscotch ($1 each)"
// Then print out: "3. Almondjoys ($1 each)"
// YOU ARE **NOT** GOING TO HANDLE ANY INPUT IN THIS FUNCTION. THE INPUT HANDLING WILL BE DONE IN THE "HandleDietMenuCandyChoice" FUNCTION
void DisplayDietMenu() {
    // print out the initial prompt

    // print out the Lollipops prompt

    // print out the Butterscotch prompt

    // print out the Almondjoys prompt
}

/// This function (HandleDietMenuCandyChoice) is going to be called AFTER you call "DisplayDietMenu".
// This function will ask the customer to input their candy choice, and then ask the customer for the amount of candy that they want.
// Based off the prices described for the diet menu candies and the candy choice that the customer selected, you'll be able to determine
// how much money the customer spent.
// For example, the customer inputs "1". 1 is associated with lollipops on the diet menu, and lollipops cost $2 each. Then you'll ask the customer how many candies they want. Let's say they want 3 candies. So you now know that they will spend $6 on candy. Then, you'll update the customer info (using your UpdateCustomerInfo function) with the new money they spent on candies.
// You'll also update your inventory to have 3 less lollipops
// First, you'll prompt the customer for which candy they want EXACTLY as follows: "Which candy would you like (1, 2, 3)?: "
// Then, you'll prompt the customer for how many candies they want EXACTLY as follows: "How many would you like?: "
// Then, you'll check your inventory to make sure you have enough of the candy that they want
// If you don't have enough candy, then you'll prompt: "Sorry, we don't have enough candy!"
// Otherwise if you DO have enough candy, then you'll calculate how much the cost will be by using the (price per candy) * (amount of candies)
// Finally, you'll prompt to the customer: "Thanks! Your total was: <total>. Your information has been updated!"
void HandleDietMenuCandyChoice() {
    // prompt the customer for which candy they want and store their answer in a string variable named "candy_choice"
    string candy_choice = "CHANGE THIS!!!";

    // prompt the customer for the amount of candies that they want, and store their answer in an integer variable named "amount_of_candies"

    // initialize a double variable named "price_of_candy" with a value of -1.0

    // i've written this if statement for you that checks their candy choice. you'll write the corresponding code for each of these if statements
    if (candy_choice == "1")
    {
        // if we're in here, the customer selected they want lollipops. assign "price_of_candy" a value of 2.0. do this below this comment
    }
    else if (candy_choice == "2")
    {
        // if we're in here, the customer selected they want a butterscotch. assign "price_of_candy" a value of 1.0. do this below this comment
    }
    else if (candy_choice == "3")
    {
        // if we're in here, the customer selected they want a almondjoys. assign "price_of_candy" a value of 1.0. do this below this comment

    } else {

        // if we're in here, the customer input something that wasn't a 1, a 2, or a 3. we're not going to handle this, so we're just going to exit.
        cout << "unhandled input. exiting.\n";
        return;
    }

    // now we're going to check our inventory based off the candy they selected. for example, if they selected lollipops, we need to make sure we
    // have enough snickers to sell the customer
    if (candy_choice == "1")
    {
        // if we're in here, the customer selected they want a Snickers. we're going to check how many snickers are remaining in our inventory.
        int num_lollipops = GetNumLollipops();

        // now, if the number of lollipops in the inventory is less than the "amount_of_candies" (which is the number of candies that the customer wants), then you need to print
        // "Sorry, we don't have enough candy!"
        // otherwise, calculate the cost of the order, update the customers info with the new money spent on candy by taking what they previously spent
        // and add the cost of the current order, and then update the inventory.

    }
    else if (candy_choice == "2")
    {
        // if we're in here, the customer selected they want a Starburst. assign "price_of_candy" a value of 3.0.

        // do the same thing as you did in snickers, but with starburst
    }
    else if (candy_choice == "3")
    {
        // if we're in here, the customer selected they want a KitKat. assign "price_of_candy" a value of 4.0. do this below this comment
        // do the same thing as you did in snickers, but with kitkats.

    } else {

        // if we're in here, the customer input something that wasn't a 1, a 2, or a 3. we're not going to handle this, so we're just going to exit.
        cout << "unhandled input. exiting.\n";
        return;
    }
}


/* Part 6 - The easy part - Combining everything into a coherent program
 * Alright, so now you've implemented all the functionality of everything the program, from displaying messages
 * to storing and updating data. Now it's time to put it into one big program. We're going to create a single function
 * called StartCandyManager and put everything together in there. Then we'll call that function in main
*/
void StartCandyManager() {
    // Imagine a customer just walked in! Go ahead any use ask them for their name (using cout), and store their input into a string
    // variable named "customer_name"
    string customer_name;
    cout << "Hello! What is your name?\n";
    cin >> customer_name; //this doesn't print the full name

    // Now that we have the customer's name, let's go ahead and greet them by using our GreetCustomer function.
    GreetCustomer(customer_name);

    // Now, let's go ahead and ask if they're a returning customer using our AskIfReturningCustomer function. Make sure
    // to get the customer's input here.
    char answer = 'y';
    AskIfReturningCustomer();
    cin >> answer;
    cout << "\n";

    if (answer == 'y')
    {
    SayWelcomeBack(customer_name);
    }
    else
    {
    WelcomeNewCustomer(customer_name);
    HandleNewCustomerInformation();
    }
    
    // Now that we know whether they are a returning customer or not, we have display the correct respective message
    // if they are a returning customer, then say welcome back using our SayWelcomeBack function
    // otherwise, if they are a new customer, then welcome a new customer using our WelcomeNewCustomer function AND also
    // call our HandleNewCustomerInformation function to record their information for the first time
    
    // Now we want to display either the normal menu or the diet menu, based on the amount the customer has spent so
    // far. Luckily, we've already implemented this logic in the ShouldDisplayNormalMenu function. Use the
    // ShouldDisplayNormalMenu function in an if statement - if ShouldDisplayNormalMenu returns true, then lets
    // display the normal menu using the DisplayNormalMenu function and then handle the input using the 
    // HandleNormalMenuCandyChoice function. Otherwise, if ShouldDisplayNormalMenu returns false, then lets
    // display the diet menu using the DisplayDietMenu function and then handle the input using the 
    // HandleDietMenuCandyChoice function
    
    
    // After all that is done, say thank you to the customer!
}

int main() {
    /*
    //Part 1
    StoreCustomerInfo("Prethel Alam", 'M', 153.23, 23, 100.23, false);

    //Part 3
    UpdateCustomerInfo("Zeus Alam", 'M', 20.57, 3, 89.43, true);

    //Part 2
    string name = GetCustomerName();
    // so here youre calling the function GetCustomerName. then this jumps to line 44 and does all that good stuff. then on line 48, youre checking to see that the file is open, then it reads the 3 line down on the text file. then other good stuff happens. so the name on the text file will be stored in Name. then it reads line 58 which is return Name (which is storing the name in the text file). what happens next is the program jumps back to line 391, where GetCustomerName function is called. it basically substitues that function call with the value of Name (which is the name in the text file). then that value is stored in a variable called name (lowercased... keep that in mind). then on line 392, you are printing that name variable (which is now stored with the name from the text file)
    cout << "The customers name is " << name << endl;


    char sex = GetCustomerSex();
    cout << "The customers sex is " << sex << endl;

    float weight = GetCustomerWeight();
    cout << "The customers weight is " << weight << endl;

    int age = GetCustomerAge();
    cout << "The customers age is " << age << endl;

    double money = GetMoneySpentByCustomer();
    cout << "The customer has spent $" << money << endl;

    bool lactoseIntolerant = IsLactoseIntolerant();
    cout << "The customer is lactose intolerant " << endl;

    if (lactoseIntolerant == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    GetCostOfStorage();
    */

//Part 4a
    int Lollipops = 12, Butterscotch = 13, AlmondJoys = 14;
    CreateDietInventory(Lollipops, Butterscotch, AlmondJoys);

    int KitKats = 12, Snickers = 13, StarBursts = 14;
    CreateNormalInventory(KitKats, Snickers, StarBursts);

    int RestockKitKats = 20, RestockSnickers = 20, RestockStarBursts = 20;
    RestockNormalInventory(RestockKitKats, RestockSnickers, RestockStarBursts);

    int RestockLollipops = 20, RestockButterscotch = 20, RestockAlmondJoys = 20;
    RestockDietInventory(RestockLollipops, RestockButterscotch, RestockStarBursts);

    //int UpdateAMTKitKats = 30, UpdateAMTSnickers = 30, UpdateAMTStarBursts = 30;
    //UpdateNormalInventory(UpdateAMTKitKats, UpdateAMTSnickers, UpdateAMTStarBursts);

    //int UpdateAMTLollipops = 30, UpdateAMTButterscotch = 30, UpdateAMTAlmondJoys = 30;
    //UpdateDietInventory(UpdateAMTLollipops, UpdateAMTButterscotch, UpdateAMTAlmondJoys);

   /* //Part 4b
    int snickers = GetNumSnickers();
    cout << "Normal inventory has " << snickers << " snickers.\n";

    int kitkats = GetNumKitkats();
    cout << "Normal inventory has " << kitkats << " snickers.\n";

    int starbursts = GetNumStarbursts();
    cout << "Normal inventory has " << starbursts << " snickers.\n";
    cout << "\n";

    int lollipops = GetNumLollipops();
    cout << "Diet inventory has " << lollipops << " snickers.\n";
    
    int butterscotch = GetNumButterscotch();
    cout << "Diet inventory has " << butterscotch << " snickers.\n";

    int almondjoys = GetNumAlmondJoys();
    cout << "Diet inventory has " << almondjoys << " snickers.\n";
    cout << "\n";

    //Part 5
    string customer_name = name;
    GreetCustomer(customer_name); 

    char answer = 'y';
    AskIfReturningCustomer();
    cin >> answer;
    cout << "\n";

    if (answer == 'y')
    {
    SayWelcomeBack(customer_name);
    }
    else
    {
    WelcomeNewCustomer(customer_name); 
    //HandleNewCustomerInformation();
    //}
    
    //ShouldDisplayNormalMenu();

    //DisplayNormalMenu();

    //HandleNormalMenuCandyChoice();

    //Part 6
    StartCandyManager();
    */

}















/* this is your old code -- i kept it in a comment, but i believe it's not going to be as helpful now that i've updated the instructions

// In DisplayMenuForCustomer, we're going to display either a normal menu or a diet menu based on how much the customer has spent so far
// on candy. If the customer has spent less than $25 dollars on candy, display the normal menu. Otherwise, display the diet menu.
// You can choose whichever function you want to implement first: If you want to implement the "DisplayNormalMenu" functions before this "DisplayMenuForCustomer"
// function, all good!
// Then, you're going to ask what candy the customer chooses and how many of the candy they want. Then, you're going to update the "MoneySpentOnCandies"
// field -- use the UpdateCustomerInfo function!
// Hello! Welcome to WorryFree Candee! The CandyShop where you don't have to worry about how much you're eating candy because we'll handle that for you!
void DisplayNormalMenu() {
    int Spent;
        cin >> Spent;
    if (Spent <=25)
    {
        cout << "\n";
        cout << "Since you would like to spend less than $25. Here is the Normal Menu is below: \n";
        cout << "\n";
        cout << "1. Sour patch kids - $7\n";
        cout << "2. Sour skittles - $8\n";
        cout << "3. Sour patch straws - $9\n";
        cout << "\n";
    }
    return;
}

void DisplayDietMenu() {
    int Spent;
    if (Spent >= 25)
    {
    cout << "Since you would like to spend more than $25. Here is the Diet Menu below:\n";
    cout << "\n";
    cout << "4. King sized Cookies and Cream Hershey - $10\n";
    cout << "5. Buncha Crunch - $11\n";
    cout << "6. King sized gummy bears- $12\n";
    cout << "\n";
    }
    return;
}

void DisplayMenuForCustomer() {

    return;
    }


void TakeCustomerOrder() {
    int Spent;
    int option;
    char n;
    fstream order;
    if (Spent <= 25)
    {
        cout << "\n";
        cout << "Please select the corresponding number of the candy you would like to buy.\n";
        cin >> option;
        if (option == 1)
        {
            cout << "You have chosen to purchase Sour Patch Kids. What else would you like to purchase?\n";
        order.open("order.txt", ios::out);
        if (order.is_open()){
            order << "Your order is stated below:\n";
            order << "\n";
            order << "Sour Patch Kids\n";
            order.close();
            cin >> option;
        }

        }

        if (option == 2) //can't select this option first, if i do then i can't select option 1
        {
            cout << "You have chosen to purchase Sour Skittles. What else would you like to purchase?";
            order.open("order.txt", ios::out);
        if (order.is_open()){
            order << "Your order is stated below:\n";
            order << "\n";
            order << "Sour Patch Kids\n";
            order << "Sour Skittles\n";
            order.close();
        }


    if (Spent >= 25)
    {
        cout << "\n";

    }
    return;
    }
    }
}

*/


// **--**

/* ------------------------------------------- */