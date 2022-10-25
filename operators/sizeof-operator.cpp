#include<iostream>
using namespace std;

int main() {

    int a = 1;
    float b = 1.1;
    bool c = true;
    char d = 'c';
    wchar_t e = L'd';
    double f = 12.232312;
    long g = 354324324423;
    long double h = 4545.454254235;


    cout<<"int size = "<<sizeof(a)<<endl;
    cout<<"float size = "<<sizeof(b)<<endl;
    cout<<"boolean size = "<<sizeof(c)<<endl;
    cout<<"character size = "<<sizeof(d)<<endl;
    cout<<"wide character size = "<<sizeof(e)<<endl;
    cout<<"double size = "<<sizeof(f)<<endl;
    cout<<"long size = "<<sizeof(g)<<endl;
    cout<<"double long size = "<<sizeof(h)<<endl;


 return 0;
}