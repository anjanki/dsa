#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int i=0;i<n-row-1;i++){
            cout<<" ";
        }
        for(int i=0;i<2*row+1;i++){
            //for star
            if(i==0){
                cout<<"*";
            }
            else if(i==2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //printing inverted hallow pyramid
    for(int row=0;row<n;row++){
        for(int i=0;i<row;i++){
            cout<<" ";
        }
        for(int i=0;i<=2*n-2*row-1;i++){
            if(i==0||i==2*n-2*row-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}