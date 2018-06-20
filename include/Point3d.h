#ifndef POINT3D_H
#define POINT3D_H

#include <Vector3d.h>
#include <Plane.h>

class Point3d
{
    public:
        Point3d();
        virtual ~Point3d();
        double x, y, z;
        Point3d(double x, double y, double z);
        Point3d operator +(Vector3d v);
        Point3d& operator +=(Vector3d v);
        Vector3d operator -(Point3d p);
        double distanceTo(Point3d p);
        double distanceTo(Plane p);
    protected:

    private:
};

#endif // POINT3D_H
