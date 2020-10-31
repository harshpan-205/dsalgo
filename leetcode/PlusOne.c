int* plusOne(int* digits, int digitsSize, int* returnSize){
    if(digitsSize==1)
    {
        if(digits[0]>=0 && digits[0]<=8)
        {
            digits[0]++;
            *returnSize=digitsSize;
            int *ret=(int *)malloc(*returnSize * sizeof(int));
            ret[0]=digits[0];
            return ret;
        }
        else
        {
            *returnSize=digitsSize+1;
            int *ret=(int *)malloc(*returnSize * sizeof(int));
            ret[0]=1;
            ret[1]=0;
            return ret;

        }
    }
    else
    {
        int temp=0;
        for(int j=0;j<digitsSize;j++)
        {
            if(digits[j]==9)
                temp++;
        }
        if(temp==digitsSize)
        {
            *returnSize=digitsSize+1;
            int *ret=(int *)malloc(*returnSize * sizeof(int));
            for(int k=1;k<=digitsSize;k++)
            {
                ret[k]=0;
            }
            ret[0]=1;
            return ret;
        }
        else
        {
            if(digits[digitsSize-1]==9)
            {
                int l=digitsSize-1;
                while(digits[l]==9)
                {
                    digits[l]=0;
                    l--;
                }
                digits[l]++;
                *returnSize=digitsSize;
                int *ret=(int *)malloc(*returnSize * sizeof(int));
                for(int i=0;i<digitsSize;i++)
                {
                    ret[i]=digits[i];
                }
                return ret;
            }
        
            if(digits[digitsSize-1]!=9)
                {
                    digits[digitsSize-1]++;
                    *returnSize=digitsSize;
                    int *ret=(int *)malloc(*returnSize * sizeof(int));
                    for(int i=0;i<digitsSize;i++)
                    {
                        ret[i]=digits[i];
                    }
                    return ret;
                }
        }
    }
    return returnSize;
}
