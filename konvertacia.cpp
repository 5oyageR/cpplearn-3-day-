#include <iostream>
using namespace std;

struct Person{
	char* name;
	int age;
};
int main(int argc, char** argv) {
	double x=2.5;
	int n=x; 
			cout << x << n << endl;
			
			void *p=&n;
								long long y=reinterpret_cast<long long>(p);
			int* px=(int*)p; 
				int* px2 = static_cast<int*>(p);
					(*px)++;
					cout <<  n << endl;
					
					
					
						const int* pcn=px2;
						int* pm=const_cast<int*>(pcn);
						
						
							volatile int* pcm = px2;
							int* pq=const_cast<int*>(pcm);
										
										
										
										bool a = true;
										bool b = false;
										bool c = !(a || c);
										cout << c << endl;
										
													Person p2 {"seva",21};
													int Person::*z= &Person::age;
//													cout <<  p2 << endl;
													cout << p2.*z<< endl;
//													cout << typeid(z).name() << endl;
													
													
	
	
}
