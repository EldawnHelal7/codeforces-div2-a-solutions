#include <algorithm>
#include<iostream>
using namespace std;
// Problem: http://codeforces.com/contest/732/problem/A
// Tags: Implementation, Brute force

int main() {
int n,x;
    cin>>n>>x;
    // n = price of one shove, x = value of special coin.
    int m=n; //stores original price of the shovel.
    int count=0; //bought shovels count.
    bool X=true;
    while (X) {
        // checks if the last digit is zero or matches the special coin.
       if (n%10==x || n%10==0) {
            count++; //adds last shovel.
            X=false; //terminates the loop.
        }
        else {
            n+=m; //buy one more shovel (Add the prices up)
            count++; //increment the number of shovels.
        }

    }
    cout<<count<<endl; //desired output
    return 0;
}
