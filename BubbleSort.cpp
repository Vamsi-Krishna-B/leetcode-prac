#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void BubbleSort(vector<int> nums, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] > nums[j + 1])
            {

                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (int x : nums)
    {
        cout << x << " ";
    }
}
int main()
{
    BubbleSort({13, 46, 24, 52, 20, 9}, 6);
    return 0;
}