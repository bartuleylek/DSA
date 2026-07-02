#include <iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>&arr){
    
    int write = 0;
    
    // Copy all non-zero elements to the beginning of the array
    for(int read =0; read<arr.size();read++)
    {
        if(arr[read] != 0)
        {
            arr[write] = arr[read];
            write++;
        }
    }
    
    // Making all the remaining elements 0
    while(write < arr.size())
    {
        arr[write] = 0;
        write++;
    }
    
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    
}


int main(){
    
    vector<int>array={0, 1, 0, 3, 12};
    moveZeros(array);
    
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)