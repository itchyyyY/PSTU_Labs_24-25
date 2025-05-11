#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>

using namespace std;
using namespace filesystem;

vector<int> readNumbers(const path& file)
{
    ifstream fin(file);
    vector<int> numbers;
    int num;
    while (fin >> num)
    {
        numbers.push_back(num);
    }
    return numbers;
}

void writeNumbers(const path& file, const vector<int>& numbers)
{
    ofstream fout(file);
    for (int num : numbers)
    {
        fout << num << ' ';
    }
}

vector<vector<int>> splitIntoRuns(const vector<int>& numbers)
{
    vector<vector<int>> runs;
    if (numbers.empty()) return runs;

    vector<int> currentRun = { numbers[0] };
    for (size_t i = 1; i < numbers.size(); ++i)
    {
        if (numbers[i] >= numbers[i - 1])
        {
            currentRun.push_back(numbers[i]);
        }
        else
        {
            runs.push_back(currentRun);
            currentRun = { numbers[i] };
        }
    }
    runs.push_back(currentRun);
    return runs;
}

vector<int> mergeTwo(const vector<int>& a, const vector<int>& b)
{
    vector<int> result;
    size_t i = 0, j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            result.push_back(a[i++]);
        }
        else
        {
            result.push_back(b[j++]);
        }
    }

    while (i < a.size()) result.push_back(a[i++]);
    while (j < b.size()) result.push_back(b[j++]);

    return result;
}

void multiphaseSort(const path& input, const path& output)
{
    vector<int> numbers = readNumbers(input);
    if (numbers.empty()) return;

    vector<vector<int>> runs = splitIntoRuns(numbers);

    while (runs.size() > 1)
    {
        vector<vector<int>> newRuns;

        for (size_t i = 0; i < runs.size(); i += 2)
        {
            if (i + 1 < runs.size())
            {
                newRuns.push_back(mergeTwo(runs[i], runs[i + 1]));
            }
            else
            {
                newRuns.push_back(runs[i]);
            }
        }

        runs = newRuns;
    }

    if (!runs.empty())
    {
        writeNumbers(output, runs[0]);
    }
}

int main()
{
    path input = "input.txt";
    path output = "output.txt";

    writeNumbers(input, { 1728, 123, 73, 1,3, 14,2, 41, 41,4, 1421,4, 51, 3, 41, -1231, 9 });

    vector<int> before = readNumbers(input);
    for (int num : before) cout << num << ' ';
    cout << '\n';

    multiphaseSort(input, output);

    vector<int> after = readNumbers(output);
    for (int num : after) cout << num << ' ';
    cout << '\n';

    return 0;
}