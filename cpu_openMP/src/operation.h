#ifndef OPERATION_H
#define OPERATION_H

#include "ray.h"
#include "vec3.h"
#include "hittable.h"

class operation {
    public:
        operation() {}
        operation(const ray& scattered, const color& attenuation, int x, int y, int depth=1)
            : scat(scattered), atten(attenuation), indX(x), indY(y), dep(depth)
        {}

    public:
        ray scat;
        color emit = color(0, 0, 0);
        color atten;
        int dep;
        int indX;
        int indY;
        int finished = 0;
};

#endif