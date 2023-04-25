//
// Created by Wardy on 26/12/2022.
//

#ifndef RAYTRACINGWEEKEND_SPHERE_H
#define RAYTRACINGWEEKEND_SPHERE_H

#include <utility>

#include "hittable.h"
#include "vec3.h"

class sphere : public hittable {
public:
    sphere() = default;
    sphere(point3 cen, double r, shared_ptr<material> m)
            : center(cen), radius(r), mat_ptr(std::move(m)) {};

    bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const override;

public:
    point3 center;
    double radius{};
    shared_ptr<material> mat_ptr;
};


#endif //RAYTRACINGWEEKEND_SPHERE_H
