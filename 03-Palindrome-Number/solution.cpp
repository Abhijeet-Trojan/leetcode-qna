class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long int reverserNum = 0;

        while(temp > 0){
            int lastDigit = temp%10;
            reverserNum = (reverserNum*10) + lastDigit;
            temp = temp/10;
        }

        if(x == reverserNum){
            return true;
        }
        else{
            return false;
        }
    }
};