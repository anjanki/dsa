//2. Write a program in C++ to find the sum of the first 10 natural numbers.
#include<iostream>
using namespace std;
int main(){
    float sum=0;
    for(int i=0;i<=10;i++){
        sum=sum+i;
    }
    cout<<"The sum of n natural number is ="<<sum;
}