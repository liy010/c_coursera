#include <iostream>
using namespace std;

int main() {
    int n;
    int id[100];
    double rate[100]; //双精度浮点数

    cin >>n;
    for (int i = 0; i < n; i++) {
        int initial, final;
        cin >> id[i] >> initial >> final;
        rate[i] = (double)final / initial;
    }

    for (int i = 0; i < n; i++) {   //这个算法是从高往低排序（降序）， 而且是晓得数最先排
        for (int j = 0; j < n - i - 1; j++) {
            if (rate[j + 1] > rate[j]) {
                int tmpId = id[j];
                id[j + 1] = tmpId;
                double tmpRate = rate[j]; // rate[j]为浮点数， tmpRate也要定义为浮点数
                rate[j] = rate[j + 1];
                rate[j + 1] = tmpRate;
            }
        }
    }

    // 记录最大的差， 相同组的差值肯定小于不同组的差值， 记录差值最大的那两个数的一个索引，就能对整个细菌排序
    double maxDiff = 0;
    int maxDiffIndex = 0;
    for (int i = 0; i < n - 1; i++) {
        double diff = rate[i] - rate[i + 1];
        if (maxDiff < diff) {
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }

    cout << maxDiffIndex + 1 << endl;
    for (int i = maxDiffIndex; i >= 0; i--) {
        cout << id[i] << endl;
    }

    cout << n - maxDiffIndex - 1 << endl;
    for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
        cout << id[i] << endl;
    }
    return 0;
}