#include <iostream>
#include <vector>
using namespace std;

int removeDuplicatesFromSortedArray(vector<int>&arr){
    
    int write =0;
    
    for(int read = 0; read<arr.size();read++)
    {
        if(arr[read] != arr[write])
        {
            write++;
            arr[write] = arr[read];
        }
    }
    
    return write+1;
}

int main(){
    
    vector<int> myVector = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicatesFromSortedArray(myVector);
    
    cout << "k = " << k;
    
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)