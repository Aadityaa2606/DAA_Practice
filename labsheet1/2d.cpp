#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cout << "Enter the number of numbers: ";
    cin >> n;
    cout << "Enter the elements one by one" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
            count++;
    }

    for (int i = 0; i < count / 2; i++)
    {
        int temp = nums[i];
        nums[i] = nums[count - i - 1];
        nums[count - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
}