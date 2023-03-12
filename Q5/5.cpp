#include <bits/stdc++.h>
using namespace std;

int main()
{
   

#ifndef ONLINE_JUDGE
    freopen("input5large.txt", "r", stdin);
    freopen("output5large.txt", "w", stdout);
#endif


    //testcase of the Question
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int N, D;
        cin >> N >> D;

        int maximum_Plantation = (N * 0.4) - 1;
        long long total_Income = 0;
        int remaining_Trees = N;

         vector<int> tIncome;
        vector<vector<int>> tData = {
            {12000, 10},
            {10000, 6},
            {27500, 15},
            {7500, 5},
            {8000, 15}};

        

        for (auto it : tData)
        {
            long long income = it[0] * (D / it[1]);
            tIncome.push_back(income);
        }

        sort(tIncome.begin(), tIncome.end(), greater<int>());

        for (auto it : tIncome)
        {
            total_Income += it;
            remaining_Trees--;
        }

        int index = 0;

        while (remaining_Trees > 0)
        {
            if (remaining_Trees > maximum_Plantation)
            {
                total_Income += (tIncome[index] * maximum_Plantation);
                remaining_Trees -= maximum_Plantation;
            }
            else
            {
                total_Income += (tIncome[index] * remaining_Trees);
                remaining_Trees = 0;
                break;
            }
            index++;
        }
        cout << "Case #" << (i + 1) << ": " << total_Income << endl;
    }
    return 0;
}