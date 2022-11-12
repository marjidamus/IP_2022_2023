#include <iostream>

const int MAX_SIZE = 100;
void input(int arr[], std::size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

void findSubArr(int arr[], std::size_t size)
{
    int cnt = 0;
    int maxCnt = 0;
    int startPos = 0;
    int maxStartPos = 0;
    int finPos = 0;
    int maxFinPos = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < arr[i + 1])
        {
            cnt = 0;
            startPos = i;
            while (arr[i] < arr[i + 1])
            {
                cnt++;
                ++i;
            }
            finPos = i;
            if (maxCnt < cnt)
            {
                maxCnt = cnt;
                maxStartPos = startPos;
                maxFinPos = finPos;
            }
        }
    }

    for (int i = maxStartPos; i < maxFinPos; ++i)
    {
        std::cout<< arr[i]<<" ";
    }
}

int main()
{
    int n;
    int arr[MAX_SIZE];
    std::cout << "Enter the number of the elements: ";
    std::cin >> n;

    input(arr, n);
    findSubArr(arr, n);

    return 0;
}
