#include <iostream>
using namespace std;

int main() {
   // if / if-else statements
    int a , b;

    cout << "Enter the value of A: "<<endl;
    cin >> a;
    
    cout << "Enter the value of B: "<<endl;
    cin >> b;
    
    // tell which number is greater
    if (a > b) {
        cout << "A is greater than B" << endl;
    } 
    if (b > a) {
        cout << "B is greater than A" << endl;
    }

    // tell if number is positive or negative or zero

    if (a>0) {
        cout<< "A is a positive Number" << endl;
    }
    else {
        if (a<0) {
            cout << "A is a negative Number" << endl;
        }
        else {
            cout << "A is Zero" << endl;
        }
    }

    //tell if the give character is Uppercase , lowercase , numeric or special character

    char ch;
    cout<< "Enter the character: " << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
    cout << "This is Lowercase letter." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
    cout << "This is Uppercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9') {  
    cout << "This is a Numeric." << endl;
    }
    else {  
    cout << "This is a Special character." << endl;
    }
    
// While loops

    int n;
    cin >> n;

 // Print numbers from 1 to N
    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i=i+1 ;
    }

// Sum of numbers from 1 to N     
    int sum = 0;
    i = 1; // Reset i to 1 for the sum calculation
    while (i <= n) {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;    

// Tell if the given number is prime or not

    int i = 2 ;
    while (i<n) {
      if (n%i==0) {
         cout << "Not Prime for " << i << endl;
      }
      else {
         cout << "Prime for " << i << endl;
      }
      i = i+1 ;
    }

}

