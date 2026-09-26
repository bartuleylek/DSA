#include <iostream>
#include <vector>
using namespace std;


vector<int>squaresofSortedArray(vector<int>&array){
    
    int left = 0;
    int right = array.size()-1;
    vector<int>output(array.size());
    int position = array.size()-1;
    
    while(left<=right)
    {
        int leftSquare = array[left]*array[left];
        int rightSquare = array[right]*array[right];
        
        if(leftSquare <= rightSquare)
        {
            output[position] = rightSquare;
            right--;
        }
        else
        {
            output[position] = leftSquare;
            left++;
        }
        position--;
    }
    return output;
}


int main(){
    
    vector<int>nums = {-4, -1, 0, 3, 10};
    vector<int> result = squaresofSortedArray(nums);
    for(int i=0;i<result.size();i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)