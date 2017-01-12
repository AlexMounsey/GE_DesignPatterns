
#include "stdafx.h"
#include <iostream>
using namespace std;

class DrawAPI
{
public:
	~DrawAPI() {
		cout << "Destroy DrawAPI" << endl;

	}
	virtual void Draw() = 0;
};

class DrawImpl : public DrawAPI
{
public:
	~DrawImpl() {
		cout << "Destroy DrawImpl" << endl;

	}
	void Draw() {
		cout << "Draw Impl" << endl; }
	};

	class Character
	{
	public:
		~Character() {
			cout << "Destroy Character" << endl;

		}
		virtual void Draw() = 0;
	};

	class Player : public Character
	{
	public:
		Player(DrawAPI* api) { this->api = api; }
		~Player() {
			cout << "Destroy Player" << endl;

		}
		void Draw() { api->Draw(); }
	private:
		DrawAPI* api;
	};
	void leakFunc()
	{
		DrawAPI* api = new DrawImpl();
		Character* character = new Player(api);
		character->Draw();
		cin.get();

		delete api;
		delete character;

	}
	int main()
	{
		leakFunc();
		system("PAUSE");
	}