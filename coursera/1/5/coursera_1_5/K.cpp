/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   K.cpp
 * Author: ly
 *
 * Created on 2018年5月29日, 下午5:11
 */

#include <iostream>
using namespace std;

int main() {
    int n, k, a[n];
    cin >> n;
    cin >> k;
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n - 1; j++){
            int tmp = 0;
            if (a[i] < a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
    cout << a[k-1] <<endl;
    return 0;
}
