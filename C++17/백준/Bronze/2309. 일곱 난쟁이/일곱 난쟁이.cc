#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[9];
    int sum = 0;
    for(int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    int key1, key2;
    bool found = false;
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 9; j++) {
            if(sum - arr[i] - arr[j] == 100) {
                key1 = i;
                key2 = j;
                found = true;
                break;
            }
        }
        if(found) break;
    }

    // 남은 7개만 따로 담기
    int newArr[7], idx = 0;
    for(int i = 0; i < 9; i++) {
        if(i != key1 && i != key2) {
            newArr[idx++] = arr[i];
        }
    }

  
    for(int i = 1; i < 7; i++) {
        int temp = newArr[i];
        int j = i - 1;
        while(j >= 0 && newArr[j] > temp) {
            newArr[j+1] = newArr[j];
            j--;
        }
        newArr[j+1] = temp;
    }


    for(int i = 0; i < 7; i++) {
        cout << newArr[i] << "\n";
    }
}