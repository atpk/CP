class Solution {
public:
    double power(double x, int y) {
        double a=1;
        while(y>0){
            if (y%2 == 0)
            {
                x = x * x;
                y = y / 2;
            }
            else
            {
                a = a * x;
                y = y - 1;
            }
        }
        return a;
    }
    double myPow(double x, int n) {
        if(x==0.0 || x==1.0)
            return x;
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(x==-1.0)
            return n%2==0 ? 1.0 : -1.0;
        if(n>0){
            return power(x,n);
        }
        else{
            n=abs(n);
            return 1/power(x,n);
        }
    }
};
