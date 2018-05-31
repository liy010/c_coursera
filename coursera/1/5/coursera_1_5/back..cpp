/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   back..cpp
 * Author: ly
 *
 * Created on 2018年5月16日, 下午2:02
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int n, a[n], b[n];
    cout << "输如整数的个数：" <<endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>a[n-i-1];
        //cout <<a[i]<<endl;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }
    return 0;
}

