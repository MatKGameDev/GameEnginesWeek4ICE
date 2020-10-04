#include "GameObject.h"

GameObject::GameObject()
{
	SetID();
	SetPosition();
}

int GameObject::GetID() const
{
	return m_id;
}

void GameObject::SetID(const int a_id)
{
	m_id = a_id;
}

Vector3D GameObject::GetPosition() const
{
	return m_position;
}

void GameObject::SetPosition(const float a_x, const float a_y, const float a_z)
{
	m_position.x = a_x;
	m_position.y = a_y;
	m_position.z = a_z;
}

