class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {
            if(n<-(2147483648-1))
            {
                return (1/x)*1.0/myPow(x,-(n+1));
            }
            double ret=1.0/myPow(x,-n); 
            return ret;
        }
        if(n==1)
        {
            return x;
        }
        if(n==0)
        {
            return 1.0;
        }
        if(n%2==1)
        {
            return myPow(x,n-1)*x;
        }
        double ret=myPow(x,n/2);
        return ret*ret;
    }
};
