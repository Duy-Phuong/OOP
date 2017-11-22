#pragma once
#include <iostream>
using namespace std;

class InputManager
{
private:
	InputManager();
	~InputManager();
	static InputManager* m_instance;
public:
	static InputManager* Get_instance();
	void method();
};

