class Solution {
public:
    bool isNumber(string s) {
        int flag_symbol=0;
        int flag_space=0;
        int flag_point=0;
        int flag_num=0;



        // #如果有e，那么后面只可以是一次的+-和数值和空格，不可以有小数点，
        int nums=s.size();
        for(int i=0;i<nums;i++)
        {
            if(s[i]==' ')
            {
                if(flag_space==1)
                {
                    for(int j=i;j<nums;j++)
                    {
                        if(s[j]!=' ')
                        {
                            return false;
                        }
                    }
                    continue;
                }
                continue;
            }else
            {
                flag_space=1;
                if(s[i]=='+'||s[i]=='-')
                {
                    if(flag_symbol==1)
                    {
                        return false;
                    }
                                    flag_symbol=1;
                    continue;
                }
                flag_symbol=1;
            }


            if(s[i]=='.')
            {
                if(flag_point==1)
                {
                    return false;
                }else
                {
                    flag_point=1;
                    continue;
                }
            }
            if(s[i]=='e'||s[i]=='E')
            {
                if(flag_num!=1)
                {
                    return false;
                }
                if(i==0)
                {
                    return false;
                }
                s=s.substr(i);
                return isafterE(s);
            }
            if(s[i]>='0'&&s[i]<='9')
            {
                flag_num=1;
                continue;
            }else{
                return false;;
            }
        }
        if(flag_num)
        {
            return 1;
        }else
        {
            return false;
        }

    }
    bool isafterE(string s)
    {
        int flag_symbol=0;
        int flag_space=0;
        int nums_flag=0;
        int nums=s.size();
        for(int i=1;i<nums;i++)
        {
            if(s[i]=='+'||s[i]=='-')
            {
                if(i==1)
                {
                    continue;
                }else
                {
                    return false;
                }
            }
            if(s[i]== ' ')
            {
                if(i==1)
                {
                    return false;
                }
                for(int j=i;j<nums;j++)
                {
                    if(s[j]!= ' ')
                    {
                        return false;
                    }
                }
                return true;
            }
            if(s[i]>='0'&&s[i]<='9')
            {
                nums_flag=1;
                continue;
            }else{
                return false;
            }
        }
        if(nums_flag==1)
        {
            return true;
        }
        return false;
    }
};
