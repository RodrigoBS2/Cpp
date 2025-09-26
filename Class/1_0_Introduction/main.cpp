#include<iostream>
using namespace std;


// Class A -----------------------------------------------------------------------
class A{
    
    public:
    A(){
        cout<<"\n\nClass A. Objet origin"<< "\n\n";
    }
    int Num_public_A;
    void Function_public_A(int pb, int pv);

    private:
    int Num_private_A;
    void Function_private_A(int pv);
};

void A::Function_public_A(int pb, int pv){
    Num_public_A = pb;
    cout<<"\nClass A public value "<<Num_public_A<<"\n";
    Function_private_A(pv);    
    
}
void A::Function_private_A(int pv){
     Num_private_A = pv;
     cout<<"\nClass A private value "<<Num_private_A<<"\n\n\n" ;
}
// ---------------------------------------------------------------------------

//Inheritance ---------------------------------------------------------------------------

class B: public A{
    public:
    B(int value){
        cout << "\nClass B create with value: "<< value <<"\n\n";
    }
    int Num_public_B;
    void Function_public_B(int pb);

};
void B::Function_public_B(int pb){
    Num_public_B = pb;
    cout << "Class B public value: "<< pb <<"\n\n";
}

//------------------------------------------------------------------------------------------------------------------------------------------------------
int main(){
    A Obj_A;            // Class A object. Base class
    B Obj_B(45);        // Class B object. Derived class A
    B *ptr;             // Pointer class B object

    // A:
    cout<<"\n\nUsing class A\n";
    Obj_A.Function_public_A(3,7);

    //B:
    cout<<"\n\nUsing class B\n";
    Obj_B.Function_public_A(78,27);
    Obj_B.Function_public_B(65);

    //ptr;
    ptr=&Obj_B;
    cout<<"\n\n\n Using pointer class B:\n";
    ptr->Function_public_A(12,13);
    ptr->Function_public_B(125);
    cout<<"\n\n\n\n";


    return 0;
}

