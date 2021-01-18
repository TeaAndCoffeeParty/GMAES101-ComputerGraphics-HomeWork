#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

/*3.1作业描述
 * 给定一个点 P =(2,1), 将该点绕原点先逆时针旋转 45◦ ,再平移 (1,2), 计算出
 * 变换后点的坐标(要求用齐次坐标进行计算)。
 */
int main()
{
    Eigen::Vector3d p(2, 1, 1);
    Eigen::Matrix3d rotaMat;
    Eigen::Matrix3d tranMat;

    double rotAngle = 45.0/180.0*M_PI;
    rotaMat <<  cos(rotAngle),      (-1.0)*sin(rotAngle),   0,
                sin(rotAngle),      cos(rotAngle),          0,
                0,                  0,                      1;
    tranMat <<  1, 0, 1,
                0, 1, 2,
                0, 0, 1;
    p = tranMat * rotaMat * p;
//    std::cout<< p << std::endl;
    std::cout <<  "After rotation and transform the point sits at "
        << p[0] << "," << p[1] << std::endl;
}
