#include<iostream>
using namespace std;
void list()
{
    cout<<"======================"<<endl;
    cout<<"enter 1 for additon.."<<endl;
    cout<<"enter 2 for substraction.."<<endl;
    cout<<"enter 3 for multiplication.."<<endl;
    cout<<"enter 4 for division.."<<endl;
    cout<<"enter 5 for modulus.."<<endl;
    cout<<endl<<"======================"<<endl;
}
int main()
{
    float n1,n2;
    int op;
    list();
    cout<<"enter your choice above list.."<<endl;
    cin>>op;
    cout<<"enter n1 and n2 of your choice:"<<endl;
    cin>>n1>>n2;
    switch(op)
    {
        case 1:
            cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;
        case 2:
            cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;
        case 3:
            cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;
        case 4:
            cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;
        default:
            cout<<"wrong choice please try again..."<<endl;
        break;
    }
    return 0;
}
