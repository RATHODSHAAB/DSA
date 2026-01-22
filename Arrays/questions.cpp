#include <iostream>
using namespace std;

int main() {
    //1. Largest element in array
    // int n;
    // cin >> n;
    // int arr[n];

    // for(int i=0; i<n;i++) {
    //     cin >> arr[i];
    // }

    // int max_value = arr[0];
    // for(int i=1; i<n;i++) {
    //     if(arr[i] > max_value) {
    //         max_value = arr[i];
    //     }
    // }

    // cout << max_value << endl;


    //2. Find the second largest element in an array
    // we find the second larrgest by 3 ways but we will be going on the optimal one as that solution have 
    //less time complexity

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n;i++) {
        cin >> arr[i];
    }
    // int largest = arr[0];
    // int s_largest = -1;//Assuming the array is not negative!
    // for( int i =1; i<n;i++) {
    //     if(arr[i] > largest) {
    //         s_largest = largest;
    //         largest = arr[i];
    //     } else if( arr[i] < largest && arr[i] > s_largest) {
    //         s_largest = arr[i];
    //     }
    // }
    // cout << s_largest << endl;

    //for second samllest 
    int smallest = arr[0];
    int s_smallest = INT32_MAX;
    for (int i= 1; i<n;i++) {
        if(arr[i] < smallest) {
            s_smallest = smallest;
            smallest = arr[i];
        } else if(arr[i] != smallest && arr[i] < s_smallest) {
            s_smallest = arr[i];
        }
    }
    cout << s_smallest << endl;
}