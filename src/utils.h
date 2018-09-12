//
// Created by Andrei Neagu on 12/09/18.
//

#ifndef MPC_UTILS_H
#define MPC_UTILS_H

#include "math.h"
#include <vector>

// cost weights
static std::vector<double> COST_WEIGHT_REFERENCE_STATE = {1, 10, 1};
static std::vector<double> COST_WEIGHT_ACTUATORS = {10, 1};
static std::vector<double> COST_WEIGHT_SEQUENTIAL_ACTUATORS = {600, 1};

// setup custom limits, +/- is not included
constexpr double DELTA_LIMITS = 25;
constexpr double NON_ACTUATOR_LIMITS = 1.0e19;
constexpr double ACCELERATION_BREAK_LIMITS = 2;

double deg2rad(double x);

double rad2deg(double x);

std::vector<double> from_map_to_car_reference_system(std::vector<double> current_car_position,
                                                     std::vector<double> pos);

#endif //MPC_UTILS_H
