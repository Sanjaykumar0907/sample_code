

class Base {

      int i;
      int j;
      int k;
      int l;
      Base *b;
    public:
          Base( ) {}

          Base(int i1, int j1):i(i1),j(j1){}

};

class Derived_pub: public Base {
   int d1;
   public:
     Derived_pub() {}
};


class Derived_prot: protected Base {
     int d2;
     public:
        Derived_prot();
};

class Derived_priv: private Base {
     int d3;
     public:
         Derived_priv();
};

int main() {

    Derived_pub dbpub;    
    Base b(1,2);
    return 0;

}
/*Error: UNINIT_CTOR:
/homes/viditac/clang-sa-new/sample_uninit_ctor_1.cpp:18:
member_decl: Class member declaration for "d1".
/homes/viditac/clang-sa-new/sample_uninit_ctor_1.cpp:20:
uninit_member: Non-static class member "d1" is not initialized in this constructor nor in any functions that it calls.
*/
