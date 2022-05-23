class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> nums_map;
        for(int i=0;i<nums.size();i++)
        {
            nums_map[nums[i]]++;
        }
        map<int,int>::iterator it;
        int max=0;
        int ret;
        for(it=nums_map.begin();it!=nums_map.end();it++)
        {
            if(it->second>max)
            {
                ret=it->first;
                max=it->second;
            }
        }
        return ret;
    }
};
