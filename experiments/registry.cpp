#include "registry.hpp"

#include "bezier_lab/bezier_lab.hpp"
#include "noise_terrain/noise_terrain.hpp"
#include "parametric_curves/parametric_curves.hpp"
#include "scalar_fields/scalar_fields.hpp"
#include "transform_rosettes/transform_rosettes.hpp"

#include <vector>

namespace experiments {

std::vector<std::unique_ptr<engine::core::Experiment>> createStarterExperiments()
{
    std::vector<std::unique_ptr<engine::core::Experiment>> list;
    list.push_back(createBezierLab());
    list.push_back(createParametricCurves());
    list.push_back(createTransformRosettes());
    list.push_back(createScalarFields());
    list.push_back(createNoiseTerrain());
    return list;
}

} // namespace experiments
