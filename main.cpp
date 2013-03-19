#include <iostream>

using namespace std;


class  base
{
    int x,y;
   public:
    void get()
    {
       cout<<"Enter two values:";
       cin>>x>>y;
    }
    friend float mean(base ob);
};
float mean(base ob)
{
   return float(ob.x+ob.y)/2;
}

int main()
{
base ob1;
    ob1.get();
    cout<<"\n Mean value is : "<<mean(ob1);
}
