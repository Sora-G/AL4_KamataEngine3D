#include "MathUtilityForText.h"

Vector3& operator+=(Vector3& lhs, const Vector3& rhv) {
	lhs.x += rhv.x;
	lhs.y += rhv.y;
	lhs.z += rhv.z;
	return lhs;
}