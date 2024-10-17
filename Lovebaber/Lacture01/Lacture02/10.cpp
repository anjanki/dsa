//3. Write a program in C++ to display n terms of natural numbers and their sum.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the value  of n:"<<endl;
    cin>>n;
    cout<<"The natural number upto "<<n<<"th terms:"<<endl;
    for(int i=1;i<=n;i++)
    {
cout<<i<<endl;
sum=sum+i;
    }
    cout<<"sum of"<<n<<"natural numbers are:"<<sum;


}