#include <iostream>
using namespace std;
#include <map>

int main() {
   string s;
   cin >> s;

    //1.String  hashing through arrays

    //Pre-compute 
    int hash[26] = {0};
    for(int i=0; i<s.size();i++) {
        hash[s[i]-'a'] ++;
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        //fetching
        cout << hash[c-'a'] << endl;
    }
    return 0;
}
