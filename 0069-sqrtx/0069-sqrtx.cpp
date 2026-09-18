class Solution {
public:
    int mySqrt(int x) {
        int st=0;
        int end=x;
        int ans =0;
        while(st<=end ){
            long long n=(st+end)/2;
            if(n*n<=x){
            ans =n;
              st=n+1;
            }
            else{
                end=n-1;
            }
        }
            return ans;





        }

        
    
};