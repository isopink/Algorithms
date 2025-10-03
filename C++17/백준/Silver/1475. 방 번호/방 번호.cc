#include <bits/stdc++.h> 
using namespace std;

int main()
{   
ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[10] ={0};
    string s; 

    cin >> s; 

    for(int i = 0; i<s.length(); i++)
        {
            arr[s[i]-'0']++;
        }

    int key = (arr[6]+arr[9]+1)/2;
    
    for(int i = 0; i<10; i++)
        {
            if(i==6 || i==9)continue;
            key = max(key, arr[i]);
        
        }

        cout << key;
    }