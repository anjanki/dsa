//4. Write a program in C++ to find the perfect numbers between 1 and 500.
#include<iostream>
using namespace std;
int main(){
    for(int num=1;num<=500;num++){
        int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        cout<<"the perfect number are"<<num<<" "<<endl;
    }
    }
    }