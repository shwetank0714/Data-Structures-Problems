class Solution {
public:
    
        
        bool static comp(pair<int,pair<int,char>> &v1, pair<int,pair<int,char>> &v2){
            if(v1.first == v2.first && v1.second.second == v2.second.second){
                if(v1.second.second == 's')
                    return v1.second.first > v2.second.first;
                else
                    return v1.second.first < v2.second.first;
            }
            if(v1.first == v2.first){
                return v1.second.second > v2.second.second;
            }
            else{
                return v1.first < v2.first;
            }
        }
        
    
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> result;
        vector<pair<int,pair<int,char>>> vect;
        
        for(int i=0;i<buildings.size();i++){
            vect.push_back({buildings[i][0],{buildings[i][2],'s'}});
            vect.push_back({buildings[i][1],{buildings[i][2],'e'}});
        }
        
        sort(vect.begin(),vect.end(),comp);
        
        multiset<int> st;
        st.insert(0);
        int maxVal = 0;
        for(auto element:vect){
            char getState = element.second.second;
            
            if(getState == 's'){
                st.insert(element.second.first);
            }
            else{
                auto itr = st.find(element.second.first);
                st.erase(itr);
            }
            
            auto ptr = st.rbegin();
            
            if(maxVal != *ptr){
                maxVal = *ptr;
                result.push_back({element.first,maxVal});
            }
            
        }
        
        return result;
    }
};
