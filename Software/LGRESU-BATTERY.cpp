#include "MODBUS-LGRESU.h"

void update_modbus_registers_lgresu()
{
    //Updata for ModbusRTU Server for Luna2000
    handle_update_data_modbus32051();
    handle_update_data_modbus39500();
}

void handle_update_data_modbus32051() {
  // Store the data into the array
  static uint16_t system_data[9];
  system_data[0] = 1;
  system_data[1] = 534;                 //Goes between 534-498 depending on SOC
  system_data[2] = 110;                 //Goes between 110- -107 [NOTE, SIGNED VALUE]
  system_data[3] = 0;                   //Goes between 0 and -1  [NOTE, SIGNED VALUE]
  system_data[4] = 616;                 //Goes between 616- -520 [NOTE, SIGNED VALUE]
  system_data[5] = temperature_max;     //Temperature max?
  system_data[6] = temperature_min;     //Temperature min?
  system_data[7] = (SOC/100);           //SOC 0-100%, no decimals 
  system_data[8] = 98;                  //Always 98 in logs
  static uint16_t i = 2051;
  memcpy(&mbPV[i], system_data, sizeof(system_data));
}
