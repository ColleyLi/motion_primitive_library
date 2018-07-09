/**
 * @file ellipsoid_planner.h
 * @brief motion planning in SE(3) using ellipsoids for collision checking
 */

#ifndef MPL_ELLIPSOID_PLANNER_H
#define MPL_ELLIPSOID_PLANNER_H

#include <mpl_planner/env/env_cloud.h>
#include <mpl_planner/common/planner_base.h>

namespace MPL {

/**
 * @brief Motion primitive planner using point cloud
 */
class EllipsoidPlanner : public PlannerBase<3, Waypoint3D> {
public:
  /**
   * @brief Simple constructor
   * @param verbose enable print out
   */
  EllipsoidPlanner(bool verbose);
  /// Set map util
  void setMap(const vec_Vec3f &obs, decimal_t r,
              const Vec3f &ori, const Vec3f &dim);
};
}

#endif
