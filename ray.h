//
// Created by Wardy on 26/12/2022.
//

#ifndef RAYTRACINGWEEKEND_RAY_H
#define RAYTRACINGWEEKEND_RAY_H

#include "vec3.h"

class ray {
public:
    ray() = default;
    ray(point3 const& origin, vec3 const& direction)
            : orig(origin), dir(direction)
    {}

    [[nodiscard]] point3 origin() const { return orig; }
    [[nodiscard]] vec3 direction() const { return dir; }

    [[nodiscard]] point3 at(double t) const {
        return orig + t * dir;
    }

public:
    point3 orig;
    vec3 dir;
};


#endif //RAYTRACINGWEEKEND_RAY_H
