class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int temp=0;
        int num=x;
        int a=0;
        while(num>0){
            a=num%10;
            temp=temp*10+a;
            num=num/10;
        }
        
        
        if(temp==x){
            return true;
            
        }
        else
            return false;
    }
};