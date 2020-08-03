#include "paramchecker.h"
#include <gtest/gtest.h>

TEST(vehicleTest, when_a_vehicle_detail_is_passed) {

Struct{
id;
temp;  
}vehicle;
vehicle= fetch_Vehicle_Measurement(id,temp)
ASSERT_EQ(store_vehicle_data(vehicle));
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
