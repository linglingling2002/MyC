#include <iostream>
#include <vector>

int merge(std::vector<int>& arr, int left, int right){
    int pos = arr[left];
    while(left < right){
        while(left < right && pos <= arr[right]){
            right--;
        }
        arr[left] = arr[right];
        while(left < right && pos >= arr[left]){
            left++;
        }
        arr[right] = arr[left];
    }
    arr[left] = pos;
    return left;
}

void quickSort(std::vector<int>& arr, int left, int right){
    if(left < right){
        int mid = merge(arr, left, right);
        quickSort(arr, left, mid - 1);
        quickSort(arr, mid + 1, right);
    }
}

void sort(std::vector<int>& arr){
    quickSort(arr, 0, arr.size() - 1);
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