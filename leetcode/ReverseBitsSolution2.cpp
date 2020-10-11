class Solution2 {
 public:
  uint32_t recur(uint32_t n, int count){
      if(!n) return 0;
      return ((n & 1) << count) + recur(n >> 1, count - 1);
  }

  uint32_t reverseBits(uint32_t n) {
      return recur(n, 31);
  }
};
