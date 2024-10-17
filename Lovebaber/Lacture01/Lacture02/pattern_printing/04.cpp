//square and rectangle  by taking input of row &col by user.
#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the Value Of Row :"<<" ";
    cin>>i;
    int j;
    cout<<"Enter the Value Of Col:"<<" ";
    cin>>j;
    for(int row=0;row<i;row++){
        for(int col=0;col<j;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}