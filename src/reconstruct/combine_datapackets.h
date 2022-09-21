#pragma once

#include <string>
#include <vector>
#include <pcl/point_cloud.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void
combine_datapackets_to_scans(std::vector<std::vector<pcl::PointCloud<pcl::PointXYZL> > > datapacket_clouds,
                             const std::vector<Eigen::Vector4d, Eigen::aligned_allocator<Eigen::Vector4d> > &quaternions,
                             const std::string& path);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void
combine_datapackets_to_fragment( std::vector<std::vector<pcl::PointCloud<pcl::PointXYZL> > > datapacket_clouds,
                                 const std::vector<Eigen::Vector4d, Eigen::aligned_allocator<Eigen::Vector4d> > &quaternions,
                                 const std::string& path,
                                 bool  show );
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
