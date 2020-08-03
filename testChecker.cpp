#include "vehicleInventory.h"
#inlude "vehileInventory.cpp"
#include <gtest/gtest.h>

TEST(vehicleTest, when_a_vehicle_detail_is_passed) {
    telematics vehicle_data = {230,motor_temp,30};
inventory sto = store(vehicle_data);
ASSERT_EQ(sto.temp,30);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
