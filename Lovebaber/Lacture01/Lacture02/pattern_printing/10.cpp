// invered full pyramid using c++
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int i=0;i<=row-1;i++){
            cout<<" ";
        }
        for(int i=0;i<n-row;i++){
            cout<<"* ";
        }
        cout<<endl;
    }

}