#include "transform.h"

Transform::Transform()
{
    s = 1;
    r = QVector3D(0,0,0);
    t = QVector3D(0,0,0);
}


Transform::Transform(float s, QVector3D r, QVector3D t){
    this->s = s;
    this->r = r;
    this->t = t;
}
Transform Transform::combine_with(Transform t){
    Transform result;
    result.s= this->s* t.s;
    result.r= this->r;
    result.t=  t.t /*+t.r.apply( this->t* t.s)*/ ;
    return  result;
}
Transform Transform::inverse(){
    Transform res;
    res.s= 1.0f / this->s;
    res.r= r;
    res.t= -this->t;
    res.t= this->t;/*res.r.apply( res.t*res.s);*/
    return res;
}
Transform Transform::interpolate_with(Transform t, float k){
    Transform result;
    result.s= this->s* k+ t.s* (1-k);

    result.r= this->r/*.mix_with( t.r,k)*/;
    result.t= this->t* k+ t.t * (1-k);
    return result;
}

Transform Transform::operator+(Transform transform){
    Transform se;
    se.t=t+ transform.t;
    se.r= r+ transform.r;
    se.s= s + transform.s;
    return se;
}
