/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    //配置大小為numsSize的空間存放要回傳的值
    int* returnNums = malloc( numsSize * sizeof(int) );
    //由0~numsSize依序調用
    for(int i=0; i<numsSize; i++){
        //取出nums內的數值當作nums array的索引，存放至returnNums中
        returnNums[i] = nums[nums[i]];
    }
    //設定returnSize的總數用於外部調用
    *returnSize = numsSize;
     //回傳結果
    return returnNums;
}


