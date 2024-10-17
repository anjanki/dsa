
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<" Enter the number of row: "<<endl;
// //     cin>>n;
// //     for(int row=0;row<n;row++){
// //         for(int i=0;i<n-row-1;i++){
// //             cout<<" ";
// //         }
// //         for(int i=0;i<row+1;i++){
// //             cout<<"* ";
// //         }
// //         cout<<endl;
// //     }
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of row:"<<endl;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int i=0;i<n-row-1;i++){
//             cout<<" ";
//         }
//         for(int i=0;i<2*row+1;i++){
//             if(i==0||i==2*row){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the value of row:"<<endl;
     cin>>n;
     for(int row=0;row<n;row++){
        for(int i=0;i<row;i++){
            cout<<" ";
        }
        for(int i=0;i<2*n-2*row-1;i++){
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