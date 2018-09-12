//
// Created by Andrei Neagu on 12/09/18.
//

#include "utils.h"

double deg2rad(double x) { return x * M_PI / 180; }

double rad2deg(double x) { return x * 180 / M_PI; }

std::vector<double> from_map_to_car_reference_system(std::vector<double> current_car_position,
                                                     std::vector<double> pos) {
    double car_x = current_car_position[0];
    double car_y = current_car_position[1];
    double car_psi = current_car_position[2];

    double x = pos[0];
    double y = pos[1];

    double x1 = (x - car_x) * cos(car_psi) + (y - car_y) * sin(car_psi);
    double y1 = -(x - car_x) * sin(car_psi) + (y - car_y) * cos(car_psi);

    return {x1, y1};
}