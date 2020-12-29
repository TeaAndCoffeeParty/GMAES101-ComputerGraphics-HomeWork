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
    Eigen::Vector2d p(2, 1);
	std::cout << p << std::endl;

    double rotationAngle = 45.0/180.0*M_PI;
    double rotationX = p(0,0)*std::cos(-rotationAngle) - p(1,0) *std::sin(-rotationAngle);
    double rotationY = p(1,0)*std::cos(-rotationAngle) + p(0,0) *std::sin(-rotationAngle);
    std::cout<<rotationX<<" "<<rotationY<<std::endl;
    Eigen::Vector2d p0(rotationX, rotationY);
    std::cout<<p0<<std::endl;
}
