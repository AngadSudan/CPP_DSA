#include <bits/stdc++.h>
using namespace std;

class Car {
    string model;
    string carNumber;
    string color;

    void drive(){
        cout<<"driving car"<<endl;
    }

    void stop(){
        cout<<"stopping car"<<endl;
    }
};


class Computer {
    int ram;
    int storage;
    string CpuType;
    string softwares[];

    void installSoftware(){}
    void removeSoftware(){}
    void unlock(){}
    void display(){}
};