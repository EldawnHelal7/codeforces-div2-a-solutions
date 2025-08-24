using namespace std;
#include <iostream>
 int main(){
    int n;
    cin>>n; //Enter number of games.
int arr[n];
int arr1[n];//matches
int count = 0;
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
cin>>arr1[i]; //home and guest matches;
}
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr1[j]) //checks for each home each guest team.
            {
 
                count++; //counts differences.
            }
        }
    }
cout<<count;
 
return 0;
}
