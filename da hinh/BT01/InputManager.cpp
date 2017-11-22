#include "InputManager.h"



InputManager* InputManager::m_instance = 0;

InputManager* InputManager::Get_instance()
{
	if (m_instance == 0)
	{
		m_instance = new InputManager();
	}
	return m_instance;
}

void InputManager::method()
{
	cout << "lenh\n";
}
InputManager::InputManager()
{
}


InputManager::~InputManager()
{
}
