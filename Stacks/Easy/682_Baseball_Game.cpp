// Problem: 682. Baseball Game
// Technique: Stack Simulation
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> st;

        for(string op : operations){    //we use string cause nos can be 2 digit too

            if(op == "C"){
                st.pop();
            }

            else if(op == "D"){
                st.push(2 * st.top());
            }

            else if(op == "+"){
                int a = st.top(); st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
            }

            else{
                st.push(stoi(op));     //convert string to int
            }

        }

        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};