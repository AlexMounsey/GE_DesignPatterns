#include <iostream>
using namespace std;
class Character
{
public:
        Character() { }
		~Character() {
			cout << "Destroy Character" << endl;

		}
		void Print() { cout << "Printing Character" << endl; }
};
class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character()) {  }
	~HandleToCharacter()
	{
		delete character;
	}
	Character* operator->() { return character; } //overloaded ->
private:
	Character* character;
};


void leakFunc()
{
	HandleToCharacter handle; handle->Print();
}
 
int main()
{    
	leakFunc();
	system("PAUSE");
}