#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int count_t[201];

int main()
{
    int n, i;
    ifstream file_in("input.txt");
    ofstream file_out("output.txt");
    file_in >> n;
    for (i = 0; i < n; i++)
    {
        int temp;
        file_in >> temp;
        count_t[temp + 100]++;
    }

    for (i = 0; i < 201; i++)
        for (int j = 0; j < count_t[i]; j++)
            file_out << i - 100 << " ";

    return 0;
}
