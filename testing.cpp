#include<iostream>
using namespace std;
class c2;
class c1{
	private:
		int value1;
		friend	void exchange(c1 ,c2 );
		public:
		void setData(int a){
			value1=a;
		}
		void display(void)
{    cout<<"The number o1 before exchange is "<<value1<<endl;
	
	}	};
	class c2{
		private:
			int value2;
		friend	void exchange(c1,c2);
			public:
				void setData(int b){
					value2=b;
				}
				void display(void) {
				
   cout<<"The number o2 before exchange is "<<value2<<endl;
}
	
};
void exchange(c1 x,c2 y){
	int temp=x.value1;
	x.value1=y.value2;
	y.value2=temp;
	cout<<"The value of o1 after exchange becomes "<<x.value1<<endl;
	cout<<"The value of o2 after exchange becomes "<<y.value2<<endl;
}

int main(){
	
c1 o1;
o1.setData(23);
o1.display();
c2 o2;
o2.setData(45);
o2.display();
cout<<endl;
cout<<endl;
exchange(o1,o2);
//after exchange
cout<<"after exchange not change"<<endl;
o1.display();
o2.display();
}