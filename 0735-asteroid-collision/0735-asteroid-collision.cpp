class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for(int x : asteroids){
            
            while(!s.empty() && s.top()> 0 && x<0){

                if(s.top() < -x){
                    s.pop();
                }
                else if(s.top() == -x){
                    s.pop();
                    x=0;
                    break;
                }
                
                else{
                    x=0;
                    break;
                }
            }

            if(x != 0){
                s.push(x);
            }
        }

        vector<int> ans(s.size());

        for (int i = ans.size() - 1; i >= 0; i--) {
        ans[i] = s.top();
        s.pop();
    }

    return ans;
    }
};