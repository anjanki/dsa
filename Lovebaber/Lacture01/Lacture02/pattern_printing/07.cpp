//inverted half pyramid using c++ program.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int i=0;i<n-row;i++){
            cout<<"* ";
        }
        cout<<endl;
    }

}