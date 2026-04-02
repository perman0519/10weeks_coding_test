#include <bits/stdc++.h>

using namespace std;

int n;

vector<string> ret;

bool com(string &a, string &b) {
    if (a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i])
                return a[i] < b[i];
        }
    }
    else {
        return a.size() < b.size();
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    string str;
    ret.clear();
    while(n--) {
        cin >> str;
        bool first = true;
        string b = "";
        bool last = false;
        for (char c : str) {
            if(isdigit(c)) {
                if (b == "0")
                    b = c;
                else {
                    b += c;
                }
                first = false;
                last = true;
            }
            else {
                first = true;
                if (last)
                    ret.push_back(b);
                b = "";
                last = false;
            }
        }
        if (last)
            ret.push_back(b);
    }
    sort(ret.begin(), ret.end(), com);
    for (auto t : ret) {
        cout << t << '\n';
    }
}
