#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Number Do you want Print table : ";
    cin>>n; 

    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}
