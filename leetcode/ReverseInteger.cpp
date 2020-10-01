class Solution {
public:
    int reverse(int x) {
        long num = 0;
        bool flag =true;
        if (x<0)
            flag =false;
        while(x!=0)
        {
            int rem = abs(x%10);
            num=(num*10)+rem;
            x/=10;
        }
        if(num >= INT_MIN && num <= INT_MAX){
        if(!flag)
            return (num*(-1));
        else 
            return num;
         }
        else 
            return 0;
        
    }
};
