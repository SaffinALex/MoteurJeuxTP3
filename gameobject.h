#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "transform.h"
#include <QVector>
#include <QOpenGLFunctions_3_1>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
using namespace std;
struct VertexData
{
    QVector3D position;
    QVector2D texCoord;
};

class GameObject
{

public:
    GameObject* parent;
    Transform localTransform, worldTransform;
    QVector<GameObject*> fils;
    GameObject();
    GameObject(Transform t);
    void update();
    void update(Transform);
    Transform getWorldTransform();

};

#endif // GAMEOBJECT_H
