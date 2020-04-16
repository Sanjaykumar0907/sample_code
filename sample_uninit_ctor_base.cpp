
// --enable-checker alpha.cplusplus.UninitializedObject
class Base {

      int i;
      int j;
      int k;
    public:
          Base( ) {}

          Base(int i1, int j1):i(i1),j(j1){}

};

int func_base() {

    
    //Base b(1,2);

    return 0;

}

/*  

Clang unable to detect: 

Error: UNINIT_CTOR:
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:5:
member_decl: Class member declaration for "i".
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:9:
uninit_member: Non-static class member "i" is not initialized in this constructor nor in any functions that it calls.
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:6:
member_decl: Class member declaration for "j".
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:9:
uninit_member: Non-static class member "j" is not initialized in this constructor nor in any functions that it calls.
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:7:
member_decl: Class member declaration for "k".
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:9:
uninit_member: Non-static class member "k" is not initialized in this constructor nor in any functions that it calls.

Error: UNINIT_CTOR:
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:7:
member_decl: Class member declaration for "k".
/homes/viditac/clang-sa-new/sample_uninit_ctor.cpp:11:
uninit_member: Non-static class member "k" is not initialized in this constructor nor in any functions that it calls.

*/ 
