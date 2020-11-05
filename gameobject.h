#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "transform.h"
#include <QVector>

class GameObject
{
    GameObject* parent;
    Transform localTransform, worldTransform;
    QVector<GameObject*> fils;
public:
    GameObject();
    GameObject(Transform t);
    void update();
    void update(Transform);
    Transform getWorldTransform();

};

#endif // GAMEOBJECT_H
