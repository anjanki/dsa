//numric inverted half pyramid 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int i=1;i<=n-row;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
