#include<iostream>
using namespace std;
// Problem: https://codeforces.com/contest/266/problem/A
// Tags: Implementation.

int main(){
    int n;
    cin>>n; //Number of colors.
    char arr[n];  //Character array for the letters of the colors.
    int count=0; //Counter for number of changes.
    for(int i=0;i<n;i++) {
        cin>>arr[i]; //Entering the letters.
    }
    for(int i=0;i<n;i++) {
        if (arr[i]==arr[i+1]) {  //Checks if the neighboring colors match, if yes then we need to change one of them.
            count++;            //Increments count, no need for an else case.
        }

    }
    cout<<count;

    return 0;}
