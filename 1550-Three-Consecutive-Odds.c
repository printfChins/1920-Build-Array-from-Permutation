bool threeConsecutiveOdds(int* arr, int arrSize) {
    int oddCount = 0;           //宣告一個奇數計數器oddCount
    for(int i=0; i<arrSize; i++){
        if(arr[i] % 2){         //當arr[i]的數值對2取餘數時為1(該值為偶數)
            oddCount++;         //計數器+1
            if(oddCount == 3)   //當計數器為3表示連續三數為奇數，回傳true
                return true;
        }else{
            oddCount = 0;       //當arr[i]該次不是奇數就歸零計數
        }
    }
    return false;
}