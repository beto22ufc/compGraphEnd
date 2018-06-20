#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <Point3d.h>

class Vector3d
{
    public:
        double i, j, k;
        Vector3d();
        virtual ~Vector3d();
        Vector3d(double i, double j, double k);
        Vector3d operator +(Vector3d v);
        Vector3d& operator +=(Vector3d v);
        Vector3d operator -(Vector3d v);
        Vector3d& operator -=(Vector3d v);
        Vector3d operator -();
        Vector3d dot(Vector3d v);
        Vector3d cross(Vector3d v);
    protected:

    private:
};

#endif // VECTOR3D_H
