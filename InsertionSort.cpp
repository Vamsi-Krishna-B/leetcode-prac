#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void insertionSort(vector<int> nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 and nums[j - 1] > nums[j])
        {
            int temp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = temp;
            j--;
        }
    }
    for (int x : nums)
    {
        cout << x << " ";
    }
}
int main()
{

    insertionSort({14, 9, 15, 12, 6, 8, 13}, 7);
    return 0;
}