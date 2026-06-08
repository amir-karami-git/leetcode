#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> arr={0,0,0};
        vector<int> arr2={0,0,0};
        vector<int> awn(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                arr[2]++;
            }
            else if(nums[i]<pivot){
                arr[0]++;
            }
            else{
                arr[1]++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                awn[arr2[0]]=nums[i];
                arr2[0]++;
            }
            else if(nums[i]==pivot){
                awn[arr2[1]+arr[0]]=nums[i];
                arr2[1]++;
            }
            else{
                awn[arr2[2]+arr[0]+arr[1]]=nums[i];
                arr2[2]++;
            }
        }
        return awn;
    }   
};