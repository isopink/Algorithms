#include <bits/stdc++.h> 
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);

int arr[3];
   
for(int i = 0; i<3; i++)
   cin >> arr[i]; 

for(int i = 1; i<3; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }   

for(int i =0; i<3; i++)
{
    cout << arr[i] << " ";
}

}