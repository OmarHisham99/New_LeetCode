class Solution {
public:
    bool winnerOfGame(string colors) {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        if(colors.length() < 2) return false; 
        int alice = 0; 
        int bob =0 ;
        for(int i=0;i<colors.length()-2;i++){
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A'){
                alice++; 
            }
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B'){
                bob++; 
            }
        }
        return alice > bob ? true : false ;
    }
};