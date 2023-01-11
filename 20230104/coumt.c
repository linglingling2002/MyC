#include <stdio.h>
int main(){
    int p_num;
    int count = 0;
    int last_count = 0;
    int idx_i = 0;
    int fortune = 0;
    int arr[100];
    scanf("%d", &p_num);

    for(int i  = 0;i < 100; i++){
        arr[i] = 0;
    }
    for(int i  = 0;i < p_num; i++){
        arr[i] = 1;
    }
    while (last_count != 1){
        if(arr[idx_i] == 1){
            count++;
            if(count == 3){
                count = 1;
                arr[idx_i] = 0;
            }
            idx_i++;
            if(idx_i == p_num){
                idx_i = 0;
            }
        }
        for(int idy_i = 0;idy_i < p_num;idy_i++){
            if(arr[idy_i] == 1){
                last_count++;
                fortune = idy_i;
            }
        }
        if(last_count == 1){
            break;
        }
        last_count = 0;
    }
    printf("The last people is %d\n", fortune);
    return 0;
}