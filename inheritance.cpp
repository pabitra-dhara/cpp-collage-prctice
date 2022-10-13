//singel inheritance//
#include <iostream>

using namespace std;

class a{
    int roll;
    char name[10];
    public:
    void getdata(){

           cin>>roll;   
            cin>>name; 
    }
    void putdata(){
                cout<<roll;
        cout<<name;
    }
};
class b:public a{
    int mark;
    char gender[1];
    public:
    void indata(){
        cin>>mark;
        cin>>gender;
    }
    void output(){
        cout<<mark;
        cout<<gender;
    }
};
int main(){
    b bb;
    bb.getdata();
   

    bb.indata();

    bb.output(); 
    bb.putdata();
    return 0;
}

//multilevel inheritance//

#include <iostream>

using namespace std;

class a{
    int id;
    public:
    void getdata();
    void outdata();
};
void a::getdata(){
    cin>>id;
}
void a::outdata(){
    cout<<id<<endl;
}


class b:public a{
    char name[10];
    public:
    void indata();
    void putdata();
};
void b::indata(){
    cin>>name;
    
}
void b::putdata(){
    cout<<name<<endl;
}

class c:public b{
    int mark;
    public:
    void dadata();
    void prindata();
};
void c::dadata(){
    cin>>mark;
    
}
void c::prindata(){
    cout<<mark<<endl;
}

int main(){
    c cc;
    cc.getdata();
    cc.indata();
    cc.dadata();
    
    cc.outdata();
    cc.putdata();
    cc.prindata();
    return 0;
}

//emp information using multiple inheritance//
#include <iostream>
using namespace std;
class a{
    int emp_id;
    public:
    void getdata();
    void putdata();
};
void a::getdata(){
    cin>>emp_id;
}
void a::putdata(){
    cout<<emp_id;
}

class b{
    char name[10];
    public:
    void indata();
    void outdata();
};
void b::indata(){
    cin>>name;
}
void b::outdata(){
    cout<<name;
};

class c:public a,public b{
    int mark;
    public:
    void idata();
    void odata();
};
void c::idata(){
    cin>>mark;
    
}
void c::odata(){
    cout<<mark;
}


int main(){
    c cc;
    cc.getdata();
    cc.indata();
    cc.idata();
    
    cc.putdata();
    cc.outdata();
    cc.odata();
    return 0;
}


//hierarchical inheritance to get square and cube of a number//
#include<iostream>
using namespace std;
class number{
    int num;
    public:
    void getdata(){
    cout<<"Enter A Number:";
    cin>>num;
    }
    int returnNum(){
        return num;
    }
};

//find squara//
class square:public number{
    public:
    int returnS(){
    int squNum=returnNum();
    int squ=squNum*squNum;
        return squ;
    }
};

//find cube//
class cubes:public number{
    public:
    int returnQ(){
    int qNum=returnNum();
   int cube=qNum*qNum*qNum;
        return cube;
    }
};

int main(){
    square ss;
    cubes cc;

    ss.getdata();
    int squ=ss.returnS();
    cout<<"Square:"<<squ;

    cc.getdata();
    int cub=cc.returnQ();
    cout<<"Cube:"<<cub;
return 0;
}

