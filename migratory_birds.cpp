int migratoryBirds(vector<int> arr)
{
    int mx = 0;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<std::pair<int, int>> a(n);
    for (int i = 0 ; i < n; i++)
    {
        auto lower = lower_bound(arr.begin(), arr.end(), arr[i]);
        auto upper = upper_bound(arr.begin(), arr.end(), arr[i]);
        auto g = upper - lower;
        if (g > mx)
            mx = g;
        a.push_back(make_pair(mx , arr[i]));
        i += g - 1;
    }
    sort(a.begin(), a.end());
    for (int i = a.size() - 1 ; i > 0; i--)
    {
        if (a[i].first == a[i - 1].first)
            continue;
        else
            return a[i].second;
    }

}