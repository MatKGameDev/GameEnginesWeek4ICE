#include "Wrapper.h"
#include "GameObject.h"

GameObject gameObject;

PLUGIN_API int GetID()
{
	return gameObject.GetID();
}

PLUGIN_API void SetID(const int a_id)
{
	gameObject.SetID(a_id);
}

PLUGIN_API Vector3D GetPosition()
{
	return gameObject.GetPosition();
}

PLUGIN_API void SetPosition(const float a_x, const float a_y, const float a_z)
{
	gameObject.SetPosition(a_x, a_y, a_z);
}

