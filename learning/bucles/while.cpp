//
//  while.cpp
//  learning
//
//  Created by Paul Veliz on 04/08/24.
//

#include <iostream>

int main(){
    
//    int i = 0;
//    
//    while(i <= 10){
//        std::cout << "Num " << i << std::endl;
//        i++;
//    }
//    
//    int y;
//    
//    for(y = 1; y <= 10; y++ ){
//        std::cout << "NumFor " << y << std::endl;
//    }
//    
//    for(int x = 1; x <= 10; x++){
//        std::cout << "NumFor2 " << x << std::endl;
//    }
//    
//    int numLst[] = {8,7,6,5,4,3,2,1};
//    
//    for(int r = 0; r <= (sizeof(numLst) / sizeof(numLst[0]) ) - 1; r++){
//        std::cout << r <<".Number In Array: " << numLst[r] << "\n";
//    }
    
    
    
    int numbers[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {11,12,13,14}
    };
    
    for(int i =0; i <= (sizeof(numbers) / sizeof(numbers[0]) ) - 1; i++){
        for(int x = 0; x <= (sizeof(numbers[x]) / sizeof(numbers[x][0]) ) - 1; x++ ){
            std::cout << "Array #" << i+1 << " Value: " << numbers[i][x] << std::endl;
        }
    }
    
    
    
    return 0;
}

