#ifndef TRANSFORM_H
#define TRANSFORM_H
#include <QVector3D>
class Transform
{

    public:
        float s; //Scale uniforme
        QVector3D r;
        QVector3D t;
        Transform();
        Transform(float s,QVector3D r,QVector3D t);
        Transform combine_with(Transform t);
        Transform inverse();
        Transform interpolate_with(Transform t, float k);
        Transform operator+(Transform transform);

};

#endif // TRANSFORM_H
