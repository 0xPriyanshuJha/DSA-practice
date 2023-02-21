#include<iostream>
using namespace std;

int main(){
//     int a;
//     cin>>a;
//  //   cout<<"hello"<<endl;

// if(a>0) {
//     cout<<"a is positive"<<endl;
// }
// else{
//     cout<<"a is negative"<<endl;
// }
// int a,b;
// cin>>a>>b;
// cout<<"value of a and b is "<<a <<" "<<b<<" "<<endl;

// int n;
// cin>>n;

// int i = 1;
// while(i<=n){
//     int j =1;
//     while(j<=n){
//     cout<<"*";
//     j=j+1;
//     }
//     cout<<endl;

//     i=i+1;
// }

int n;
cin>>n;

int i = 1;

while(i<=n) {
    int j = 1;
    while(j<=n){
        cout<<i;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
}

}