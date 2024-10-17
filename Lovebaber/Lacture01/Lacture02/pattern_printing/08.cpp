//number half pyramid using cpp 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int i=1;i<=row+1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}