#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

using namespace std;


int main(int argc, char const *argv[])
{
    auto start = chrono::high_resolution_clock::now();
    //计算pi的值
    double pi = 0;
    long long n = 10000000000;
    for (long long i = 0; i < n; i++)
    {
        pi += (i % 2 == 0 ? 1 : -1) * 1.0 / (2 * i + 1);
    }
    pi *= 4;
    cout << pi << endl;
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    cout << "程序运行时间: " << duration << " 毫秒" << std::endl;
    return 0;
}
