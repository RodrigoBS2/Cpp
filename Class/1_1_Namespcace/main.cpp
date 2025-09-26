#include<iostream>

/*
    Namespaces are regions in a program logically separated from the rest. They are necessary if you want more than 
    one function with the same name. You can declare two different namespaces for these functions and call them by 
    referencing their corresponding namespace.

    Namespaces are regions in a program logically separated from the rest. They are necessary if you want more than one function with the same name. You can declare two different namespaces for these functions and call them by referencing their corresponding namespace. 


    Definition:
    You can define a namespace as follows:

    namespace namespace_name
    {
        int a, b; 
    }

    Access Namespace Members:
    namespace_name::namespace_member;


*/

// With Namesppace-------------------------------------------------------------------------------------


namespace A{
    class B{
        public:
        B(){std::cout<<"\nClass B object with namespace create\n";}
        void Public_fuction(int pv);
        private:
        int value;
    };
    void B::Public_fuction(int pv){
        value = pv;
        std::cout<<"\nClass B (with namespace) public function with private value: "<<value<<"\n\n\n";
    }

    void Print(){
        std::cout<<"\nPrint function namespace A\n\n\n";
    }

    int data=10000;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// No namespace -----------------------------------------------------------------------------
class B{
        public:
        B(){std::cout<<"\nClass B object create\n";}
        void Public_fuction(int pv);
        private:
        int value;
    };
void B::Public_fuction(int pv){
    value = pv;
    std::cout<<"\nClass B public function with private value: "<<value<<"\n\n\n";
}

void Print(){std::cout<<"\nPrint function without namespace A\n\n\n";}

//----------------------------------------------------------------------------------------------

int main(){
    int data = 5000;
    // Namespace A:
    A::B obj;
    obj.Public_fuction(37);
    A::Print();

    //No namespace A:
    B obj_1;
    obj_1.Public_fuction(37);
    Print();
    std::cout << "\nNo namespace data: " << data << "\n\n";

    return 0;
}
