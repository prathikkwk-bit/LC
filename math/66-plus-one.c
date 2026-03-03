/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i,j;
    for(i=digitsSize-1;i>=0;i--)
    {
        if(digits[i]<9)
        {
            digits[i]++;
            *returnSize=digitsSize;  
            return digits;
                   
        }
        digits[i]=0;
    }
    int *temp=malloc((digitsSize+1)*sizeof(int));
    temp[0]=1;
    for(j=1;j<=digitsSize;j++)
    {
        temp[j]=0;
    }
   *returnSize=digitsSize+1;
    return temp;
    

}
