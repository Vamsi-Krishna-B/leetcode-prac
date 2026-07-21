#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> selection_sort(vector<int> nums, int n)
{
    int mini = 0;
    for (int i = 0; i < n - 1; i++)
    {
        mini = i;
        for (int j = i; j < n; j++)
        {
            if (nums[j] < nums[mini])
                mini = j;
        }
        int temp = nums[mini];
        nums[mini] = nums[i];
        nums[i] = temp;
    }
    return nums;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> sorted = selection_sort(arr, n);
    for (int x : sorted)
        cout << x << " ";
    return 0;
}