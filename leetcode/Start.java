public int mySqrt(int x) {
        
        // https://en.wikipedia.org/wiki/Fast_inverse_square_root
        float threehalfs = 1.5F;
        float x2 = x * 0.5F;
        float y = x;
        int i = Float.floatToRawIntBits(y);
        i = 0x5f3759df - (i >> 1);       
        y = Float.intBitsToFloat(i);
        y = y * (threehalfs - (x2 * y * y));
        y  = y * ( threehalfs - ( x2 * y * y ) ); 
        long r =(long)(1.0f/y);
        long sq = r * r;
        if(sq < x){
            r++;
            sq =  r * r;
        }
        if(sq > x){
            r--;
        }        
        return (int)r;
    }
