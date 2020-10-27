public class Solution {
    public string CountAndSay(int n) {
        if(n==1)
            return "1";
        
        var r = CountAndSay(n-1);
        return CountAndSay(r);
    }
    public string CountAndSay(string n)
    {
        var result = new StringBuilder();
        if(n.Length == 1){
            return "1"+n;
        }
        int count =1;
        int i;
        for(i=1;i < n.Length;i++){
            if(n[i-1] == n[i]){
                count++;
            }else
            {
                result.Append(count.ToString());
                result.Append(n[i-1]);
                count = 1;
            }
        }
        if(i == n.Length){
            result.Append(count.ToString());
            result.Append(n[i-1]);
        }
        return result.ToString();
    }
}
