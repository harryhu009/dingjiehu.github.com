#include <iostream>
#include <cmath>



double height = 10, launch_velocity = 600;

double gravity();
double gravity()
{
    return 9.80665;
}
double horizontal_velocity(double launch_velocity , double launch_angle);
double horizontal_velocity(double launch_velocity , double launch_angle)
{

    return launch_velocity * cos(launch_angle * M_PI/180);
}
double vertical_velocity(double launch_velocity, double launch_angle);
double vertical_velocity(double launch_velocity, double launch_angle)
{
    return launch_velocity * sin(launch_angle * M_PI/180);
}
double computed_range(double launch_velocity, double launch_angle, double height);
double computed_range(double launch_velocity, double launch_angle, double height)
{
    return horizontal_velocity(launch_velocity , launch_angle) * vertical_velocity(launch_velocity , launch_angle) / gravity() + horizontal_velocity(launch_velocity , launch_angle) * sqrt(vertical_velocity(launch_velocity , launch_angle) * vertical_velocity(launch_velocity , launch_angle) + 2 * gravity() * height)/gravity();
}
#ifndef MARMOSET_TESTING
int main();
#endif

#ifndef MARMOSER_TESTING

int main() {

    std::cout << "The range the banana reaches for the launch angle of " << 10 << " degrees is  : " <<  computed_range(launch_velocity, 10, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 20 << " degrees is  : " <<  computed_range(launch_velocity, 20, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 25.5 << " degrees is  : " <<  computed_range(launch_velocity, 25.5, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 30 << " degrees is  : " <<  computed_range(launch_velocity, 30, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 40 << " degrees is  : " <<  computed_range(launch_velocity, 40, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 50 << " degrees is  : " <<  computed_range(launch_velocity, 50, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 55.5 << " degrees is  : " <<  computed_range(launch_velocity, 55.5, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 60 << " degrees is  : " <<  computed_range(launch_velocity, 60, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 70 << " degrees is  : " <<  computed_range(launch_velocity, 70, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 75.5 << " degrees is  : " <<  computed_range(launch_velocity, 75.5, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 80 << " degrees is  : " <<  computed_range(launch_velocity, 80, height) << std::endl;
    std::cout << "The range the banana reaches for the launch angle of " << 90 << " degrees is  : " <<  computed_range(launch_velocity, 90, height) << std::endl;

    return 0;
}

#endif
