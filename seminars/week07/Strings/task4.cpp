#include <iostream>

const int MAX_SIZE = 1024;

int findSubstr(char str[], std::size_t size, int k)
{
    int len = 0;
    int i = 0;
    int cnt = 0;
    while (i < size)
    {
        bool visited[256];
        int j = i;
        while (j < size && visited[str[j]] == false && len != k)
        {
            ++len;
            ++j;
        }
        if (len == k)
        {
            ++cnt;
            len = 0;
        }
        
        visited[str[i]] = false;
        ++i;
    }

    return cnt;
}

int main()
{
    int k;
    int size;
    char str[MAX_SIZE];
    std::cout << "Enter the size of the string: ";
    std::cin >> size;
    std::cin.ignore();
    std::cout << "Enter the string: ";
    std::cin.getline(str, size + 1);
    std::cout << "Enter k: ";
    std::cin >> k;
    std::cout << findSubstr(str, size, k);

    return 0;
}