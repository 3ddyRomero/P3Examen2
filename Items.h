#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
#include <string>

using namespace std;

class Items{
    private:
	    int Object,x,y;
        
    public:
        Items();
        Items(int,int,int);
        
        int getObject();
        void setObject(int);

        int getX();
        void setX(int);
	
        int getY();
        void setY(int);
	
    virtual string toString();

    ~Items();


};
#endif