#include <iostream>
#include <vector>
using namespace std;


void mergeTwoSortedArrays(vector<int>&nums1, int m, vector<int>&nums2, int n)
{
    int i = m-1; // The last real element in nums1
    int j = n-1; // The last real element in nums2
    int k = m+n-1; // The last place in nums1
    
    while(i>=0 && j>=0){
        
        if(nums1[i] >=nums2[j]){
            
            nums1[k] = nums1[i];
            i--;
        }
        else{
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    
    // If any elements left in nums2
    while(j>=0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
    
    for(int i=0;i<nums1.size();i++)
    {
        cout << nums1[i] << " ";
    }
}

int main(){
    
    vector<int>arr1 = {1, 2, 3, 0, 0, 0};
    vector<int>arr2 = {2, 5, 6};
    
    int m = 3;
    int n = 3;
    
    mergeTwoSortedArrays(arr1,m,arr2,n);
    
    return 0;
}

// Time Complexity: O(n+m) where m and n are the size of the input arrays
// Space Complexity: O(1)