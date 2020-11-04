#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <QVector3D>

using namespace std;

#ifndef TRANSFORM_H
#define TRANSFORM_H

class Transform {

//fields
private:
    QVector3D s; //uniform scale
    QVector3D r; //rotation
    QVector3D t; //translation

public:
    Transform();

    //methods
    QVector3D applyToPoint(QVector3D p);
    QVector3D applyToVector(QVector3D v);
    QVector3D applyToVersor(QVector3D v);

    Transform combine_with(Transform& t);
    Transform inverse();
    Transform interpolate_with(Transform& t, float k);
    /*
    Transform mix_with(Transform b, float k){
        Transform result;
        result.s = this.s * k + b.s * (1-k);
        result.r = this.r.mix_with(b.r, k);
        result.t = this.t * k + b.t * (1-k);
        return result;
    }*/
};

#endif // TRANSFORM_H
