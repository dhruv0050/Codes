#include <bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
       return {};
}
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target;
    cout<<"Enter sum to find "<<endl;
    cin>>target;
    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices of the two numbers whose sum is equal to the target: "<< result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

