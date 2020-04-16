#include <iostream>
using namespace std; 

static int check_null(const char *str) {
	int ret = 0;
        if (str == NULL) return -1; 
        return ret;

}
class Base {
    protected:
          const char *str;
    public:
          Base( ) { str = NULL;}

          virtual int getdata(){ return -1 ; }
};

class Derived_pub: public Base {
   public:
     Derived_pub() {
          int d = 0 ;
          int ret = 0;
          cin >> d;
          if (d) {
              //this->str = new char(10);
               str = "Hello World";
   	  }
 }
      int getdata() {
	int ret;
       ret = check_null(str);

       
       if (str == NULL) ret = -1;
        if (ret == 0) { }
        else
              cout << str;

      return ret;
	}

	
};

int func_derived() {

    Derived_pub dbpub;   
    dbpub.getdata(); 
}
