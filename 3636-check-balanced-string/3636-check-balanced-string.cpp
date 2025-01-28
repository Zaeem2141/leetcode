class Solution {
public:
    bool isBalanced(string num) {
        int sum=0, len=num.size();
        for(int i=1 ; i< len; i+=2){
          sum+=num[i]-'0';
          sum-=num[i-1]-'0';
        }
        if(len %2 != 0){
          sum-=num[len-1]-'0';
        }
        return sum==0;
    }
};