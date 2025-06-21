class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Two loop
        // time complexity of O(n^2)
        // space of O(1)
        // TLE
        // int n=nums.size();
        // for(int i=0;i<n;++i){
        //     for(int j=i+1;j<n;++j){
        //         int total=nums[i]+nums[j];
        //         if(total==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};

        // we can use unordered_map to store the previous element
        // time complexity of O(n)
        // space complexity of O(n) ->> unordered_map
        int n = nums.size();
        unordered_map<int, int> store;
        for (int i = 0; i < n; ++i)
        {
            int rem = target - nums[i];
            if (store.count(rem))
            {
                return {store[rem], i};
            }
            store[nums[i]] = i;
        }
        return {-1, -1};
    }
};