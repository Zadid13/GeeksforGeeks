#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int digitSum = 0;
        for (auto u : s)
        {
            digitSum += (u - '0');
        }

        string str = to_string(digitSum);
        string tmp = str;
        reverse(tmp.begin(), tmp.end());
        if (tmp == str)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}







//GFG Format
/*#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int t;
        cin >> t;
        while (t--) {
            string s;
            cin >> s;
            int digitSum = 0;
            for (auto u : s) {
                digitSum += (u - '0');
            }
            string str = to_string(digitSum);
            string tmp = str;
            reverse(tmp.begin(), tmp.end());
            if (tmp == str) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Solution obj;
    obj.solve();

    return 0;
}
*/
