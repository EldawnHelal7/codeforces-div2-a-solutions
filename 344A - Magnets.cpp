#include <algorithm>
#include<iostream>
using namespace std;
// Problem: https://codeforces.com/contest/344/problem/A
// Tags: Implementation, Brute force

int main(){
 int n;
    cin>>n; // Number of magnets.
    int arr[n]; 
    int count=0; //Number of groups.
    for(int i=0;i<n;i++) {
        cin>>arr[i]; //storing the values.
    }
    for(int i=0;i<n;i++) {
            if (arr[i]==arr[i+1]) {
                continue; 
             // This loop checks if we are still in the same group, when terminated we add one to count.
            }
            else {
                count++;
        }
    }
cout<<count;
    return 0;}
