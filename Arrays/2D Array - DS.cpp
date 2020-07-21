int hourglassSum(vector<vector<int>> arr) {
    vector<int> ans(4 * (arr.size() - 2), 0);
    int k = 0;
    for(int i = 1; i <= arr.size() - 2; i++){
        for(int j = 1; j <= arr[0].size() - 2; j++){
            ans[k] = arr[i][j] + arr[i - 1][j] + arr[i - 1][j - 1] + arr[i - 1][j + 1] + arr[i + 1][j] + arr[i + 1][j - 1] + arr[i + 1][j + 1];
        k++;

        }
    }
    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    return *max_element(ans.begin(), ans.end());
}
