#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int leftStart, int leftEnd, int rightStart, int rightEnd){
    int length = rightEnd - leftStart;
    std::vector<int> temp(length);
    int i = leftStart;
    int j = rightStart;
    int k = 0;

    while(i < leftEnd && j < rightEnd){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i < leftEnd){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j < rightEnd){
        temp[k] = arr[j];
        k++;
        j++;
    }
    for(i = 0; i < length; i++){
        arr[i + leftStart] = temp[i];
    }
}

void sortMerge(std::vector<int>& arr, int start, int end){
    if(end - start < 2){
        return;
    }
    int mid = (end + start) / 2;
    sortMerge(arr, start, mid);
    sortMerge(arr, mid, end);
    merge(arr, start, mid, mid, end);
}

void sort(std::vector<int>& arr){
    sortMerge(arr, 0, arr.size());
}

int main(){
    std::vector<int> num = {3, 7, 11, 2, 76, 0, 15, 53, 19, 8};
    sort(num);
    for(int i = 0; i < num.size(); i++){
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}