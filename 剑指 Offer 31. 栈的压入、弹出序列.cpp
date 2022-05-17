class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // 新建一个stack,模拟是否可以
        stack<int> temp;
        int nums=pushed.size();
        int j=0;
        for(int i=0;i<nums;i++)
        {
            temp.push(pushed[i]);
            for(;j<nums;j++)
            {
                if(temp.empty())
                {
                    break;
                }
                if(temp.top()!=popped[j])
                {
                    break;
                }else
                {
                    temp.pop();
                }
            }
        }
        if(temp.empty())
        {
            return true;
        }else{
            return false;
        }
    }
};
