#include <iostream>
#include <unistd.h>

void printBlank(){
    for(int i = 0; i < 20; i++){
        std::cout << std::endl;
    }
}

void printLine(int head, int tail){
    for(int i = 0; i < head; i++){
        std::cout << " ";
    }
    for(int i = head; i < tail; i++){
        std::cout << "*";
    }
    std::cout << std::endl;
}

int main(){
    time_t time;
    int j = 0;
    for(int i = 0; i < 30; i++){
        j++;
        printBlank();
        if(j < 5){
            printLine(0, j);
        }else{
            printLine(j - 5, j);
        }
        sleep(1);
    }
    return 0;
}