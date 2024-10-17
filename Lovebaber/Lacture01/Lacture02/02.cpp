#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks:"<<endl;
    cin>>marks;
    if (marks>=90) cout<<"grade:A";
    else if(marks>=80)cout<<"grade:B";
    else if (marks>=70)cout<<"grade:C";
    else if(marks>=60)cout<<"grade:D";
    else if(marks>=40)cout<<"grade:E";
    else cout<<"fail"<<endl<<"thanku";
    
}