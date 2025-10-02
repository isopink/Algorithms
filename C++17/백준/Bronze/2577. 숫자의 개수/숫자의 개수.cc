#include <bits/stdc++.h> 
using namespace std;

int main()
{   
ios::sync_with_stdio(false);
    cin.tie(0);

int arr[10];
fill(arr, arr+10, 0);

long long a,b,c;
cin >> a >> b >> c;

long long result = a*b*c;
string s = to_string(result);

for(int i =0; i < s.length(); i++)
    {
        arr[s[i]-'0']++;
    }

for(int i = 0; i<10; i++)
{
    cout << arr[i] << "\n";
}
}
