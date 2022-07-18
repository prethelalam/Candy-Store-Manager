#include <iostream>
#include <string>

using namespace std;

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

// 2) Edit the "StoreCustomerInfo" function to "take in" the information from the customer.
//      (HINT 1) Try to see what's different between the GiveMeMultipleThings function and StoreCustomerInfo

// 3) In the StoreCustomerInfo function, write the customer information to a file called "customers.txt".
// The "customers.txt" file should be in the same directory as your cpp code.

// 4) Verify that your code "overwrites" itself in the "customers.txt" file - by this I mean if you call the
// StoreCustomerInfo with information about the customer, then call it again with DIFFERENT information about the
// customer, the different information should overwrite the old information

// 5) Push your changes to Github!

// StoreCustomerInfo should take in the customer's information (Name, Sex, Weight, Age, Money spent so far for candies,
// IsLactoseIntolerant) and write it to a file named "customer.txt" with each field being on a new line.
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
void StoreCustomerInfo(string Name, int Age, string address) {
    cout << "Inside Store Customer Info.\n";
    return;
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

void Add7ToAge (int age)
{
    cout << "My current age is " << age << ". My current age plus 7 is" << age + 7 << endl;
} // this is how to pass in information. 

void Add7ToAge () 
{
    cout << "hello cats"; 
}

void Add2Numbers (int number1, int number2) // so here in order to have mutiple parameters, you need multiple data types. so one data type per parameter
{
    cout << number1 + number2 << endl;
}

void Add2Numbers (double number1, int number2)
{
    cout << "i am in add2numbers 2: " << number1 + number2 << endl;
}

void GiveMeNameAndAge (string name, int value)
{
    cout << "Name is: " << name << " Age is: " << value << endl;
}

void GiveMeNameAndAge (int value, string name)
{
    cout << "pt 2 age is: " << value << " name is: " << name << endl;
}

/*

Every function should have a return type, a function name, and parameters (every thing inside paranthesis in each function). return type is the void in the beginning of the function 

<return type> <Function Name> (parameters) {
    <Your code goes inside these curly braces>
}

The return type doesn't necessarily have to be "void". It can be any data type (int, char, string, bool, float, etc)

*/

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
    return "";
}

char GetCustomerSex() {
    return ' ';
}

float GetCustomerWeight() {
    return 0.0;
}

int GetCustomerAge() {
    return 0;
}

double GetMoneySpentByCustomer() {
    return 0.0;
}

bool IsCustomerLactoseIntolerant() {
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
    GiveMeAnInteger(201); //this 10 is the integer on line 60. on line 159 i am doing a call to give the function GiveMeAnInteger a integer of 201. so, my integer inside the function has the value of 201 (so youre replacing my integer with 201, so my_integer is like a placeholder). so my_integer is like a varible naem, i even replaced it wiht pancakes and it still worked. the technical term for this is a parameter
    int myAge = 23;
    GiveMeAnInteger(myAge); //so notice how this this is myage = 23. the my_integer on line 60 is jsut a place holder, so since you you pass myAge to the givemeaninteger function, it will call up myage
    int temp = 12321;
    GiveMeAnInteger(temp);
    //parameter: 

    GiveMeMultipleThings(123, 'M', "Hey I'm the string");
    

    StoreCustomerInfo("Prethel", 23, "7000 vancouver dr.");



    Add7ToAge(23);// so if you dont put in a parameter it wont work cause there isn't anything really defined or matches. the computer doesn't understand cause there is no integer

    Add7ToAge(); // no parameter means it will follow line 78 cause there is no parameter defined. however, if i put a parameter in line 178 like 34, then the computer will read line 73 b/c the parameter has been defined


    Add2Numbers(12,13);

    Add2Numbers(12,52.6); //so this will work but the decimal number will get cut off. this tried to run the first Add2Numbers cause i thought that the first number was an integer and same with the second 

    GiveMeNameAndAge (25, "dave"); //when creating a funci

    // Functions with return types
    int anyVariableName = GetTheNumber7();
    cout << "Printing the variable after calling GetTheNumber7: " << anyVariableName << endl; // its calling the function GetTheNumber7(), its reading what is within that function. then since defined that as anyVariableName, it will store what is in the function (result of 7) in anyVariableName and it will print it


    int myWeight = TakeInWeight();
    cout << "My weight is: " << myWeight << " lbs\n";

    int myWeightPlus10 = Add10ToWeight(myWeight);
    cout << "My weight + 10 is: " << myWeightPlus10 << endl;

    int pancakes = 23;
    int waffles = Add10ToWeight (pancakes); //pass basically means provide it the data to use. basically what happened here was since we set the parameter to pancakes = 23, it looked at the function on line 123 and basically replaced myWeight parameter with pancakes (the value that is being passed in)

        //SO BASICALLY WHAT HAPPENS WITH THE PANCAKES THING. IS THAT IT IS USING THE VALUES WITHIN THE PANCAKES PARAMETER, AND ITS USING THE OPERATIONS THAT WERE CREATED IN THE ADD10TOWEIGHT FUNCTION IN ORDER TO PRODUCE A RESULT. SO WE ARE PASSING IN THE VARIEBLSE IN PANCAKES . SO IT WILL REPLACE PANCAKES WITH 23. DATA ISN'T GETTING STORED, IT IS JUST GETTING MOVE. SO PARAMETER NAMES CAN ANYTHING AND IT DOESN'T CORRECTLATE TO A DEFINTION SO FOR EX:
            /*int add2numbers (mom, dad){ // this mom and dad variable within this function dont even exist until you pass a number through it
                int sum = mom + dad;
            }
            int main (){
                int mom = 100; (so this value mom isn't the same in the as the parameter, so the parameter name is just the values that will be passed in)
                    but if you did this
                cout << "mom" << mom << endl; //the output would be 100 

                    but if you id this
                cout << "mom" << add2numbers (1,2) << endl; // output is 6
            }
            */

           // calling means youre calling the function or telling the function to perform its behavior... when you say youre calling something, its only about functions. I AM PASSING IN DATA TO TO THE FUNCTION BY CALLING THE FUNCTION
    cout << "i like this many waffles: " << waffles << endl;
    // output was 33
    return 0;
}
