#include<bits/stdc++.h>
using namespace std;
template <typename T, typename V>

class Pair{
    T x;
    V y;

    public :

    void setX(T x){
        this->x = x;
    }

    T getX(){
        return this->x;
    }

    void setY(V y){
        this->y = y;
    }

    V getY(){
        return this->y;
    }
};

int main(){
    Pair<char,int> p1;
    p1.setX('A');
    p1.setY(65);

    cout << p1.getX() << " " << p1.getY() << endl;

    Pair<string,int> p2;
    p2.setX("ABC");
    p2.setY(123);

    cout << p2.getX() << " " << p2.getY() << endl;
    return 0;
}