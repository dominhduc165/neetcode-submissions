class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =position.size();
        vector<pair<int,int>> v(n);
        for(int i=0 ; i<n ; i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        double time= (double)(target-v[0].first)/v[0].second;
        stack<double> st;
        st.push(time);
        for(int i=1 ; i<n ; i++){
            time= (double)(target-v[i].first)/v[i].second;
            if(time>st.top()){
                st.push(time);
            }
        }
        return st.size();
    }
};
