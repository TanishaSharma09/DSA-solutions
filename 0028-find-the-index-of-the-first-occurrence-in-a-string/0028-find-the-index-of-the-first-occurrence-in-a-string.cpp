class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            bool ispresent =true;
            for(int j=i,k=0;k<needle.size();k++,j++){
                if(haystack[j]!=needle[k]){
                    ispresent =false;
                    break;
                }
            }
            if(ispresent){
               return i;
            }
        }
     return -1;
        
    }
};