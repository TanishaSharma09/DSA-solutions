class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>qe;
       for(int x:students)
       qe.push(x);
       for(int i=sandwiches.size()-1;i>=0;i--){ 
        st.push(sandwiches[i]);
       }
int rotation =0;
while(!qe.empty() && rotation<qe.size()){ 
       if(st.top()==qe.front()){
        st.pop();
        qe.pop();
        rotation = 0;
       }
       else{
        int temp=qe.front();
        qe.pop();
        qe.push(temp);
        rotation++;
       }
}
        return qe.size();
        
    }
};