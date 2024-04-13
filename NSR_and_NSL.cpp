void NSR_NSL(vector<int>&h){
        stack<int>st;
        vector<int>nsr(h.size()),nsl(h.size());  //nsr-->next smaller to right and nsl -->.. to left 
        for(int i=h.size()-1;i>=0;i--){
            while (!st.empty() && h[st.top()] >= h[i]) {
                st.pop();
            }
            nsr[i]=st.empty()?h.size():st.top();
            st.push(i);
        }

        while(!st.empty())st.pop();

        for(int i=0;i<h.size();i++){
            while (!st.empty() && h[st.top()] >= h[i]) {
                st.pop();
            }
            nsl[i]=st.empty()?-1:st.top();
            st.push(i);
        }
     
    }
