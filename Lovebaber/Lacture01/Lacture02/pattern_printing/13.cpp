//Solid Diamond using c++
#include<iostream>
using namespace std;
int main(){
//full pyramid
int n;
cout<<" Enter the value of N:"<<endl;
cin>>n;
for(int row=0;row<n;row++){
for(int i=0;i<n-row-1;i++){
cout<<" ";
}
for(int i=0;i<row+1;i++)
{
    cout<<"* ";
}
cout<<endl;
}
//for inverted pyramid
for(int row=0;row<n;row++){
    for(int i=0;i<row;i++){
        cout<<" ";
    }
    for(int i=0;i<n-row;i++){
        cout<<"* ";
    }
    cout<<endl;
}

}