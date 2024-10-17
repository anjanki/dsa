// //in pattern printing hollow rectagle printing
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=0;row<3;row++){
// if(row==0||row==2){
//     for(int col=0;col<5;col++){
//         cout<<"* ";
//     }
//       }
//       else{
//         cout<<"* ";
//         for(int col=0;col<3;col++){
//             cout<<" ";
//         }
//         cout<<"   *";
//       }
//       cout<<endl;
//         }
        
//     }
  
  // second type of same question:
//   #include<iostream>
//   using namespace std;
//   int main(){
//     for(int row=0;row<6;row++){
//         if(row==0||row==5){
//           for(int i=0;i<5;i++){
//            cout<<"*";
//           }
//         }
//         else{
//             cout<<"*";
//             for(int i=0;i<3;i++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//   }
//this program of hallow rectangle printing is made in general form
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the Value of n:"<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        if(row==0||row==n-1){
            for(int i=0;i<n-1;i++){
                cout<<"* ";
            }
        }
        else{
            cout<<"*";
            for(int i=0;i<n-2;i++){
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}