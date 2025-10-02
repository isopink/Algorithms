#include <bits/stdc++.h> 
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);

    string word; 
    int a[26]; 
    fill(a, a+26, 0);

    cin >> word; 
    int len = word.length();

    for(int i = 0; i < len; i++){
        int k = word[i]-97;
        a[k] = a[k] + 1; 
    }

    for(int i = 0; i < 26; i++){
        cout << a[i] << ' ';
    }

}