//
// Created by Wardy on 26/12/2022.
//

#ifndef RAYTRACINGWEEKEND_HITTABLE_LIST_H
#define RAYTRACINGWEEKEND_HITTABLE_LIST_H

#include "hittable.h"

#include <memory>
#include <vector>

using std::shared_ptr;
using std::make_shared;

class hittable_list : public hittable {
public:
    hittable_list() = default;

    [[maybe_unused]] explicit hittable_list(const shared_ptr<hittable>& object) { add(object); }

    [[maybe_unused]] void clear() { objects.clear(); }
    void add(const shared_ptr<hittable>& object) { objects.push_back(object); }

    bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const override;

public:
    std::vector<shared_ptr<hittable>> objects;
};


#endif //RAYTRACINGWEEKEND_HITTABLE_LIST_H
