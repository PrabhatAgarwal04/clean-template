enum measure{
battery_pc,
battery_temp,
motor_temp

}

struct telematics{
int vehicle_id;
measure type;
float measurement;
};

struct inventory {
int vehicle_id;
float battry_pc;
float battery_temp;
float motor_temp;
};

  inventory store(telematics s){
   inventory vehicleStorage = {0,0,0,0};
      s={230,motor_temp,30};
      return vehicleStorage;
   }
