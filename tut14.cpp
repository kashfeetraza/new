#include<iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char favchar;
    float salary;
} ep;

union marks
{
    int mother;
    char father;
    float brother;
};


int main(){
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    // ep ali;
    // ali.eid = 1;
    // ali.eid = 2;
    // ali.favchar = 'c';
    // ali.salary = 1000;
    // cout<<ali.salary<<endl;
    // cout<<ali.eid<<endl;
    // cout<<ali.favchar<<endl;
    // cout<<rehman.eid<<endl;
    // union marks k1;
    // k1.father='z';
    // k1.mother=90;
    // k1.brother=90.90;
    // cout<<k1.brother<<endl;
    // cout<<k1.mother<<endl;

    return 0;
}