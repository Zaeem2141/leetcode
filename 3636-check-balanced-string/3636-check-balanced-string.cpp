class Solution {
public:
    bool isBalanced(string num) {
        int sum=0;
        for(int i=1 ; i< num.size(); i+=2){
          sum+=num[i]-'0';
          sum-=num[i-1]-'0';
        }
        if(num.size() %2 != 0){
          sum-=num[num.size()-1]-'0';
        }
        return sum==0;
    }
};