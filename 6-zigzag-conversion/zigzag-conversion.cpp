class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size()){
            return s;
        }
        string ans;
        int n = s.size();
        int addup = 2 * (numRows - 1);

        for(int i = 0; i < numRows; i++){
            int index = i;
            while(index < n){
                ans += s[index];
                if(i != 0 && i != numRows - 1){
                    int charbtw = addup - 2 * i;
                    int secondindex = index + charbtw;
                    if(secondindex < n){
                        ans += s[secondindex];
                    }
                }

                index += addup;
            }
        }

        return ans;
    }
};