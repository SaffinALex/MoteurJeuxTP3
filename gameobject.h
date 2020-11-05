#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "transform.h"
#include <QVector>

class GameObject
{
    Transform t;
    QVector<GameObject> gameObjects;
public:
    GameObject();
    GameObject(Transform t);
    void update();
    void update(Transform);

};

#endif // GAMEOBJECT_H
