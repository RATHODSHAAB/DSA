#include <iostream>
using namespace std;
#include <map>

int main() {
    int n;
    cin >> n;
    int arr[n];

    //1.Number hashing through arrays
    for(int i=0; i<n;i++) {
        cin >> arr[i];
    }

    //Pre-compute 
    int hash[13] = {0};
    for(int i=0; i<n;i++) {
        hash[arr[i]] ++;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        //fetching
        cout << hash[number] << endl;
    }
    return 0;
}
