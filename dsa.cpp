#include <bits/stdc++.h>
#define faster(); ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long
 
using namespace std;

void reverseSubstring(string& s, int start, int end)
{
    for (int i = start; i < (end + start) / 2; i++)
    {
        swap(s[i], s[end - i - 1]);
    }
}

int main()
{
     faster();
     string s;
     int q;
     getline(cin, s);
     cin >> q;
     for (int i = 0; i < q; i++)
     {
          int q_i;
          cin >> q_i;
          reverseSubstring(s, q_i - 1, s.size() - q_i);
     }
     cout << s << endl;
     return 0;
}