#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> v;
    int t;
    cin >> t;
    //   int arr[t][3];
    for (int i = 0; i < t; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 3; j++)
        {
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int k;
    for (int i = k = 0; i < t; i++)
    {
        if (v[i][0] != v[k][0])
        {
            std::sort(v.begin() + k, v.begin() + i,
                      [](const std::vector<int> &a, const std::vector<int> &b)
                      {
                          return a[1] > b[1];
                      });
            k = i;
        }
    }
    

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
