class Solution {
public:
bool isalphaNum(char ch){
    if((ch>='0'&&ch<='9')||
    (tolower(ch)>='a'&& tolower(ch)<='z')){
        return true;
    }
    return false;

}
    bool isPalindrome(const string& s) {
        int st=0;
        int end=s.size()-1;
        while(st< end){
            if(!isalphaNum(s[st])){
                st++;
                
            }
           else if(!isalphaNum(s[end])){
              end--;
              
            }
            else if(tolower(s[st])!= tolower(s[end])){ 
            return false;
            }
            else{ 

            st++;
            end--; }
           
            }
            return true;
        }
        
    
};