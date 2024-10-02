 for(int i = 0; i < 10; i++){

        int key = numbers[i];

        for(int j = i - 1; j = 9 - i; j--){

            if(j >= 0 && numbers[j] > key){

                tempNum = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tempNum; 
                j--;
            }
        }
    }