// 就是找三个数表示3个质因子用了几次
class Solution {
public:
    int nthUglyNumber(int n) {
        int a=0;
        int b=0;
        int c=0;
        int j=0;
        vector<int> ugly;
        ugly.push_back(1);
        int number=1;
        int flag=0;
        while(j<n)
        {
            int aa=ugly[a];
            int bb=ugly[b];
            int cc=ugly[c];

            if(aa*2==number)
            {
                if(bb*3==number)
                {
                        if(cc*5==number)
                        {
                                                    a++;
                                                    b++;
                                                    c++;
                                ugly.push_back(number);
                                j++;
                                continue;
                        }
                        a++;
                        b++;
                        ugly.push_back(number);
                        j++;
                        continue;
                }
                if(cc*5==number)
                {
                                    a++;
                                    c++;
                    ugly.push_back(number);
                    j++;
                    continue;
                }

                a++;
                ugly.push_back(number);
                j++;
                continue;
            }
            if(bb*3==number)
            {
                if(cc*5==number)
                {
                    b++;
                    c++;
                    ugly.push_back(number);
                    j++;
                    continue;
                }
                b++;
                ugly.push_back(number);
                j++;
                continue;

            }
            if(cc*5==number)
            {
                c++;
                ugly.push_back(number);
                j++;
                continue;
            }
            if(aa*2>bb*3)
            {
                if(bb*3<cc*5)
                {
                    number=bb*3;
                }else
                {
                    number=cc*5;
                }
            }else{
                if(aa*2<cc*5)
                {
                    number=aa*2;
                }else
                {
                    number=cc*5;
                }
            }
        }
        return ugly[n-1];
    }
};
