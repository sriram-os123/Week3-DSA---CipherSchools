#include <iostream>
using namespace std;

class Coordinate
{
    public:
    float a;
    float b;
    float c;
    
    public:
    
    Coordinate operator+(Coordinate const & obj)
    {
        Coordinate z;
        z.a = this->a + obj.a;
        z.b = this->b + obj.b;
        z.c = this->c + obj.c;
        
        return z;
    }
    void sqdistancefromcoordinate(float a){
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-a)*(this->b-a);
        cout<<dist;
    }
    void sqdistancefromcoordinate(float a, float b){
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist;
    }
    void sqdistancefromcoordinate(float a, float b,float c){
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b) + (this->c-c)*(this->c-c);
        cout<<dist<<endl;
        cout<<"The third function is used"<<endl;
    }
};
int main(){
    
    Coordinate x;
    x.a = 3;
    x.b = 4;
    x.c = 5;
    
    Coordinate y;
    
    y.a = 6;
    y.b = 7;
    y.c = 8;
    
    Coordinate z;
    
    z = x+y;
    
    cout<<"The coordinates after addition are "<<z.a<<" "<<z.b<<" "<<z.c;
    // x.sqdistancefromcoordinate(0,0);
   return 0;
}
