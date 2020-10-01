var reverse = function(x) {
   const MAX_INTEGER = Math.pow(2,31);
    let isNegative = false;
    if(x < 0) {
        isNegative = true;
        x = x * (-1);
    }
    
    let reversedInteger = 0;
    while(x > 0) {
        reversedInteger = (reversedInteger * 10) + (x % 10);
        x = Math.floor(x / 10);
    }
    
    if(reversedInteger > MAX_INTEGER) {
        return 0;
    }
    if(isNegative) {
        return -reversedInteger;
    }

    return reversedInteger;
};
