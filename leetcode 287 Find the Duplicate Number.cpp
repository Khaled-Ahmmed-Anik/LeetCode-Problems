/*
problem link: https://leetcode.com/problems/find-the-duplicate-number/

*/



class Solution {
#define in int 
public:
   
    int findDuplicate(vector<in>& nums) {
        int arr[100009]={0};
        for (in i=0;i<size(nums);i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>1)return nums[i];
        }
        return 0;
    }
};