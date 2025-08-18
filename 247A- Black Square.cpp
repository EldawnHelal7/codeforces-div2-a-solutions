#include<iostream>
using namespace std;
// Problem: https://codeforces.com/contest/431/problem/A
// Tags: Implementation.

int main() {
   int n = 4;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i]; //Enters the vertical tiles values.
    }
    string S;
    cin>>S; //Enter the string values
    int count=0; //Tracker
    for (int i=0; i<S.length(); i++) { //If the value matches the string, count increases by the vertical value
        if (S[i]=='1') {
            count+=arr[0];
        }
        if (S[i]=='2') {
            count+=arr[1];

        }
         if (S[i]=='3') {
             count+=arr[2];

        }if (S[i]=='4') {
            count=+arr[3];

        } 
    }
    cout<<count; //Desired output





    return 0;}
