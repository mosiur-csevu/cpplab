//! C header file
#include <stdio.h>

//* C++ header file 
#include <iostream>
//* it's a good practice to use standard namespaces in your code
//* We'll learn the details of a namespace in later class
using namespace std;


int main()
{
    // TODO: OUTPUT A TEXT IN CONSOLE

    //! in C, to print a line of code you used:
    printf("Hello World!\n");

    //* In C++, we use COUT stream and for new line we use endl stream (endl = end line)
    cout << "Hello World" << endl;
    //* But you can use \n in the quoted text as well, but best practice is to use endl;
    cout << "Hello World!\n";

    // TODO: master Data Types
    //* Both C and C++ have same basic data types. Let's check them out
    int i; // 4 Bytes = 32 bits
    long long int ll; // 8 Bytes = 64 bits
    unsigned int ul; // 4 bytes = 64 bits, only positive values;
    float f; // 4 Bytes = 32 bits , can contain fraction
    double d; // 8 Bytes = 64 bits, can contain fraction
    char c; // 1 byte = 8 bit, contains a single character
    bool b; // 1 byte = 8 bit, But contains 1-bit of info. true or false. Logical 0 or 1

    // ---> That should do... more on this later.

    // TODO: TAKE INPUT FROM CONSOLE

    //! In C, you took input like this:
    scanf("%d",&i);
    scanf("%lld",&ll);
    scanf("%f",&f);
    scanf("%lf",&d);
    scanf("%c",&c);

    //  too much trouble to take inputs right ?
    //* In C++, we use CIN stream and don't need any format specifiers. PHEW !!!
    cin >> i >> ll >> ul >> f >> d >> c >> b;

    // TODO: STRINGS
    //! In C, we have used array to store multiple homogenious values. 
    // ! for storing strings we have also used array with character data type
    char cstr[] = "sweet";

    //* In C++, we will use a container named STRING and It's awesome;
    string firstName = "Mosiur";
    string lastName  = "Rahman";
    string nickName  = "Sweet";

    // * It works just like char array in C. Also it comes with a lots of features. Let's check them out
    
    //  1. determining the length of the string.. we have two built in function that does the same job;
    cout << firstName.length() << " and " << nickName.size();

    //  2. concat strings 
    string fullName = firstName + " " + lastName + " " + nickName;

    // 3. create substrings
    string sub = fullName.substr(0,firstName.length());


    
    return 0;
}