#include <stdio.h>
int fun(int a){
    int count = 0;
    int num = 0;
    int temp = 0;
    for(int num_count = 1; num_count <= a; num_count++){
        num = num_count;
        while(num != 0){
            temp = num % 10;
            if(temp == 9){
                count++;
            }
            num = num / 10;
        }
    }
    return count;
}
int main(){
    int num = 0;
    scanf("%d", &num);

    printf("1 - %d have %d 9\n", num, fun(num));
    return 0;
}