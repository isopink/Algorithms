#include <bits/stdc++.h> 
using namespace std;

int main()
{   
ios::sync_with_stdio(false);
    cin.tie(0);

    int num,k;
    int room = 0;
    int arr[2][6] = {0}; 

    cin >> num >> k;
    
    for(int i =0; i<num; i++)
        {
            int a,b;
            cin >> a >> b;
            arr[a][b-1]++;
        }
    for(int i =0; i<2; i++)
    {
        for(int j = 0; j<6; j++)
        {
            room += arr[i][j]/k + arr[i][j]%k;
        }
    }

        cout << room; 
}
