#include <algorithm>
#include<iostream>
#include <numeric>
using namespace std;

int main() {
int n,x;
    cin>>n>>x;
    int m=n;
    int count=0;
    int cha = n%10;
    bool X=true;
    while (X) {
       if (n%10==x || n%10==0) {
            count++;
            X=false;
        }
        else {
            n+=m;
            count++;
        }

    }
    cout<<count<<endl;
    return 0;
}
