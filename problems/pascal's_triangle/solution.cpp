class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result; 
        for(int i=0;i<numRows;i++){
            vector<int> res ; 
            for(int j =0;j<=i;j++){
                if(j==0 || j==i){
                    res.push_back(1); 
                }
                else{
                    res.push_back(result[i-1][j-1]+result[i-1][j]);
                }
            }
            result.push_back(res); 
        }
        return result; 
    }
};