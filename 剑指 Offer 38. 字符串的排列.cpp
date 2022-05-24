//累了，超时了，结果是对的
class Solution {
public:
    vector<string> permutation(string s) {
        vector<string> ret_vec;
        ret_vec=mypermutation(s,0);
        return ret_vec;
    }
    vector<string> mypermutation(string s,int i)
    {
        vector<string> myret_vec;
        vector<string> myret_temp_vec;
        if(s.size()-1==i)
        {
            myret_vec.push_back(s.substr(i));
            return myret_vec;
        }
        for(int j=i;j<s.size();j++)
        {
            char a=s[i];
            char b=s[j];
            s[j]=a;
            s[i]=b;
            myret_temp_vec=mypermutation(s,i+1);
            for(int k=0;k<myret_temp_vec.size();k++)
            {
                                    string x=s[i]+myret_temp_vec[k];
                if(i==0)
                {

                if(find(myret_vec.begin(),myret_vec.end(),x)!=myret_vec.end())
                    {
                        continue;
                    }else{
                        myret_vec.push_back(x);
                    }

                }else
                {
                    myret_vec.push_back(x);
                }
            }
        }
        return myret_vec;
    }
};

20220524-11:21通过提交，击败率5%，内存占用太大
class Solution {
public:
    vector<string> permutation(string s) {
        vector<string> ret_vec;
        ret_vec=mypermutation(s,0);
        return ret_vec;
    }
    vector<string> mypermutation(string s,int i)
    {
        vector<string> myret_vec;
        vector<string> myret_temp_vec;
        if(s.size()-1==i)
        {
            myret_vec.push_back(s.substr(i));
            return myret_vec;
        }
        vector<char> char_vec;
        for(int j=i;j<s.size();j++)
        {
            if(find(char_vec.begin(),char_vec.end(),s[j])!=char_vec.end())
            {
                continue;
            }

            char a=s[i];
            char b=s[j];
            s[j]=a;
            s[i]=b;
            myret_temp_vec=mypermutation(s,i+1);
            for(int k=0;k<myret_temp_vec.size();k++)
            {
                string x=s[i]+myret_temp_vec[k];
                // if(i==0)
                // {

                //     if(find(myret_vec.begin(),myret_vec.end(),x)!=myret_vec.end())
                //         {
                //             continue;
                //         }else{
                //             myret_vec.push_back(x);
                //         }

                // }else
                    {
                        myret_vec.push_back(x);
                    }
            }
            char_vec.push_back(s[i]);
        }
        return myret_vec;
    }
};
