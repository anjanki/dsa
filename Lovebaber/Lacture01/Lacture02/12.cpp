//5. Write a program in C++ to check whether a number is prime or not.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Enter the number:"<<" "<<endl;
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<n<<"is not prime number.";
            flag=1;
            break;
        }     
    }
if(flag==0){
        cout<<"is prime number";
    }
    return 0;
    
}
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     cout << "Enter the number: ";
//     int n;
//     cin >> n;

//     // Handle cases for numbers less than 2
//     if (n < 2) {
//         cout << n << " is not a prime number." << endl;
//         return 0;
//     }

//     bool flag = false; // Use 'false' instead of '0' for better readability
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             cout << n << " is not a prime number." << endl;
//             flag = true; // Set flag to true if a divisor is found
//             break; // Exit the loop since we found a divisor
//         }
//     }
    
//     // Check flag status to determine if n is prime
//     if (!flag) {
//         cout << n << " is a prime number." << endl;
//     }

//     return 0;
// }
