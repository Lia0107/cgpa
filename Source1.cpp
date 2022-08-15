#include<iostream>
#include <string>
using namespace std;

int CgpaCal(int n)
{
    int grade[10000];
    int cgpa, sum = 0;
    float marks[10] = { 70,80,88,75,56,90,81,66,70,93 };
    for (int i = 0;i < n;i++)
    {
        grade[i] = marks[i] / 10;
    }
    for (int i = 0;i < n;i++)
    {
        sum += grade[i];
    }
    cgpa = sum / n;
    return cgpa;
}
int main(void)
{
    int cgmark;
    float markss[10] = { 70,80,88,75,56,90,81,66,70,93 };
    int n = 10;
    cout << "How many course marks u want to enter: ";
    cin >> n;
    cgmark = CgpaCal(n);
    cout << "The cgpa of yours is: " << cgmark;
    cout << "\nHere is your marks: ";
    for (int k = 0;k < 10;k++)
    {
        cout << "|" << markss[k];
    }



}