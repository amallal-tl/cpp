#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		int age;
	
	public:
		void setName(string name){
			this->name = name;
		}
		
		void setAge(int age){
			this->age = age;
		}
		
		string getName(){
			return name;
		}
		
		int getAge(){
			return age;
		}
};

int main(){
	Person p;
	p.setName("Amal");
	p.setAge(28);
	
	cout << "My name is " << p.getName() << " and my age is " << p.getAge();
}