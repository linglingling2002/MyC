#include <stdio.h>
int judge(int number){     //judge every number how many 9
    int temp = 0;
    int count = 0;
    while(number != 0){
        temp = number % 10;
        if(temp == 9){
            count++;
        }
        number = number / 10;
    }
    return count;
}
int fun(int a){         //1 - a judge every number
    int count = 0;
    for(int num = 1; num <= a; num++){
        count = count + judge(num);
    }
    return count;
}
int main(){
    int num = 0;
    scanf("%d", &num);

    printf("1 - %d have %d 9\n", num, fun(num));
    return 0;
}