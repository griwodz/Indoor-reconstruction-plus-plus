

#pragma once


#include <vector> 


#if defined __GNUC__ || defined __APPLE__
#include <Eigen/Dense>
#else
#include <eigen3/Eigen/Dense>
#endif


/////////////////////////////////////////////////////////////////////////////////////////////


std::vector <Eigen::Matrix4d> make_transformation_matrices(const std::vector <std::pair <Eigen::Vector4d, double> > & quaternions); 


/////////////////////////////////////////////////////////////////////////////////////////////
