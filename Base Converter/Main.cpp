
#include <iostream>
#include <list>

using namespace std;

int n;      //number to be converted
int b;      //base to which n will be converted

int main()
{
    cout << "Please enter the number to convert and the new base." << endl;
    cin >> n >> b;                     //get inputs from user
    cout << "The number " << n << " converted to base " << b << " is ";

    list<int> output = {};         //create a linked list to hold digits of output

    while (n > 0) {
        int digit = n % b;
        output.push_front(digit);   //add current digit to front of list (to be printed in correct order)
        n = (n / b);
    }

    for (int i : output) {           //print out all elements of list "output"
        if (i < 10) {
            cout << i;
        }
        else if (i == 10) {        //the following code will work to accommodate all possible entries in base 16
            cout << "A";
        }
        else if (i == 11) {
            cout << "B";
        }
        else if (i == 12) {
            cout << "C";
        }
        else if (i == 13) {
            cout << "D";
        }
        else if (i == 14) {
            cout << "E";
        }
        else if (i == 15) {
            cout << "F";
        }
        else {
            cout << " ";   //blank space placeholder for any base over 16
        }
    }
    cout << "." << endl;
}
