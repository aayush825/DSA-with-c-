#include <bits/stdc++.h>
using namespace std;
//this work for unsorted arrays too
vector<int> Findunion(int arr1[], int arr2[], int n, int m)
{
    //set store unique elements therfore we push the value of both arrays in set then we print it
    set<int> s;

    vector<int> Union;
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]);

    for (int i = 0; i < m; i++)
        s.insert(arr2[i]);

    for (auto &it : s)
        Union.push_back(it);

    return Union;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    vector<int> Union = Findunion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}