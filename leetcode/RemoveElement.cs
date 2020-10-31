public class Solution {
public int RemoveElement(int[] nums, int val) {
int counter = 0;
if (val>=0 && val<= 100){
for(int i = 0 ; i <nums.Length; i++){
if (nums[i] >= 0 && nums[i] <= 100){
if(nums[i]!=val){
nums[counter]= nums[i];
counter ++;
}

                 }
            }
       }
    Array.Resize(ref nums, counter);
    return nums.Length;
}
}
