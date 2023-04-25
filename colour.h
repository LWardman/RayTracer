//
// Created by Wardy on 26/12/2022.
//

#ifndef RAYTRACINGWEEKEND_COLOUR_H
#define RAYTRACINGWEEKEND_COLOUR_H

#include "vec3.h"
#include "rtweekend.h"
#include <iostream>

void write_colour(std::ostream &out, colour pixel_colour, int samples_per_pixel) {

    double r = pixel_colour.x();
    double g = pixel_colour.y();
    double b = pixel_colour.z();

    // Divide the colour by the number of samples
    double scale = 1.0 / samples_per_pixel;
    r = sqrt(scale * r);
    g = sqrt(scale * g);
    b = sqrt(scale * b);


    // Write the translated [0, 255] value of each colour component
    out << static_cast<int>(256 * clamp(r, 0.0, 0.999)) << " "
        << static_cast<int>(256 * clamp(g, 0.0, 0.999)) << " "
        << static_cast<int>(256 * clamp(b, 0.0, 0.999)) << "\n";
}

#endif //RAYTRACINGWEEKEND_COLOUR_H
