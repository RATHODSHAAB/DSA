#include <iostream>
using namespace std;
#include <map>

int main() {
    int n;

    //The code for the number hasing using arrays is done ✅ and 
    //character is remaining

    // Hasing using maps Using Map
    //cin is used to take the inputs 
    //Here we are taking n as input
    cin >> n; //suppose we get 7
    //so the size of arr becomes arr[7];
    int arr[n];
    //we are putting the values in array in a dynamic way
    //so suppose the values that are given [ 1 2 3 3 2 1 12 ]
    //so when the loop run the arr[0] = 1 arr[1]=2 and goes on till last 
    for(int i=0; i<n;i++) {
        cin >> arr[i]; 
    }
    //after this the array becomes arr[7] = [1,2,3,3,2,1,12]

    //precompute 
 
    //map stores key and frequency ! key mean the unique number and
    //it frequency that what's we need here ! 
    map<int, int>mpp; 
    for(int i=0;i<n;i++) {//i=7 
        mpp[arr[i]]++;
    }
    //1->2
    //2->2
    //3->3 and last 12-> and if we try to search 16->0


    //here we are asking the question 
    int q; //creating variables 
    cin >> q; //how many queries you want to ask! let say = 5 
    while(q--) {
        int number; //now the number in queries 
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }

}

//my doubts : 
// why we need to use such complex way as it hard to undetstand the code ?
//why we need this query cannot we just make a function and pass all the values like the array number and what number comes how many time that can be passed through function calling?
//okay this code is good now how i make this run ?