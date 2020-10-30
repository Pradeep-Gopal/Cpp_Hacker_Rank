#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
class Box{
public:
    Box(const Box &source){
        l_ = source.l_;
        b_ = source.b_;
        h_ = source.h_;
    }
    Box(int l = 0, int b = 0, int h = 0):l_{l}, b_{b}, h_{h}{}
    int getLength()
    {
        return l_;
    }
    int getBreadth()
    {
        return b_;
    }
    int getHeight()
    {
        return h_;
    }
    int CalculateVolume()
    {
        return l_*b_*h_;
    }

private:
    int l_,b_,h_;
};

bool operator < (Box &A, Box &B)
{
    int A_l, B_l, A_h, B_h, A_b, B_b;
    A_l = A.getLength();
    B_l = B.getLength();
    A_b = A.getBreadth();
    B_b = B.getBreadth();
    A_h = A.getHeight();
    B_h = B.getHeight();
    if(A_l < B_l)
    {
        if((A_b < B_b) &&(A_l == B_l))
        {
            if((A_h < B_h) && (A_b == B_b) && (A_l == B_l))
            {
                return true;
            }
        }
    }
    return false;
}

ostream& operator << (ostream& out, Box &B)
{
    int B_l, B_b, B_h;
    B_l = B.getLength();
    B_b = B.getBreadth();
    B_h = B.getHeight();
    char ch = ' ';
    out << B_l << ch << B_b << ch << B_h;
    return out;
}


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}